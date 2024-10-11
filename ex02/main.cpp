#include "Array.hpp"

int main(void)
{
	Array<int> arr(5);
	arr[0] = 5;
	arr[1] = 20;
	Array<int> copyArr = arr;
	std::cout << "Size of array: " << arr.size() << std::endl;
	copyArr[0] = 4;
	arr.print();
	copyArr.print();

	return 0;
}