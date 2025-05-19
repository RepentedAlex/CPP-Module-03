#include <iostream>

#include "DiamondTrap.hpp"

#define BLUE	"\033[34m"
#define RESET	"\033[0m"

#define PRINT_SECTION_TITLE(x) \
do { \
	std::cout << BLUE x RESET << std::endl; \
} while (0)

int main()
{
	PRINT_SECTION_TITLE("### TESTING DIAMONDTRAP ###");
	{
		PRINT_SECTION_TITLE("\tConstructing");
		DiamondTrap c;
		DiamondTrap d("Malingen");

		PRINT_SECTION_TITLE("\tTesting");
		c.attack("CloneTrap");
		// for (int i = 0; i < 50; i++)
		// 	c.attack("CloneTrap");
		c.beRepaired(22);
		c.takeDamage(21);
		c.beRepaired(22);
		c.whoAmI();
		c.whoAmI();
		d.attack("Malingen-clone");
		d.takeDamage(101);
		d.takeDamage(15);
		d.attack("ScavTrap-clone");
		PRINT_SECTION_TITLE("\tDeconstructing");
	}

	return (0);
}
