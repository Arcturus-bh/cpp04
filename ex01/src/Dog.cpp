/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldalmas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 18:06:47 by aldalmas          #+#    #+#             */
/*   Updated: 2025/02/27 13:36:36 by aldalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"

// CONSTRUCTORS AND DESTRUCTOR ----------------------------
Dog::Dog(void) : Animal("Dog") {
    this->brain = new Brain();
    std::cout << GREEN "Dog constructor called"<< RESET << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other) {
    *this = other;
    std::cout << GREEN "Dog copy constructor called" << RESET << std::endl;
}

Dog::~Dog(void) {
    delete this->brain;
    std::cout << RED "Dog destructor called" << RESET << std::endl;
}

// SURCHARGE ----------------------------
Dog& Dog::operator=(const Dog& other) {
    if (this != &other)
        this->type = other.type;
    return *this;
}

void Dog::makeSound(void) const {
    std::cout << MAGENTA << "🦮 OUAF OUAF ! I love you...  Feed me now 🫵 🦴" << RESET << std::endl;
}