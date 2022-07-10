/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcollin <jcollin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 10:52:21 by jcollin           #+#    #+#             */
/*   Updated: 2022/07/10 11:19:13 by jcollin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(const std::string name) {
    this->_name = name;
    announce();
}

Zombie::~Zombie(void) {
    std::cout << this->_name << ": dead" << std::endl;
}

void    Zombie::announce() {
    std::cout << this->_name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}