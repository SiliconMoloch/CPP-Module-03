#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap("<empty_points>_clap_name"),
      FragTrap("<empty_points>_clap_name"), ScavTrap("<empty_points>_clap_name")
	 ,_name("<empty_points>_clap_name")

{
    _hitPoints = FragTrap::_hitPoints;
    _energyPoints = ScavTrap::_energyPoints;
    _attackDamage = FragTrap::_attackDamage;
    std::cout << "DiamondTrap " << _name << " constructed by default!" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string& name)
    : ClapTrap(name + "_clap_name"),
      FragTrap(name), ScavTrap(name), _name(name)
{
    _hitPoints = FragTrap::_hitPoints;
    _energyPoints = ScavTrap::_energyPoints;
    _attackDamage = FragTrap::_attackDamage;
    std::cout << "DiamondTrap " << _name << " constructed!" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other)
    : ClapTrap(other), FragTrap(other), ScavTrap(other), _name(other._name)
{
	std::cout << "DiamondTrap " << _name << " copy constructed!" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)

{
	if (this != &other)
	{
		ClapTrap::operator=(other);
		_name = other._name;
    }
    std::cout << "DiamondTrap " << _name << " assigned!" << std::endl;
    return (*this);
}

DiamondTrap::~DiamondTrap() 

{
	std::cout << "DiamondTrap " << _name << " destructed!" << std::endl;
}

void DiamondTrap::whoAmI()

{
    std::cout << "DiamondTrap name: " << _name << std::endl;
    std::cout << "ClapTrap name: " << ClapTrap::_name << std::endl;
}
