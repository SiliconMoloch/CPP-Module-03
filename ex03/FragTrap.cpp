#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap("<empty_name>")

{
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap " << _name << " constructed by default!" << std::endl;
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name)

{
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap " << _name << " constructed!" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)

{
	_hitPoints = other._hitPoints;
	_energyPoints = other._energyPoints;
	_attackDamage = other._attackDamage;
	std::cout << "FragTrap " << _name << " copy constructed!" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other)

{
	const std::string	old_name = _name;
    ClapTrap::operator=(other);
    std::cout << "FragTrap " << old_name << " assigned to " << _name << std::endl;
    return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << _name << " destructed!" << std::endl;
}

void FragTrap::highFivesGuys(void)

{
	std::cout << "FragTrap " << _name << " requests a positive high five!" << std::endl;
}
