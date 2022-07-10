/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcollin <jcollin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 11:24:16 by jcollin           #+#    #+#             */
/*   Updated: 2022/07/10 11:30:46 by jcollin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *zombie = newZombie("Foo");
    Zombie *zombie1 = newZombie("Boo");
    randomChump("JoJo");
    randomChump("Sticky Fingers");
    delete (zombie);
    delete (zombie1);
    return (0);
}