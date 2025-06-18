#include <iostream>

#include "ClapTrap.hpp"

#define BLUE	"\033[34m"
#define RESET	"\033[0m"

int main()
{
	{
		std::cout << "### TESTING CLAPTRAP ###" << std::endl;
		std::cout << BLUE "Constructing" RESET << std::endl;
		ClapTrap a;
		ClapTrap b("Cody");

		std::cout << BLUE "Testing" RESET << std::endl;
		a.attack("some other robot");
		a.takeDamage(10);
		a.takeDamage(10);
		a.beRepaired(5);
		a.attack("some other other robot");
		b.beRepaired(3);
		for (int i = 0; i < 12; i++)
			b.attack("Cody-clone");
		b.beRepaired(3);
		std::cout << BLUE "Deconstructing" RESET << std::endl;
	}

	return (0);
}
