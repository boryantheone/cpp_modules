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

#include <iostream>
#include <fstream>

#include <iostream>
#include <string>
#include "myReplace.hpp"

int main(int ac, char *av[])
{
    if (ac == 4)
    {
        try
        {
            myReplace::replace(av[1], av[2], av[3]);
        }
        catch (const char *msg)
        {
            std::cerr << "Error: " << msg << std::endl;
            return 1;
        }
    }
    else
    {
        std::cout << "Expected 3 arguments to be given" << std::endl;
        return 2;
    }

    return 0;
}