#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("<empty_name>"), _hitPoints(10), _energyPoints(10), _attackDamage(0)

{
	std::cout << "ClapTrap " + _name + " constructed by default!" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)

{
	std::cout << "ClapTrap " + _name + " constructed!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) : _name(other._name), _hitPoints(other._hitPoints),_energyPoints(other._energyPoints), 
_attackDamage(other._attackDamage)

{
	std::cout << "ClapTrap " + _name + " copy constructed!" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)

{
	const std::string	old_name = _name;

	if (this != &other)
	{
		 _name = other._name;
		 _hitPoints = other._hitPoints;
 		_energyPoints = other._energyPoints;
 		_attackDamage = other._attackDamage;
    }
	std::cout << "ClapTrap " + _name + " assigned to " + old_name << std::endl;
	return (*this);
}

ClapTrap::~ClapTrap() 

{
	std::cout << "ClapTrap " + _name + " destructed!" << std::endl;
}

void ClapTrap::attack(const std::string& target)

{
	if (!_hitPoints || !_energyPoints)
	{
		std::cout << "ClapTrap " + _name + " can't attack (no hit/energy points)!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " + _name + " attacks " + target + ", causing " << _attackDamage << " points of damage!" << std::endl;
	--_energyPoints;
}

void ClapTrap::takeDamage(unsigned int amount)

{
	if (!_hitPoints)
	{
		std::cout << "ClapTrap " + _name + " is already dead!" << std::endl;
		return ;
    }
    if (amount > _hitPoints)
		amount = _hitPoints;
	std::cout << "ClapTrap " + _name + " takes " << amount << " damage!" << std::endl;
	_hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)

{
	if (!_hitPoints || !_energyPoints)
	{
    	std::cout << "ClapTrap " + _name + " can't repair (no hit/energy points)!" << std::endl;
    	return ;
	}
	std::cout << "ClapTrap " + _name + " repairs " << amount << " hit points!" << std::endl;
	_hitPoints += amount;
	_energyPoints--;
}
