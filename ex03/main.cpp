#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)

{
	ClapTrap	Erwann("Erwann");
	Erwann.attack("Yazid");
	Erwann.takeDamage(5);
	Erwann.beRepaired(3);
	Erwann.takeDamage(15);
	Erwann.attack("Yazid");
	std::cout << std::endl;
	
	ScavTrap	Yazid("Yazid");
	Yazid.attack("Erwann");
	Yazid.guardGate();
	std::cout << std::endl;

	FragTrap	Theo("Theo");
	Theo.highFivesGuys();
	std::cout << std::endl;

	DiamondTrap Erwazheo("Erwazheo");
	Erwazheo.attack("this stupid-ass module");
	Erwazheo.whoAmI();
	Erwazheo.guardGate();
	Erwazheo.highFivesGuys();
	std::cout << std::endl;

	return (0);
}
