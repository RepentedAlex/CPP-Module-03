#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <string>
#include <iostream>

#include "ClapTrap.hpp"

#define PRINT_42 \
	do { \
	std::cout << __PRETTY_FUNCTION__ << "\t called" << std::endl; \
	} \
	while (0)

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const &original);
		virtual ~ScavTrap();
		ScavTrap	&operator=(ScavTrap const &original);

		void attack(const std::string &target);
		void guardGate();

	private:
		bool	_gateKeeper;
};

#endif //SCAVTRAP_HPP
