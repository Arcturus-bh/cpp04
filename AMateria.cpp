/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldalmas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 18:06:47 by aldalmas          #+#    #+#             */
/*   Updated: 2025/02/27 19:21:15 by aldalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AMateria.hpp"

// CONSTRUCTORS AND DESTRUCTOR ----------------------------
AMateria::AMateria(void) {
    std::cout << GREEN "AMateria constructor called" << RESET << std::endl;
}

AMateria::AMateria(std::string const& type) {
    this->type = type;
    std::cout << GREEN "AMateria constructor called" << RESET << std::endl;
}

AMateria::AMateria(const AMateria& other) {
    *this = other;
    std::cout << GREEN "AMateria copy constructor called" << RESET << std::endl;
}

AMateria::~AMateria(void) {
    std::cout << RED "AMateria destructor called" << RESET << std::endl;
}

// SURCHARGE ----------------------------
AMateria& AMateria::operator=(const AMateria& other) {
    if (this != &other)
        this->type = other.type;
    return *this;
}

// SETTERS ET GETTERS ----------------------------
std::string const& AMateria::getType(void) const {
    return type;
}

// FONCTIONS MEMBRES ----------------------------
void AMateria::use(ICharacter& target) {
    (void)target;
    std::cout << "use a materia" << std::endl;
}