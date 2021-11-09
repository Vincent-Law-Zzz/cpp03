#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap() 
{
	_hitpoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap " << this->_name << " created!" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) 
{
	_hitpoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap " << this->_name << " created!" << std::endl;
}

FragTrap::FragTrap(FragTrap const& object) 
{
	*this = object;
	std::cout << "FragTrap " << this->_name <<  " created by copy constructor!" << std::endl;
}

FragTrap::~FragTrap(void) 
{
	std::cout << "FragTrap " << this->_name <<  " destroyed!" << std::endl;
}

FragTrap& FragTrap::operator=(FragTrap const& object) 
{
	ClapTrap::operator=(object);
	return *this;
}

void FragTrap::highFivesGuys(void) {
	if (this->_hitpoints != 0) 
	{
		std::cout << "FragTrap " << this->_name <<
		" ✋ High fives request!✋" << std::endl;
	}
}