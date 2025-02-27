/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldalmas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 18:06:47 by aldalmas          #+#    #+#             */
/*   Updated: 2025/02/26 19:16:54 by aldalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongAnimal.hpp"

// CONSTRUCTORS AND DESTRUCTOR ----------------------------
WrongAnimal::WrongAnimal(void) {
    std::cout << GREEN "WrongAnimal constructor called" << RESET << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) {
    this->type = type;
    std::cout << GREEN "WrongAnimal constructor called" << RESET << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) {
    *this = other;
    std::cout << GREEN "WrongAnimal copy constructor called" << RESET << std::endl;
}

WrongAnimal::~WrongAnimal(void) {
    std::cout << RED "WrongAnimal destructor called" << RESET << std::endl;
}

// SURCHARGE ----------------------------
WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {
    if (this != &other)
        this->type = other.type;
    return *this;
}


// SETTERS ET GETTERS ----------------------------

void WrongAnimal::setType(std::string& type) {
    this->type = type;   
}

std::string WrongAnimal::getType(void) const {
    return this->type;
}

// FONCTIONS MEMBRES ----------------------------

void WrongAnimal::makeSound(void) const {
    std::cout << MAGENTA "I'm a wrong animal... Is it a bad thing ? 😔" << std::endl;
}