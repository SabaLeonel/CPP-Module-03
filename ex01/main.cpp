#include "ScavTrap.hpp"

int main (void)
{
    ScavTrap scavTrap("BigManTing innit");

    scavTrap.attack("target");
    scavTrap.takeDamage(50);
    scavTrap.beRepaired(10);
    scavTrap.guardGate();


    return (0);
}
