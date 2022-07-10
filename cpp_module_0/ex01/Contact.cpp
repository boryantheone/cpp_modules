/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcollin <jcollin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 20:33:15 by jcollin           #+#    #+#             */
/*   Updated: 2022/07/09 20:33:16 by jcollin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string Contact::ContactInfo[5] = {
    "First name",
    "Last name",
    "Nickname",
    "Phone number",
    "Darkest secret"
};

Contact::Contact(void) {
    for(int i = 0; i < 4; i++)
        this->ContactSet[i] = std::string();
}

Contact::~Contact(void) {}

bool	Contact::isNumber(std::string &str) {

	for(int i = 0; str[i]; i++)
		if (!std::isdigit(str[i]))
			return false;

	return true;
}

void    Contact::showInfo() const {
    std::cout << "|" << std::setw(10) << this->index << "|";
    for (int i = 0; i < 3; i++) {
        if (this->ContactSet[i].length() > 10)
            std::cout << this->ContactSet[i].substr(0, 9) << ".|";
        else
            std::cout << std::setw(10) << this->ContactSet[i] << "|";
    }
    std::cout << std::endl;
}

bool    Contact::setContact(size_t index) {

    this->index = index;

    for (int i = 0; i < 5; i++) {
        std::cout << this->ContactInfo[i] << ": ";
        std::getline(std::cin, this->ContactSet[i]);
        if (std::cin.eof())
            return false;
        if (this->ContactSet[i].empty() && i != 3) {
            std::cout << "Repeat the entry! " << std::endl;
            i--;
            continue ;
        }
        else if (i == 3 && (this->ContactSet[i].empty() || !isNumber(this->ContactSet[i]))) {
            std::cout << "Phone number should contain numbers" << std::endl;
            i--;
            continue ;
        }
    }
    return true;
}

void    Contact::getContact(void) const {

    for (int i = 0; i < 4; i++)
        std::cout << this->ContactInfo[i] << ":" << this->ContactSet[i] << std::endl;
}

