/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldalmas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 11:05:33 by aldalmas          #+#    #+#             */
/*   Updated: 2025/02/27 11:40:25 by aldalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include "Animal.hpp"

class Brain {
    private:
        std::string ideas[100];

    public:
        Brain(void);
        Brain(const Brain& other);
        Brain& operator=(const Brain& other);
        ~Brain(void);
};

#endif