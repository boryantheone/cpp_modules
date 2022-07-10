/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcollin <jcollin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 15:02:45 by jcollin           #+#    #+#             */
/*   Updated: 2022/07/10 15:02:46 by jcollin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include "Weapon.hpp"

class HumanA
{
private:
    const Weapon &_weapon;
    std::string _name;
public:
    HumanA(std::string name, const Weapon &weapon);
    ~HumanA();
    void attack() const;
};

#endif
