/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldalmas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 18:22:20 by aldalmas          #+#    #+#             */
/*   Updated: 2025/02/27 11:30:08 by aldalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Animal.hpp"
#include "includes/WrongAnimal.hpp"
#include "includes/Dog.hpp"
#include "includes/Cat.hpp"
#include "includes/WrongCat.hpp"

int main(void) {
    {
        std::cout << "CONSTRUCTORS"<< std::endl;
        Animal animal;
        Dog dog;
        Cat cat;

        std::cout << "\nTESTS"<< std::endl;
        animal.makeSound();
        dog.makeSound();
        cat.makeSound();
        std::cout << std::endl;
    }
    {
        std::cout << "\nMAIN GAVE BY THE SUBJECT"<< std::endl;
        const Animal* meta = new Animal();
        const Animal* j = new Dog();
        const Animal* i = new Cat();
        std::cout << j->getType() << " " << std::endl;
        std::cout << i->getType() << " " << std::endl;
        i->makeSound();
        j->makeSound();
        meta->makeSound();
        delete meta;
        delete j;
        delete i;
        std::cout << std::endl;
    }
    {
        std::cout << "TRY WITH WRONGANIMAL AND WRONGCAT "<< std::endl;
        WrongAnimal wanimal;
        WrongCat wcat;

        wanimal.makeSound();
        wcat.makeSound();
        std::cout << std::endl;
    }
}