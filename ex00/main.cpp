#include "ClapTrap.hpp"

int	main(void)

{
	ClapTrap Erwann("Erwann");
	ClapTrap tempYazid;
	ClapTrap Yazid("Yazid");

	tempYazid = Yazid;
	Erwann.attack("Yazid");
	Erwann.takeDamage(5);
	Erwann.beRepaired(3);
	Erwann.takeDamage(15);
	Erwann.attack("Yazid");

	return (0);
}
