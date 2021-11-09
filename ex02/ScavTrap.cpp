
#include "ScavTrap.hpp"


ScavTrap::ScavTrap(void):ClapTrap() {
	_hitpoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout <<"ScavTrap " << this->_name << " created!" << std::endl;
}

ScavTrap::ScavTrap(std::string name):ClapTrap(name) {
	_hitpoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap " << this->_name << " created!" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const& object) {
	*this = object;
	std::cout << "ScavTrap " << this->_name << " created by copy constructor!" << std::endl;
}

ScavTrap::~ScavTrap(void) {
	std::cout << "ScavTrap " << this->_name << " destroyed!" << std::endl;
}

ScavTrap& ScavTrap::operator=(ScavTrap const& object) {
	ClapTrap::operator=(object);
	return *this;
}

void ScavTrap::attack(std::string const& target) {
	if (this->_hitpoints != 0) 
	{
		std::cout << "ScavTrap " << this->_name << " ⚔️  attacks ⚔️  "  << target << ", causing "
		<< _attackDamage << " points of damage!" << std::endl;
	}
}

void ScavTrap::guardGate(void) {
	if (this->_hitpoints != 0) 
	{
		std::cout << "ScavTrap 🛡️  " << this->_name << " 🛡️ " << " have enterred in" <<
		" 🛡️ Gate keeper mode!🛡️" << std::endl;
	}
}