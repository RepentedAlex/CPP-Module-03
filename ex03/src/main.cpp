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

	std::cout << std::endl << std::endl;

	{
		PRINT_SECTION_TITLE("### TESTING SCAVTRAP ###");
		PRINT_SECTION_TITLE("\tConstructing");
		ScavTrap c;
		ScavTrap d("Savage");

		PRINT_SECTION_TITLE("\tTesting");
		c.attack("CloneTrap");
		c.beRepaired(22);
		c.takeDamage(21);
		c.beRepaired(22);
		c.guardGate();
		c.guardGate();
		d.attack("Savage-clone");
		d.takeDamage(101);
		d.takeDamage(15);
		d.attack("ScavTrap-clone");
		PRINT_SECTION_TITLE("\tDeconstructing");
	}

	std::cout << std::endl << std::endl;

	{
		PRINT_SECTION_TITLE("### TESTING FRAGTRAP ###");
		PRINT_SECTION_TITLE("\tConstructing");
		FragTrap c;
		FragTrap d("Lockne");

		PRINT_SECTION_TITLE("\tTesting");
		c.attack("CloneTrap");
		c.beRepaired(22);
		c.takeDamage(21);
		c.beRepaired(22);
		c.highFivesGuys();
		c.highFivesGuys();
		d.attack("Lockne-clone");
		d.takeDamage(101);
		d.takeDamage(15);
		d.attack("ScavTrap-clone");
		PRINT_SECTION_TITLE("\tDeconstructing");
	}

	std::cout << std::endl << std::endl;

	{
		PRINT_SECTION_TITLE("### TESTING DIAMONDTRAP ###");
		PRINT_SECTION_TITLE("\tConstructing");
		DiamondTrap c;
		DiamondTrap d("Malingen");
		DiamondTrap	e("TEST");

		PRINT_SECTION_TITLE("\tTesting");
		c.attack("CloneTrap");
		c.beRepaired(22);
		c.takeDamage(21);
		c.beRepaired(22);
		c.whoAmI();
		d.whoAmI();
		d.attack("Lockne");
		d.takeDamage(101);
		d.takeDamage(15);
		d.attack("ScavTrap-clone");
		c = d;
		PRINT_SECTION_TITLE("\tDeconstructing");
	}

	return (0);
}
