/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcollin <jcollin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 20:33:19 by jcollin           #+#    #+#             */
/*   Updated: 2022/07/09 20:33:20 by jcollin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <string>

class   Contact   {
private:

            size_t      index;
            static      std::string ContactInfo[5];
            std::string ContactSet[5];

            bool        isNumber(std::string &str);

public:

            Contact( void );
            ~Contact( void );

            void    getContact(void) const;
            bool    setContact(size_t index);
            void    showInfo(void) const;

};

#endif