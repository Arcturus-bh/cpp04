/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldalmas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 18:06:47 by aldalmas          #+#    #+#             */
/*   Updated: 2025/02/26 19:16:54 by aldalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// CONSTRUCTORS AND DESTRUCTOR ----------------------------
Animal::Animal(void) {
    std::cout << GREEN "Animal constructor called" << RESET << std::endl;
}

Animal::Animal(std::string type) {
    this->type = type;
    std::cout << GREEN "Animal constructor called" << RESET << std::endl;
}

Animal::Animal(const Animal& other) {
    *this = other;
    std::cout << GREEN "Animal copy constructor called" << RESET << std::endl;
}

Animal::~Animal(void) {
    std::cout << RED "Animal destructor called" << RESET << std::endl;
}

// SURCHARGE ----------------------------
Animal& Animal::operator=(const Animal& other) {
    if (this != &other)
        this->type = other.type;
    return *this;
}


// SETTERS ET GETTERS ----------------------------

void Animal::setType(std::string& type) {
    this->type = type;   
}

std::string Animal::getType(void) const {
    return this->type;
}

// FONCTIONS MEMBRES ----------------------------

void Animal::makeSound(void) const {
    std::cout << MAGENTA "???? I'm an animal... But WHAT animal ?!" << std::endl;
}