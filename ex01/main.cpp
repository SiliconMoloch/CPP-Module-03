#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)

{
	ClapTrap	Erwann("Erwann");

	Erwann.attack("Yazid");
	Erwann.takeDamage(5);
	Erwann.beRepaired(3);
	Erwann.takeDamage(15);
	Erwann.attack("Yazid");
	
	ScavTrap	Yazid("Yazid");
	Yazid.attack("Erwann");
	Yazid.guardGate();

	return (0);
}
