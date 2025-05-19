#include "FragTrap.hpp"

///CONSTRUCTORS/////////////////////////////////////////////////////////////////
FragTrap::FragTrap() : ClapTrap()
{
	PRINT_42;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	PRINT_42;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(FragTrap const &original) : ClapTrap(original)
{
	PRINT_42;
	*this = original;
}

///DESTRUCTORS//////////////////////////////////////////////////////////////////
FragTrap::~FragTrap()
{
	PRINT_42;
}

///OPERATOR OVERLOADS///////////////////////////////////////////////////////////
FragTrap	&FragTrap::operator=(FragTrap const &original)
{
	PRINT_42;
	this->_name = original._name;
	this->_hitPoints = original._hitPoints;
	this->_energyPoints = original._energyPoints;
	this->_attackDamage = original._attackDamage;
	return (*this);
}

///MEMBER FUNCTIONS/////////////////////////////////////////////////////////////
void	FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << this->_name << ": High Fives Guys!" << std::endl;
}

