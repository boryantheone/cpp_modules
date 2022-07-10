/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcollin <jcollin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 15:03:16 by jcollin           #+#    #+#             */
/*   Updated: 2022/07/10 15:03:19 by jcollin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef WEAPON_HPP
# define WEAPON_HPP
#include <iostream>

class Weapon {
private:
    std::string _type;
public:
    Weapon(const std::string &type);
    Weapon();
    ~Weapon();
    std::string getType() const;
    void setType(const std::string &type);
};

#endif
