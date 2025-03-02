/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldalmas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 18:06:47 by aldalmas          #+#    #+#             */
/*   Updated: 2025/02/27 19:21:15 by aldalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cure.hpp"
#include "../include/ICharacter.hpp"

// CONSTRUCTORS AND DESTRUCTOR ----------------------------
Cure::Cure(void) : AMateria("cure") {
    std::cout << GREEN "Cure constructor called" << RESET << std::endl;
}

Cure::Cure(const Cure& other) : AMateria("cure") {
    *this = other;
    std::cout << GREEN "Cure copy constructor called" << RESET << std::endl;
}

Cure::~Cure(void) {
    std::cout << RED "Cure destructor called" << RESET << std::endl;
}

// SURCHARGE ----------------------------
Cure& Cure::operator=(const Cure& other) {
    if (this != &other)
        this->_type = other._type;
    return *this;
}

// SETTERS ET GETTERS ----------------------------

// FONCTIONS MEMBRES ----------------------------
AMateria* Cure::clone(void) const {
    return new Cure(*this);
}

void Cure::use(ICharacter& target) {
    std::cout << CYAN "* heals " << target.getName() << "'s wounds * 💖" << RESET << std::endl;
}