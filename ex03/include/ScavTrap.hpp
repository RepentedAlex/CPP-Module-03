#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <string>
#include <iostream>

#include "ClapTrap.hpp"

#define PRINT_42 \
do \
{ \
	std::cout << __PRETTY_FUNCTION__ << "\t called" << std::endl; \
} \
while (0)

class ScavTrap : virtual public ClapTrap
{
	public:
		// Constructors
			ScavTrap();
			ScavTrap(std::string name);
			ScavTrap(ScavTrap const &original);
		// Destructors
			virtual ~ScavTrap();
		// Operator overloads
			ScavTrap	&operator=(ScavTrap const &original);
		// Member functions
			void		attack(const std::string &target);
			void		guardGate();

	private:
		bool	_gateKeeper;
};

#endif //SCAVTRAP_HPP
