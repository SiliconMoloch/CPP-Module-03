#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap

{
private:
	std::string _name;

public:
	DiamondTrap(void);
	DiamondTrap(const DiamondTrap& other);
	DiamondTrap& operator=(const DiamondTrap& other);
	~DiamondTrap(void);

	DiamondTrap(const std::string& name);
	void whoAmI(void);
	using ScavTrap::attack;
};

#endif
