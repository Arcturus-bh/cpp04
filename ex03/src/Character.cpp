#include "../include/Character.hpp"
#include "../include/AMateria.hpp"

// CONSTRUCTORS AND DESTRUCTOR ----------------------------
Character::Character(void) {
	for (int i = 0; i < 4; i++) {
		this->_inventory[i] = NULL;
	}
    std::cout << GREEN "Character constructor called" << RESET << std::endl;
}

Character::Character(std::string name) : _name(name) {
	for (int i = 0; i < 4; i++) {
		this->_inventory[i] = NULL;
	}
    std::cout << GREEN "Character constructor called" << RESET << std::endl;
}

Character::Character(const Character& other) {
    *this = other;
	std::cout << GREEN "Character copy constructor called" << RESET << std::endl;
}

Character::~Character(void) {
	std::cout << RED "Character destructor called" << RESET << std::endl;
}

// SURCHARGE ----------------------------
Character& Character::operator=(const Character& other) {
	if (this != &other) {
		this->_name = other.getName();
		delete_inventory();
		for (int i = 0; i < 4; i++) {
			if (other._inventory[i])
				this->_inventory[i] = other._inventory[i]->clone();
			else
				this->_inventory[i] = NULL;
		}
	}
	return *this;
}

// SETTERS ET GETTERS ----------------------------
std::string const& Character::getName(void) const {
	return _name;
}

// FONCTIONS MEMBRES ----------------------------
void Character::equip(AMateria* m) {
	bool equipped = false;
	for (int i = 0; i < 4; i++) {
		if (this->_inventory[i] == NULL) {
			this->_inventory[i] = m;
			equipped = true;
			break;
		}
	}
	if (equipped == false)
		std::cout << MAGENTA "The inventory is already full - can't equip " << m->getType() << " materia" << RESET << std::endl;
	else
		std::cout << MAGENTA << "✅ " << this->_name << " equipped "<< m->getType() <<" materia !" << std::endl;
}

void Character::unequip(int idx) {
	if (!check_idx(idx))
		return;
	this->_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target) {
	if (idx < 0 || idx >= 4) {
		std::cout << RED << "ERROR character::use() - idx out of range" << RESET << std::endl;
		return;
	}
	if (this->_inventory[idx]) {
		std::cout << CYAN << this->_name << ": "; 
		this->_inventory[idx]->use(target);
	}
	else
		std::cout << RED << "❌ " << this->_name << " don't have materia in his inventory slot" << RESET << std::endl;
}

void Character::delete_inventory(void) {
	for (int i = 0; i < 4; i++) {
		if (this->_inventory[i]) {
			delete this->_inventory[i];
			this->_inventory[i] = NULL;
		}
	}
}

bool Character::check_idx(int idx) {
	if (this->_inventory[idx] && idx >= 0 && idx <= 3)
		return true;
	std::cout << RED "ERROR - Wrong idx" << std::endl;
	return false;
}