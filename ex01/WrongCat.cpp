/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldalmas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 18:06:47 by aldalmas          #+#    #+#             */
/*   Updated: 2025/02/26 19:06:35 by aldalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/WrongCat.hpp"

// CONSTRUCTORS AND DESTRUCTOR ----------------------------
WrongCat::WrongCat(void) : WrongAnimal("WrongCat") {
    std::cout << GREEN "WrongCat constructor called" << RESET << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other) {
    *this = other;
    std::cout << GREEN "WrongCat copy constructor called" << RESET << std::endl;
}

WrongCat::~WrongCat(void) {
    std::cout << RED "WrongCat destructor called" << RESET << std::endl;
}

// SURCHARGE ----------------------------
WrongCat& WrongCat::operator=(const WrongCat& other) {
    if (this != &other)
        this->type = other.type;
    return *this;
}