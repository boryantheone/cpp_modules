/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcollin <jcollin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 15:03:01 by jcollin           #+#    #+#             */
/*   Updated: 2022/07/10 15:11:26 by jcollin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void)
{
    {
        Weapon club = Weapon("crude cpiked club");
        HumanA bob("Bob", club);

        bob.attack();
        club.setType("come other type of club");
        bob.attack();
    }
    {
        Weapon club = Weapon("crude cpiked club");
        HumanB jim("Jim");

        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
    }
    return (0);
}
