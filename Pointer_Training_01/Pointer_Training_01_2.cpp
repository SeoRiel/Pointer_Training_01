#include <iostream>
#include <string>

int main()
{
	size_t input{};

	std::cout << "몇 명의 친구가 있나요? : ";
	std::cin >> input;

	std::string* names{ new std::string[input] };
	std::string longName;

	if (input <= 0)
	{
		std::cout << "올바르지 않은 값을 입력하였습니다." << std::endl;
		return 0;
	}

	if (names != nullptr)
	{
		for (int i = 0; i < input; ++i)
		{
			std::cout << "친구" << "#" << i + 1 << "이름 : ";
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

		std::cout << "이름이 가장 긴 친구는 " << longName << "입니다." << std::endl;
	}

	delete[] names;
}