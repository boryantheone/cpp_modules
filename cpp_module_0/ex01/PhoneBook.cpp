/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcollin <jcollin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 20:33:27 by jcollin           #+#    #+#             */
/*   Updated: 2022/07/09 20:33:28 by jcollin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook( void ) {

    this->index = 0;
    this->size = 0;

}

PhoneBook::~PhoneBook( void ) {}

bool    PhoneBook::addNewContact() {
    if (!this->contact[this->index].setContact(this->index + 1)) {
        std::cout << std::endl << "Contact №" << this->index + 1 << " wasn't added" << std::endl;
        return false;
    }
    this->index++;

   if (this->size == 8)
		std::cout << "PhoneBook is full. The oldest contact №" << this->index << " was replaced" << std::endl;
	else
		std::cout << "Contact №" << this->index << " added" << std::endl;
	if (this->size < 8)
		this->size++;
	if (this->index == 8)
		this->index = 0;

	return true;
}

bool    PhoneBook::searchContact() const {

    size_t  index;

    if (!this->size) {
        std::cout << "No contacts :( " << std::endl;
        return true;
    }

    std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;
    for (size_t i = 0; i < this->size; i++)
        this->contact[i].showInfo();
    std::cout << "|-------------------------------------------|" << std::endl;

    if (this->size != 1) {

       std::cout << "Enter the number from 1 to " << this->size << std::endl;
       std::cout << "The contact №";

       for (std::cin >> index; index < 1 || index > this->size; std::cin >> index) {
            std::cout << "PhoneBook has " << this->size << " Contacts" << std::endl;
		    std::cout << "The contact №";
            std::cin.clear();
       }
       std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    } else {
        index = 1;
        std::cout << "PhoneBook has one contact." << std::endl;

    }

    this->contact[index - 1].getContact();

	return true;
}