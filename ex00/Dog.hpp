/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldalmas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 18:11:14 by aldalmas          #+#    #+#             */
/*   Updated: 2025/02/26 19:25:47 by aldalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {
    protected:
        std::string type;

    public:
        Dog(void);
        Dog(const Dog& other);
        Dog& operator=(const Dog& other);
        virtual ~Dog(void);

        void makeSound(void) const;
};

#endif