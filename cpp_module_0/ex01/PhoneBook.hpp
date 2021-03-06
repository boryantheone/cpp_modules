/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcollin <jcollin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 20:33:32 by jcollin           #+#    #+#             */
/*   Updated: 2022/07/09 20:33:33 by jcollin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

# include "Contact.hpp"

class   PhoneBook   {
private:

            Contact contact[8];
            size_t  index;
            size_t  size;

public:

            PhoneBook( void );
            ~PhoneBook( void );

            bool    addNewContact(void);
            bool    searchContact(void) const;
};

#endif
