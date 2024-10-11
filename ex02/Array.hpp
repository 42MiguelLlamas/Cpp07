#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <stdexcept>

template <typename T> class Array
{
	private:
		T *array;
		unsigned int len;
	public:
		Array();
		Array(unsigned int n);
		Array(Array &src);
		Array &operator=(Array &src);
		T& operator[](unsigned int index);
		~Array();
		unsigned int size() const;
		void print();
};

#include "Array.tpp"


#endif