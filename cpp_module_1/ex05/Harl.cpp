/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcollin <jcollin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 15:19:03 by jcollin           #+#    #+#             */
/*   Updated: 2022/07/10 15:19:04 by jcollin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void Harl::debug() { std::cout << MESS_DEBUG << std::endl; }

void Harl::info() { std::cout << MESS_INFO << std::endl; }

void Harl::warning() { std::cout << MESS_WARNING << std::endl; }

void Harl::error() { std::cout << MESS_ERROR << std::endl; }

void Harl::complain(std::string level) {
    std::string id[STATE_COUNT] = {DEBUG, INFO, WARNING, ERROR};
    void (Harl::*complaint[STATE_COUNT]) (void) = {&Harl::debug, &Harl::info,
                                                   &Harl::warning, &Harl::error};

    for (int i = 0; i < STATE_COUNT; ++i)
        if (level == id[i])
            (this->*complaint[i])();
}
