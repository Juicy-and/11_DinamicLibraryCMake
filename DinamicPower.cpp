#include "DinamicPower.h"
#include <iostream>
namespace DinamicPower
{
	void Leaver::leave(std::string name)
	{
		std::cout << "������� ���: ";
		std::cin >> name;
		std::cout << "�� ��������, " << name << "!" << std::endl;
	}
}