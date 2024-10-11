#include "iter.hpp"

int main(void)
{
	std::string arr[4] = {"hla", "que2", "3", "tal4"};
	//int arr[4] = {1, 1, 3, 4};

	::iter(arr, 4, print);
	return 0;
}