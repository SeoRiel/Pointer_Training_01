#include <iostream>

// 1. ������ ���� ���� �迭�� ����� ������.
// �׸���, �� �����迭�� ũ�⸦ ������ ���� 3���� �ٿ� ���ô�.
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

	// �������� �Ҵ�� �迭�̹Ƿ� ������� ��� ���丸���δ� �迭�� ũ�⸦ ������ �� ����.
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