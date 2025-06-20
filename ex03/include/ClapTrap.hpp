#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>

#define PRINT_42 \
do \
{ \
	std::cout << __PRETTY_FUNCTION__ << "\t called" << std::endl; \
} \
while (0)

class ClapTrap
{
	public:
		// Constructors
			ClapTrap();
			ClapTrap(std::string name);
			ClapTrap(ClapTrap const &original);
		// Destructors
			virtual	~ClapTrap();
		// Operator overloads
			ClapTrap	&operator=(ClapTrap const &original);
		// Getters
			std::string const	getName() const;
			std::string			getName();
			unsigned int	getHitPoints() const;
			unsigned int	getEnergyPoints() const;
			unsigned int	getAttackDamage() const;
		// Setters
			void				setName(std::string name);
			void				setHitPoints(unsigned int amount);
			void 				setEnergyPoints(unsigned int amount);
			void 				setAttackDamage(unsigned int amount);
		// Member functions
			void		attack(const std::string &target);
			void		takeDamage(unsigned int amount);
			void		beRepaired(unsigned int amount);

	protected:
		std::string		_name;
		unsigned int	_hitPoints;
		unsigned int	_energyPoints;
		unsigned int	_attackDamage;
};

#endif //CLAPTRAP_HPP
