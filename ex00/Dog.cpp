/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldalmas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 18:06:47 by aldalmas          #+#    #+#             */
/*   Updated: 2025/02/26 19:08:52 by aldalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// CONSTRUCTORS AND DESTRUCTOR ----------------------------
Dog::Dog(void) : Animal("Dog") {
    std::cout << GREEN "Dog constructor called"<< RESET << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other) {
    *this = other;
    std::cout << GREEN "Dog copy constructor called"<< RESET << std::endl;
}

Dog::~Dog(void) {
    std::cout << RED "Dog destructor called"<< RESET << std::endl;
}

// SURCHARGE ----------------------------
Dog& Dog::operator=(const Dog& other) {
    if (this != &other)
        this->type = other.type;
    return *this;
}

void Dog::makeSound(void) const {
    std::cout << MAGENTA << "OUAF OUAF I'M A DOG" << std::endl;
}