/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldalmas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 13:39:26 by aldalmas          #+#    #+#             */
/*   Updated: 2025/02/28 14:42:26 by aldalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : AMateria {
    private:
        std::string _type;

    public:
        Ice(void);
        Ice(const Ice& other);
        Ice& operator=(const Ice& other);
        ~Ice(void);

        AMateria* clone(void) const;
        void use(ICharacter& target);
};

#endif