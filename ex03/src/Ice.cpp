/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldalmas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 18:06:47 by aldalmas          #+#    #+#             */
/*   Updated: 2025/02/27 19:21:15 by aldalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Ice.hpp"
#include "../include/ICharacter.hpp"

// CONSTRUCTORS AND DESTRUCTOR ----------------------------
Ice::Ice(void) : AMateria("ice") {
    std::cout << GREEN "Ice constructor called" << RESET << std::endl;
}

Ice::Ice(const Ice& other) : AMateria("ice") {
    *this = other;
    std::cout << GREEN "Ice copy constructor called" << RESET << std::endl;
}

Ice::~Ice(void) {
    std::cout << RED "Ice destructor called" << RESET << std::endl;
}

// SURCHARGE ----------------------------
Ice& Ice::operator=(const Ice& other) {
    if (this != &other)
        this->_type = other._type;
    return *this;
}

// SETTERS ET GETTERS ----------------------------

// FONCTIONS MEMBRES ----------------------------
AMateria* Ice::clone(void) const {
    return new Ice(*this);
}

void Ice::use(ICharacter& target) {
    std::cout << CYAN "* shoots an ice bolt at " << target.getName() << " * 🥶" << RESET << std::endl;
}