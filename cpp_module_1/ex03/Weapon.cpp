/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcollin <jcollin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 15:03:07 by jcollin           #+#    #+#             */
/*   Updated: 2022/07/10 15:03:08 by jcollin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() {}

Weapon::Weapon(const std::string &type): _type(type) {}

Weapon::~Weapon() {
    this->_type = "";
}

void Weapon::setType(const std::string &type) {
    this->_type = type;
}

std::string Weapon::getType() const {
    return (this->_type);
}
