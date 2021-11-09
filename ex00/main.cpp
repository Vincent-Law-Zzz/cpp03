#include "ClapTrap.hpp"

int main( void ) {
    ClapTrap First;
    ClapTrap Max("Max");
    ClapTrap CopyMax(Max);

    CopyMax.attack("First");
    First.takeDamage(5);
    First.attack("CopyMax");
    CopyMax.takeDamage(2);
    Max.attack("First");
    First.takeDamage(5);
    Max.attack("First");
    First.takeDamage(5);
    CopyMax.beRepaired(2);
    return 0;
}