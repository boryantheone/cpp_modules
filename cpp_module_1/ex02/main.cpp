/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcollin <jcollin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 11:58:52 by jcollin           #+#    #+#             */
/*   Updated: 2022/07/10 13:01:25 by jcollin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <iomanip>
# include <string>

int main() {
    std::string string = "HI THIS IS BRAIN";
    std::string  *stringPTR = &string; //указатель на строку, указатель - переменная, хранящая значение адреса
    std::string &stringREF = string; //ссылка на строку

    std::cout << "The memory address of the string variable: " << &string << std::endl;
    std::cout << "The memory address held by stringPTR: " << &(*stringPTR) << std::endl;
    std::cout << "The memory address held by stringREF: " << &stringREF << std::endl;
    
    std::cout << "The value of the string variable: " << string << std::endl;
    std::cout << "The value pointed to by stringPTR: " << *stringPTR << std::endl;
    std::cout << "The value pointed to by stringREF: " << stringREF << std::endl;
}