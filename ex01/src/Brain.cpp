/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Braincpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldalmas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 18:06:47 by aldalmas          #+#    #+#             */
/*   Updated: 2025/02/27 11:10:32 by aldalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Brain.hpp"

// CONSTRUCTORS AND DESTRUCTOR ----------------------------
Brain::Brain(void) {
    std::cout << GREEN "Brain constructor called" << RESET << std::endl;
}

Brain::Brain(const Brain& other) {
    *this = other;
    std::cout << GREEN "Brain copy constructor called" << RESET << std::endl;
}

Brain::~Brain(void) {
    std::cout << RED "Brain destructor called" << RESET << std::endl;
}

// SURCHARGES ----------------------------
Brain& Brain::operator=(const Brain& other) {
    if (this != &other)
    {
        for (int i = 0; i < 100; i++)
            this->ideas[i] = other.ideas[i];
    }
    return *this;
}

// SETTERS ET GETTERS ----------------------------


// FONCTIONS MEMBRES ----------------------------
