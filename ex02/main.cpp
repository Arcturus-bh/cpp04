/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldalmas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 18:22:20 by aldalmas          #+#    #+#             */
/*   Updated: 2025/02/27 19:13:49 by aldalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/AAnimal.hpp"
#include "include/WrongAnimal.hpp"
#include "include/Dog.hpp"
#include "include/Cat.hpp"
#include "include/WrongCat.hpp"

int main(void) {

    std::cout << "CONSTRUCTORS"<< std::endl;
    // Animal animal; // abstract class then can't be instaciable
    Dog dog;
    Cat cat;

    std::cout << "\nTESTS"<< std::endl;
    dog.makeSound();
    cat.makeSound();
    std::cout << std::endl;
}