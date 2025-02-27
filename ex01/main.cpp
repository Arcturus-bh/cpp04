/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldalmas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 18:22:20 by aldalmas          #+#    #+#             */
/*   Updated: 2025/02/27 13:55:56 by aldalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Animal.hpp"
#include "include/WrongAnimal.hpp"
#include "include/Dog.hpp"
#include "include/Cat.hpp"
#include "include/WrongCat.hpp"

int main(void) {
    int i = 0;
    int SIZE = 100;
    Animal* tab[SIZE];

    for (; i < SIZE / 2; i++) {
        tab[i] = new Dog();
        std::cout << std::endl;
    }
    for (; i < SIZE; i++) {
        tab[i] = new Cat();
        std::cout << std::endl;
    }
    std::cout << "\nTESTS" << std::endl;
    tab[4]->makeSound(); // dog
    tab[49]->makeSound(); // dog 
    tab[50]->makeSound(); // cat 
    tab[99]->makeSound(); // cat

    Dog chienchien;
    Cat chachat;

    
    
    std::cout << "\nDESTRUCTORS" << std::endl;
    for (int i = 0; i < SIZE; i++) {
        delete tab[i];
        std::cout << std::endl;
    }
    return 0;
}




//     std::cout << "\nMAIN GAVE BY THE SUBJECT"<< std::endl;
//     const Animal* meta = new Animal();
//     const Animal* j = new Dog();
//     const Animal* i = new Cat();
//     std::cout << j->getType() << " " << std::endl;
//     std::cout << i->getType() << " " << std::endl;
//     i->makeSound();
//     j->makeSound();
//     meta->makeSound();
//     std::cout << "\nDESTRUCTORS" << std::endl;
//     delete meta;
//     delete j;
//     delete i;
//     std::cout << std::endl;
// }