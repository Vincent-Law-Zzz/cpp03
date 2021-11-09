#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>
# include <string>


class FragTrap: public ClapTrap {
public:
	FragTrap(void);
	FragTrap(std::string name);
	~FragTrap(void);
	FragTrap& operator=(FragTrap const& object);
	FragTrap(FragTrap const& object);

	void highFivesGuys(void);
};

#endif