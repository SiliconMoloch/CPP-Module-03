#include "ClapTrap.hpp"

int	main(void)

{
	ClapTrap Yazid("Erwann");

	Yazid.attack("Yazid");
	Yazid.takeDamage(5);
	Yazid.beRepaired(3);
	Yazid.takeDamage(15);
	Yazid.attack("Yazid");

	return (0);
}
