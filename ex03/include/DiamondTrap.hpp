#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

#define PRINT_42 \
do \
{ \
	std::cout << __PRETTY_FUNCTION__ << "\t called" << std::endl; \
} \
while (0)

class DiamondTrap : public ScavTrap, public FragTrap
{
	public:
		// Constructors
			DiamondTrap();
			DiamondTrap(std::string name);
			DiamondTrap(DiamondTrap const &original);
		// Destructors
			~DiamondTrap();
		// Operator overloads
			DiamondTrap	&operator=(DiamondTrap const &original);
		// Getters
			std::string const	getName() const;
		// Setters
			void				setName(std::string name);
		// Member functions
			void				attack(const std::string &target);
			void				whoAmI();

	private:
		std::string	_name;
};

#endif //DIAMONDTRAP_HPP
