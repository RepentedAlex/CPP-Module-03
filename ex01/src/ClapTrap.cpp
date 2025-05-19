#include "ClapTrap.hpp"

#include <iostream>

///CONSTRUCTORS/////////////////////////////////////////////////////////////////
ClapTrap::ClapTrap() : _name("default"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	PRINT_42;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	PRINT_42;
}

ClapTrap::ClapTrap(ClapTrap const &original)
{
	PRINT_42;

	*this = original;
}

///DESTRUCTORS//////////////////////////////////////////////////////////////////
ClapTrap::~ClapTrap()
{
	PRINT_42;
}

///OPERATOR OVERLOADS///////////////////////////////////////////////////////////
ClapTrap	&ClapTrap::operator=(ClapTrap const &original)
{
	PRINT_42;

	this->_name = original._name;
	this->_hitPoints = original._hitPoints;
	this->_energyPoints = original._energyPoints;
	this->_attackDamage = original._attackDamage;
	return (*this);
}

///GETTERS//////////////////////////////////////////////////////////////////////

std::string const ClapTrap::getName() const
{
	return (this->_name);
}

unsigned int	ClapTrap::getHitPoints() const
{
	return (this->_hitPoints);
}

unsigned int	ClapTrap::getEnergyPoints() const
{
	return (this->_energyPoints);
}

unsigned int	ClapTrap::getAttackDamage() const
{
	return (this->_attackDamage);
}

///SETTERS//////////////////////////////////////////////////////////////////////

void	ClapTrap::setName(std::string name)
{
	this->_name = name;
}

void	ClapTrap::setHitPoints(unsigned int amount)
{
	this->_hitPoints = amount;
}

void	ClapTrap::setEnergyPoints(unsigned int amount)
{
	this->_energyPoints = amount;
}

void	ClapTrap::setAttackDamage(unsigned int amount)
{
	this->_attackDamage = amount;
}

///MEMBER FUNCTIONS/////////////////////////////////////////////////////////////
void		ClapTrap::attack(const std::string &target)
{
	if (this->_energyPoints <= 0)
	{
		std::cout <<
		"ClapTrap " << this->_name <<
		" is out of energy!" <<
		std::endl;
	}
	else if (this->_hitPoints <= 0)
	{
		std::cout <<
		"ClapTrap " << this->_name <<
		" is dead!" <<
		std::endl;
	}
	else
	{
		std::cout <<
		"ClapTrap " << this->_name <<
		" attacks " << target << ", causing " << this->_attackDamage <<
		" points of damage!" <<
		std::endl;
	}
}

void		ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints <= 0)
	{
		std::cout <<
		"ClapTrap " << this->_name <<
		" is already dead!" <<
		std::endl;
		return ;
	}
	else if (this->_hitPoints < amount)
	{
		amount = _hitPoints;
		this->_hitPoints = 0;
	}
	else
		this->_hitPoints -= amount;

	std::cout <<
	"ClapTrap " << this->_name <<
	" took " << amount << " points of damage!" <<
	std::endl;
}

void		ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoints > 0 && this->_hitPoints > 0 && this->_hitPoints + amount <= 10)
	{
		this->_hitPoints += amount;
		std::cout <<
		"ClapTrap " << this->_name <<
		" was repaired for " << amount << " hit points, now has " << this->_hitPoints << " hit points!" <<
		std::endl;
	}
	else if (this->_energyPoints <= 0)
		std::cout << "ClapTrap " << this->_name << " is out of energy!" << std::endl;
	else if (this->_hitPoints <= 0)
		std::cout << "ClapTrap " << this->_name << " is dead!" << std::endl;
	else if (this->_hitPoints >= 10)
		std::cout << "ClapTrap " << this->_name << " is already at full health!" << std::endl;
	else
	{
		this->_hitPoints = 10;
		std::cout << "ClapTrap " << this->_name << " totally repaired himself!" <<
		std::endl;
	}
}
