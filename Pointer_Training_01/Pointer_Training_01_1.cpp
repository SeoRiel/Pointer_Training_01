#include <iostream>

// 1. 다음과 같은 동적 배열을 만들어 보세요.
// 그리고, 위 동적배열의 크기를 다음과 같이 3개로 줄여 봅시다.
int main()
{
	int* pNumbers = new int[5] { 4, 8, 5, 3, 1 };
	int* heapCopy = new int[3];

	for (int i = 0; i <= sizeof(*pNumbers) ; i++)
	{
		std::cout << pNumbers[i] << " ";
	}

	std::cout << std::endl;

	for (int i = 0; i < 3; ++i)
	{
		heapCopy[i] = pNumbers[i];
	}

	delete[] pNumbers;

	// 동적으로 할당된 배열이므로 현재까지 배운 개념만으로는 배열의 크기를 조절할 수 없음.
	pNumbers = new int[3];

	for (int i = 0; i <= sizeof(*pNumbers) ; i++)
	{
		pNumbers[i] = heapCopy[i];
		std::cout << pNumbers[i] << " ";
	}

	std::cout << std::endl;

	delete[] heapCopy;
	heapCopy = nullptr;

	delete[] pNumbers;
	pNumbers = nullptr;
}