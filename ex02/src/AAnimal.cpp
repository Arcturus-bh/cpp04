/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldalmas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 18:06:47 by aldalmas          #+#    #+#             */
/*   Updated: 2025/02/27 19:21:15 by aldalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AAnimal.hpp"

// CONSTRUCTORS AND DESTRUCTOR ----------------------------
AAnimal::AAnimal(void) {
    std::cout << GREEN "AAnimal constructor called" << RESET << std::endl;
}

AAnimal::AAnimal(std::string type) {
    this->type = type;
    std::cout << GREEN "AAnimal constructor called" << RESET << std::endl;
}

AAnimal::AAnimal(const AAnimal& other) {
    *this = other;
    std::cout << GREEN "AAnimal copy constructor called" << RESET << std::endl;
}

AAnimal::~AAnimal(void) {
    std::cout << RED "AAnimal destructor called" << RESET << std::endl;
}

// SURCHARGE ----------------------------
AAnimal& AAnimal::operator=(const AAnimal& other) {
    if (this != &other)
        this->type = other.type;
    return *this;
}


// SETTERS ET GETTERS ----------------------------
void AAnimal::setType(std::string& type) {
    this->type = type;   
}

std::string AAnimal::getType(void) const {
    return this->type;
}

// FONCTIONS MEMBRES ----------------------------
