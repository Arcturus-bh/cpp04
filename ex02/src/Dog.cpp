/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldalmas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 18:06:47 by aldalmas          #+#    #+#             */
/*   Updated: 2025/02/27 19:43:53 by aldalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"

// CONSTRUCTORS AND DESTRUCTOR ----------------------------
Dog::Dog(void) : AAnimal("Dog") {
    this->brain = new Brain();
    std::cout << GREEN "Dog constructor called"<< RESET << std::endl;
}

Dog::Dog(const Dog& other) : AAnimal(other) {
    this->brain = new Brain(*other.brain);
    std::cout << GREEN "Dog copy constructor called" << RESET << std::endl;
}

Dog::~Dog(void) {
    delete this->brain;
    std::cout << RED "Dog destructor called" << RESET << std::endl;
}

// SURCHARGES ----------------------------
Dog& Dog::operator=(const Dog& other) {
    if (this != &other) {
        delete this->brain;
        this->brain = new Brain(*other.brain);
    }
    return *this;
}

// SETTERS GETTERS ----------------------------

// METHODES ----------------------------
void Dog::makeSound(void) const {
    std::cout << MAGENTA << "🦮 OUAF OUAF ! I love you...  Feed me now 🫵 🦴" << RESET << std::endl;
}

