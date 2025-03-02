/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldalmas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 13:43:03 by aldalmas          #+#    #+#             */
/*   Updated: 2025/03/02 17:10:17 by aldalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/AMateria.hpp"
#include "include/Ice.hpp"
#include "include/Cure.hpp"
#include "include/Character.hpp"

int main(void) {
    std::cout << "\nCONSTRUCTORS" << std::endl;
    Ice ice;
    Cure cure;
    Character bob("Bob");
    Character elisa("Elisa");
    Character bob_clone;
    Character bob_second_clone;
    
    std::cout << "\nMAIN TESTS" << std::endl;
    
    // equip
    bob.equip(&ice);
    bob.equip(&cure);
    
    // use materia
    bob.use(0, elisa);
    bob.use(10, elisa); // generate error
    bob.use(3, elisa); // empty
    
    // deep copy
    bob_clone = bob;
    bob_clone.use(0, bob);
    
    // unequip
    bob.unequip(10);
    bob.use(0, elisa); // can't use
    bob_clone = bob_second_clone;  // leqks check after delete inventory
    std::cout << "\nDESTRUCTORS" << std::endl;
    bob_clone.delete_inventory();

        return 0;
}