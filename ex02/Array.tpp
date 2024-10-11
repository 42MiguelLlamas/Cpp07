#ifndef ARRAY_TPP
#define ARRAY_TPP

#include "Array.hpp"
#include <iostream>

template <typename T>
Array<T>::Array() : len(4)
{
	std::cout << "Default constructor called. " << std::endl;
	this->array = new T[len];
	for (unsigned int i = 0; i < len; i++)
	{
		this->array[i] = i;
	}
	
}

template <typename T>
Array<T>::Array(unsigned int n) : len(n)
{
	std::cout << "Size constructor called. " << std::endl;
	if (len > 0)
	{
		this->array = new T[len];
		for (unsigned int i = 0; i < len; i++)
		{
			this->array[i] = i;
		}
	}
	else
		this->array = NULL;
}

template <typename T>
Array<T>::Array(Array<T> &src)
{
	std::cout << "Copy constructor called. " << std::endl;
	this->len = src.size();
	if (this->len > 0)
	{
		this->array = new T[len];
		for (unsigned int i = 0; i < len; i++)
		{
			this->array[i] = src[i];
		}
	}
	else
		this->array = NULL;

}

template <typename T>
Array<T> &Array<T>::operator=(Array<T> &src)
{
	std::cout << "Copy assignment operator called. " << std::endl;
	this->len = src.size();
	if (this->len > 0)
	{
		this->array = new T[len];
		for (unsigned int i = 0; i < len; i++)
		{
			array[i] = src[i];
		}
	}
	else
		this->array = NULL;
}

template <typename T>
T& Array<T>::operator[](unsigned int index)
{
	if (index >= len)
		throw(std::out_of_range("Fuera de rango."));
	return array[index];
}


template <typename T>
Array<T>::~Array()
{
	delete[] array;
	std::cout << "Destructor called. " << std::endl;
}

template <typename T>
unsigned int Array<T>::size() const
{
	return len;
}

template <typename T>
void Array<T>::print()
{
	std::cout << "{";
	for (unsigned int i = 0; i < len ; i++)
	{
		std::cout << this->array[i];
		if (i < len - 1)
			std::cout << ",";
	}
	std::cout << "}" <<std::endl;
}
    


#endif