#include "FragTrap.hpp"

int main (void)
{
    ClapTrap clapTrap("1");
    FragTrap fragTrap("2");
    ScavTrap scavTrap("3");

    clapTrap.attack("Tortoro");
    clapTrap.takeDamage(5);
    clapTrap.beRepaired(5);

    fragTrap.attack("Tartara");
    fragTrap.takeDamage(5);
    fragTrap.beRepaired(5);
    fragTrap.highFivesGuys();

    scavTrap.attack("Totoro");
    scavTrap.takeDamage(5);
    scavTrap.beRepaired(5);
    scavTrap.guardGate();

    // delete &clapTrap;
    // delete &fragTrap;
    // delete &scavTrap;


    return (0);
}
