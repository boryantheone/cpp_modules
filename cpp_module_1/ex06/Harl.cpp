/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcollin <jcollin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 15:19:27 by jcollin           #+#    #+#             */
/*   Updated: 2022/07/10 15:19:28 by jcollin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void Harl::debug() { std::cout << H_DEBUG << std::endl << MESS_DEBUG << std::endl; }

void Harl::info() { std::cout << H_INFO << std::endl << MESS_INFO << std::endl; }

void Harl::warning() { std::cout << H_WARNING << std::endl << MESS_WARNING << std::endl; }

void Harl::error() { std::cout << H_ERROR << std::endl << MESS_ERROR << std::endl; }

void Harl::nagging() { std::cout << MESS_NAGGING << std::endl; }

void Harl::complain(std::string level) {
    std::string id[STATE_COUNT] = {DEBUG, INFO, WARNING, ERROR};
    void (Harl::*complaint[STATE_COUNT]) (void) = {&Harl::debug, &Harl::info,
                                                   &Harl::warning, &Harl::error};

    for (int i = 0; i < STATE_COUNT; ++i)
        if (level == id[i])
            (this->*complaint[i])();
}

void Harl::upComplain(std::string level) {
    bool flag = false;
    std::string id[STATE_COUNT] = {DEBUG, INFO, WARNING, ERROR};
    void (Harl::*complaint[STATE_COUNT + 1]) (void) = {&Harl::debug, &Harl::info,
                                                       &Harl::warning, &Harl::error,
                                                       &Harl::nagging};

    for (int i = 0; i < STATE_COUNT; ++i) {
        if (level == id[i])
            flag = true;
        if (flag)
            (this->*complaint[i])();
    }
    if (!flag)
        (this->*complaint[STATE_COUNT])();
}
