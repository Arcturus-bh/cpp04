/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldalmas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 13:39:26 by aldalmas          #+#    #+#             */
/*   Updated: 2025/02/28 16:06:46 by aldalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# define RED    "\x1b[31m"
# define GREEN   "\x1b[32m"
# define YELLOW  "\x1b[33m"
# define CYAN    "\x1b[36m"
# define MAGENTA "\x1b[35m"
# define RESET   "\x1b[0m"

# include <iostream>
# include <cstdlib>

class ICharacter;

class AMateria {
    protected:
        std::string type;

    public:
        AMateria(void);
        AMateria(std::string const& type);
        AMateria(const AMateria& other);
        AMateria& operator=(const AMateria& other);
        virtual ~AMateria(void);

        std::string const& getType(void) const;
        virtual AMateria* clone(void) const = 0;
        virtual void use(ICharacter& target);
};

#endif