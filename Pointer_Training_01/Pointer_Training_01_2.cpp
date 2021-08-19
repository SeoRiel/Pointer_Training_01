#include <iostream>
#include <string>

int main()
{
	size_t input{};

	std::cout << "�� ���� ģ���� �ֳ���? : ";
	std::cin >> input;

	std::string* names{ new std::string[input] };
	std::string longName;

	if (input <= 0)
	{
		std::cout << "�ùٸ��� ���� ���� �Է��Ͽ����ϴ�." << std::endl;
		return 0;
	}

	if (names != nullptr)
	{
		for (int i = 0; i < input; ++i)
		{
			std::cout << "ģ��" << "#" << i + 1 << "�̸� : ";
			std::cin >> names[i];
		}

		for (int i = 0; i < input; ++i)
		{
			for (int j = 0; j < input; ++j)
			{
				if(names[i].size() < names[j].size())
				{
					longName = names[j];
				}
				else if(names[i].size() > names[j].size())
				{
					longName = names[i];
				}
			}
		}

		std::cout << "�̸��� ���� �� ģ���� " << longName << "�Դϴ�." << std::endl;
	}

	delete[] names;
}