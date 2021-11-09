
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("Nameless"), _hitpoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "ClapTrap " << this->_name << " created!" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitpoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "ClapTrap " << this->_name << " created!" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const& object) {
	*this = object;
	std::cout << "ClapTrap " << this->_name << " created by copy constructor!" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "ClapTrap " << this->_name << " destroyed!" << std::endl;
}

ClapTrap& ClapTrap::operator=(ClapTrap const& object)
{
    this->_name = object._name;
	this->_hitpoints = object._hitpoints;
	this->_energyPoints = object._energyPoints;
	this->_attackDamage = object._attackDamage;
	return *this;
}

void ClapTrap::attack(std::string const& target)
{
    if (this->_hitpoints != 0) {
		std::cout << "ClapTrap " << this->_name << " ⚔️  attacks ⚔️  " << target << ", causing " << _attackDamage <<" points of damage!" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hitpoints == 0) {
		std::cout << "ClapTrap " << this->_name << " is already " <<"☠️  dead ☠️ "<< std::endl;
	} else if (this->_hitpoints > amount) {
		this->_hitpoints -= amount;
		std::cout << "ClapTrap " << this->_name << " takes "  << amount << " points of damage!" <<
		" He has left " << this->_hitpoints << " hit points!" << std::endl;
	} else {
		this->_hitpoints = 0;
		std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage!" <<
		" ☠️  He died ☠️ " << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_hitpoints != 0) {
		this->_hitpoints += amount;
		std::cout << "ClapTrap " << this->_name << " ❤️  repaired ❤️ by " << amount <<
		" hit points! " << "He has left " << this->_hitpoints << " hit points!" << std::endl;
	}
}
