#include "../include/Character.hpp"

// CONSTRUCTORS AND DESTRUCTOR ----------------------------
Character::Character(void) {
	for (int i = 0; i < 4; i++) {
		this->_inventory[i] = NULL;
	}
    std::cout << RED "Character constructor called" << RESET << std::endl;
}

Character::Character(std::string name) : _name(name) {
	for (int i = 0; i < 4; i++) {
		this->_inventory[i] = NULL;
	}
    std::cout << RED "Character constructor called" << RESET << std::endl;
}

Character::Character(const Character& other) {
    *this = other;
	std::cout << RED "Character copy destructor called" << RESET << std::endl;
}

Character& Character::operator=(const Character& other) {
	if (this != &other) {
		this->_name = other.getName();
		for (int i = 0; i < 4; i++) {
			this->_inventory[i] = other._inventory[i];
		}
	}
	return *this;
}

Character::~Character(void) {
    std::cout << RED "Character destructor called" << RESET << std::endl;
}

// SURCHARGE ----------------------------


// SETTERS ET GETTERS ----------------------------


// FONCTIONS MEMBRES ----------------------------

std::string const& Character::getName(void) const {
	return this->_name;
}

void Character::equip(AMateria* m) {

}

void Character::unequip(int idx) {
	AMateria* empty_materia;
	this->_inventory[idx] = empty_materia;
}

void Character::use(int idx, ICharacter& target) {
	//this->_inventory[idx].use();
}