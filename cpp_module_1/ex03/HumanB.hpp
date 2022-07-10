/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcollin <jcollin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 15:02:53 by jcollin           #+#    #+#             */
/*   Updated: 2022/07/10 15:02:56 by jcollin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
# include "Weapon.hpp"

class HumanB
{
private:
    const Weapon *_weapon;
    const std::string &_name;
public:
    HumanB(std::string const &name);
    ~HumanB();
    void setWeapon(const Weapon &weapon);
    void attack() const;
};

#endif
