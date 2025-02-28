/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldalmas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 13:39:26 by aldalmas          #+#    #+#             */
/*   Updated: 2025/02/28 15:54:46 by aldalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

#include "AMateria.hpp"

class ICharacter {
    public:
        virtual ~ICharacter(void);
        
        virtual std::string const & getName() const = 0;
        virtual void        equip(AMateria* m) = 0;
        virtual void        unequip(int idx) = 0;
        virtual void        use(int idx, ICharacter& target) = 0;
};

#endif