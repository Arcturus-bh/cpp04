/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldalmas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 13:39:26 by aldalmas          #+#    #+#             */
/*   Updated: 2025/03/02 15:32:09 by aldalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria {
    protected:
        std::string _type;

    public:
        Cure(void);
        Cure(const Cure& other);
        Cure& operator=(const Cure& other);
        virtual ~Cure(void);

        AMateria*   clone(void) const;
        void        use(ICharacter& target);
};

#endif