#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)

{
	ScavTrap	Yazid("Yazid");
	ScavTrap	bunshinNoYazid("Bunshin no Yazid");

	bunshinNoYazid = Yazid;
	bunshinNoYazid.attack("Erwann");
	bunshinNoYazid.guardGate();

	return (0);
}
