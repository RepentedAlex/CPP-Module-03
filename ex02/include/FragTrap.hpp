#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>

#include "ClapTrap.hpp"

#define PRINT_42 \
do { \
std::cout << __PRETTY_FUNCTION__ << "\t called" << std::endl; \
} \
while (0)

class FragTrap : public ClapTrap
{
	public:
		// Constructors
			FragTrap();
			FragTrap(std::string name);
			FragTrap(FragTrap const &original);
		// Destructor
			virtual	~FragTrap();
		// Operator overloads
			FragTrap	&operator=(FragTrap const &original);
		// Member functions
			void		highFivesGuys();
};

#endif //FRAGTRAP_HPP
