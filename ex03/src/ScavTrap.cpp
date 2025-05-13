#include "ScavTrap.hpp"

///CONSTRUCTORS/////////////////////////////////////////////////////////////////
ScavTrap::ScavTrap() : ClapTrap()
{
	PRINT_42;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	this->_gateKeeper = false;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	PRINT_42;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	this->_gateKeeper = false;
}

ScavTrap::ScavTrap(ScavTrap const &original) : ClapTrap(original)
{
	PRINT_42;
	this->_gateKeeper = original._gateKeeper;
}

///DESTRUCTORS//////////////////////////////////////////////////////////////////
ScavTrap::~ScavTrap()
{
	PRINT_42;
}

///OPERATOR OVERLOADS///////////////////////////////////////////////////////////
ScavTrap	&ScavTrap::operator=(ScavTrap const &original)
{
	PRINT_42;
	this->_name = original._name;
	this->_hitPoints = original._hitPoints;
	this->_energyPoints = original._energyPoints;
	this->_attackDamage = original._attackDamage;
	this->_gateKeeper = original._gateKeeper;
	return (*this);
}

///MEMBER FUNCTIONS/////////////////////////////////////////////////////////////
void	ScavTrap::attack(const std::string &target)
{
	if (this->_energyPoints > 0 && this->_hitPoints > 0)
	{
		std::cout << "ScavTrap " << this->_name << " attacks " << target <<
		", dealing " << this->_attackDamage << " points of damage!" <<
		std::endl;
		this->_energyPoints--;
	}
	else if (this->_energyPoints <= 0)
		std::cout << "ScavTrap " << this->_name << " is out of energy!" << std::endl;
	else if (this->_hitPoints <= 0)
		std::cout << "ScavTrap " << this->_name << " is dead!" << std::endl;
}

void ScavTrap::guardGate()
{
	if (!this->_gateKeeper)
	{
		this->_gateKeeper = true;
		std::cout << "ScavTrap " << this->_name << " is now a gate keeper!" << std::endl;
	}
	else
		std::cout << "ScavTrap " << this->_name << " is already a gate keeper!" << std::endl;
}

