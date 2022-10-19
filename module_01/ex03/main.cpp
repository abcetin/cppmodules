#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	{
		Weapon club = Weapon("bouncing bessy");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("the shrinker");
		bob.attack();
	}
	{
		Weapon club = Weapon("katana");
		HumanB jim("Jim");
		//jim.setWeapon(club);
		jim.attack();
		club.setType("napalm Launcher");
		jim.attack();
	}
	return 0;
}