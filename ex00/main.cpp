#include "ClapTrap.hpp"

int	main(void)

{
	ClapTrap Erwann("Erwann");
	Erwann.attack("Yazid");
	Erwann.takeDamage(5);
	Erwann.beRepaired(3);
	Erwann.takeDamage(15);
	Erwann.attack("Yazid");
	Erwann.takeDamage(50);

	return (0);
}
