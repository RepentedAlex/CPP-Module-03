#include <iostream>

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

#define BLUE	"\033[34m"
#define RESET	"\033[0m"

#define PRINT_SECTION_TITLE(x) \
do { \
	std::cout << BLUE x RESET << std::endl; \
} while (0)

int main()
{
	PRINT_SECTION_TITLE("### TESTING CLAPTRAP ###");
	{
		PRINT_SECTION_TITLE("\tConstructing");
		ClapTrap a;
		ClapTrap b("Cody");

		PRINT_SECTION_TITLE("\tTesting");
		a.attack("some other robot");
		a.takeDamage(10);
		a.takeDamage(10);
		a.beRepaired(5);
		a.attack("some other other robot");
		b.beRepaired(3);
		for (int i = 0; i < 12; i++)
			b.attack("Cody-clone");
		b.beRepaired(3);
		PRINT_SECTION_TITLE("\tDeconstructing");
	}

	std::cout << std::endl << std::endl;

	PRINT_SECTION_TITLE("### TESTING SCAVTRAP ###");
	{
		PRINT_SECTION_TITLE("\tConstructing");
		ScavTrap c;
		ScavTrap d("Savage");

		PRINT_SECTION_TITLE("\tTesting");
		c.attack("CloneTrap");
		// for (int i = 0; i < 50; i++)
		// 	c.attack("CloneTrap");
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

	PRINT_SECTION_TITLE("### TESTING FRAGTRAP ###");
	{
		PRINT_SECTION_TITLE("\tConstructing");
		FragTrap c;
		FragTrap d("Lockne");

		PRINT_SECTION_TITLE("\tTesting");
		c.attack("CloneTrap");
		// for (int i = 0; i < 50; i++)
		// 	c.attack("CloneTrap");
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

	return (0);
}
