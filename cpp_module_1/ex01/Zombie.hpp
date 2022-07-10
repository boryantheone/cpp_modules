/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcollin <jcollin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 11:34:53 by jcollin           #+#    #+#             */
/*   Updated: 2022/07/10 11:42:24 by jcollin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

# include <iostream>
# include <iomanip>
# include <string>

class   Zombie   {
private:
            
            std::string _name;
public:

            Zombie( void );
            Zombie( const std::string name );
            ~Zombie( void );
            void    announce( void );
            void    setName( std::string name);
};

Zombie* zombieHorde( int N, std::string name );
 
#endif