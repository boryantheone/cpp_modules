#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

# include "Contact.hpp"

class   PhoneBook   {
private:

            Contact _contact[8];
            size_t  _count;
            size_t  _countIndex; 
}