#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("ct_default_dimnd")
{
	PRINT_42;
	this->_name = "diamond default";
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

DiamondTrap::~DiamondTrap()
{
	PRINT_42;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &original)
{
	PRINT_42;
	this->_name = original._name + "_clap_name";
	this->_hitPoints = original._hitPoints;
	this->_energyPoints = original._energyPoints;
	this->_attackDamage = original._attackDamage;
	return (*this);
}

void	DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI()
{
	std::cout << "I am a DiamondTrap, named: " << this->_name <<
	" born from ClapTrap: " << ClapTrap::_name << std::endl;
}

