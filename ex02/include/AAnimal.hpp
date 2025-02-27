/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldalmas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 18:04:26 by aldalmas          #+#    #+#             */
/*   Updated: 2025/02/27 19:10:47 by aldalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AAnimal_HPP
#define AAnimal_HPP

# define RED    "\x1b[31m"
# define GREEN   "\x1b[32m"
# define YELLOW  "\x1b[33m"
# define CYAN    "\x1b[36m"
# define MAGENTA "\x1b[35m"
# define RESET   "\x1b[0m"

#include <iostream>
#include <cstdlib>
#include "Brain.hpp"

class AAnimal {
    protected:
        std::string type;

    public:
        AAnimal(void);
        AAnimal(std::string type);
        AAnimal(const AAnimal& other);
        AAnimal& operator=(const AAnimal& other);
        virtual ~AAnimal(void);

        virtual void    makeSound(void) const = 0;
        void            setType(std::string& type);
        std::string     getType(void) const;
};

#endif