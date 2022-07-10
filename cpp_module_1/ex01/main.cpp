/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcollin <jcollin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 11:51:30 by jcollin           #+#    #+#             */
/*   Updated: 2022/07/10 11:57:19 by jcollin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
    int N = -1;

    Zombie *zombies = zombieHorde(N, "jcollin");
    
    for (int i = 0; i < N; ++i) {
        std::cout << i << ": ";
        zombies[i].announce();
    }
    
    delete[] zombies;
}