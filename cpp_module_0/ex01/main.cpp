/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcollin <jcollin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 20:33:23 by jcollin           #+#    #+#             */
/*   Updated: 2022/07/09 20:33:24 by jcollin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

int main()
{
	PhoneBook	book;
	std::string	cmd;
	std::string	prompt;

    std::cout << "Enter command : ADD, SEARCH OR EXIT" << std::endl;
	prompt = "-> ";
	for(std::cout << prompt, std::getline(std::cin, cmd); !std::cin.eof(); std::getline(std::cin, cmd))
	{
		if (cmd == "ADD")
		{
			if (!book.addNewContact())
				break;
		}
		else if (cmd == "SEARCH")
		{
			if (!book.searchContact())
				break;
		}
		else if (cmd == "EXIT")
			break;
		std::cout << prompt;
	}

	return 0;
}