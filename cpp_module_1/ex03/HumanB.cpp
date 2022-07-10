/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcollin <jcollin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 15:02:50 by jcollin           #+#    #+#             */
/*   Updated: 2022/07/10 15:02:51 by jcollin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::~HumanB() {}

HumanB::HumanB(std::string const &name): _weapon(nullptr), _name(name) {}

void HumanB::setWeapon(const Weapon &weapon) {
    this->_weapon = &weapon;
}

void HumanB::attack() const {
    if (this->_weapon == nullptr)
        std::cout << this->_name << " Don't weapon for attack" << std::endl;
    else
        std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}
