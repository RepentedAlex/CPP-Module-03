#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>

#define PRINT_42 \
	do { \
std::cout << __PRETTY_FUNCTION__ << "\t called" << std::endl; \
	} \
	while (0)

class ClapTrap
{
	public:
		ClapTrap();
		ClapTrap(std::string name);
		~ClapTrap();
		ClapTrap(ClapTrap const &original);
		ClapTrap	&operator=(ClapTrap const &original);

		void		attack(const std::string &target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);

	private:
		std::string		_name;
		unsigned int	_hitPoints;
		unsigned int	_energyPoints;
		unsigned int	_attackDamage;
};

#endif //CLAPTRAP_HPP
