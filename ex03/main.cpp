#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)

{
	DiamondTrap Erwazheo("Erwazheo");
	Erwazheo.attack("this stupid-ass module");
	Erwazheo.whoAmI();
	Erwazheo.guardGate();
	Erwazheo.highFivesGuys();

	DiamondTrap ffs("FEUR");

	ffs.takeDamage(1);

	return (0);
}
