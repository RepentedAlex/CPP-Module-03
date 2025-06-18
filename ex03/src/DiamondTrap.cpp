#include "DiamondTrap.hpp"

///CONSTRUCTORS/////////////////////////////////////////////////////////////////
DiamondTrap::DiamondTrap() : ClapTrap("d_default_clap_name")
{
	PRINT_42;
	this->_name = "d_default";
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name")
{
	PRINT_42;
	this->_name = name;
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(DiamondTrap const &original) : ClapTrap(original), ScavTrap(original), FragTrap(original)
{
	PRINT_42;
	*this = original;
}

///DESTRUCTORS//////////////////////////////////////////////////////////////////
DiamondTrap::~DiamondTrap()
{
	PRINT_42;
}

///OPERATOR OVERLOADS///////////////////////////////////////////////////////////
DiamondTrap &DiamondTrap::operator=(DiamondTrap const &original)
{
	PRINT_42;

	if (this == &original)
		return (*this);
	this->_name = original._name;
	ClapTrap::_name = original.ClapTrap::_name;
	this->_hitPoints = original._hitPoints;
	this->_energyPoints = original._energyPoints;
	this->_attackDamage = original._attackDamage;
	return (*this);
}

///GETTERS//////////////////////////////////////////////////////////////////////
std::string const	DiamondTrap::getName() const
{
	return (this->_name);
}

///SETTERS//////////////////////////////////////////////////////////////////////
void	DiamondTrap::setName(std::string name)
{
	this->_name = name;
}

///MEMBER FUNCTIONS/////////////////////////////////////////////////////////////
void	DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI()
{
	std::cout << "I am a DiamondTrap, named: " << this->_name <<
	" born from ClapTrap: " << ClapTrap::_name << std::endl;
}

