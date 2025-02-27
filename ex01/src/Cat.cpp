/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldalmas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 18:06:47 by aldalmas          #+#    #+#             */
/*   Updated: 2025/02/27 13:36:41 by aldalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"

// CONSTRUCTORS AND DESTRUCTOR ----------------------------
Cat::Cat(void) : Animal("Cat") {
    this->brain = new Brain();
    std::cout << GREEN "Cat constructor called" << RESET << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other) {
    *this = other;
    std::cout << GREEN "Cat copy constructor called" << RESET << std::endl;
}

Cat::~Cat(void) {
    delete this->brain;
    std::cout << RED "Cat destructor called" << RESET << std::endl;
}

// SURCHARGE ----------------------------
Cat& Cat::operator=(const Cat& other) {
    if (this != &other)
        this->type = other.type;
    return *this;
}

void Cat::makeSound(void) const {
    std::cout << MAGENTA "🐈 Miaouu... FEED ME NOW, HUMAN OR I'LL DESTROY EVERYTHING YOU LOVE 🫵 🔪" << RESET << std::endl;
}