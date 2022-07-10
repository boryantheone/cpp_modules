/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcollin <jcollin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 10:52:28 by jcollin           #+#    #+#             */
/*   Updated: 2022/07/10 11:19:18 by jcollin          ###   ########.fr       */
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

            Zombie( const std::string name );
            ~Zombie( void );
            void    announce( void );
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );
 
#endif