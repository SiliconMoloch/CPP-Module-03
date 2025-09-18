#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(const std::string& name)
    : ClapTrap(name + "_clap_name"),
      ScavTrap(name), FragTrap(name), _name(name)
{
    _hitPoints = FragTrap::_hitPoints;
    _energyPoints = ScavTrap::_energyPoints;
    _attackDamage = FragTrap::_attackDamage;
    std::cout << "DiamondTrap " << _name << " constructed!" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other)
    : ClapTrap(other), ScavTrap(other), FragTrap(other), _name(other._name)
		{std::cout << "DiamondTrap " << _name << " copy constructed!" << std::endl;}

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

DiamondTrap::~DiamondTrap() {std::cout << "DiamondTrap " << _name << " destructed!" << std::endl;}

void DiamondTrap::whoAmI()

{
    std::cout << "DiamondTrap name: " << _name << std::endl;
    std::cout << "ClapTrap name: " << ClapTrap::_name << std::endl;
}
