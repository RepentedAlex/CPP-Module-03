#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

#define PRINT_42 \
	do { \
std::cout << __PRETTY_FUNCTION__ << "\t called" << std::endl; \
	} \
	while (0)

class DiamondTrap : public ScavTrap, public FragTrap
{
	public:
		DiamondTrap();
		DiamondTrap(std::string name);
		virtual ~DiamondTrap();
		DiamondTrap(DiamondTrap const &original);
		DiamondTrap	&operator=(DiamondTrap const &original);

		void	attack(const std::string &target);
		void	whoAmI();

	private:
		std::string	_name;
};

#endif //DIAMONDTRAP_HPP
