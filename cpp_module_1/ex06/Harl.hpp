/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcollin <jcollin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 15:19:32 by jcollin           #+#    #+#             */
/*   Updated: 2022/07/10 15:19:33 by jcollin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

# define STATE_COUNT 4
# define DEBUG "debug"
# define INFO "info"
# define WARNING "warning"
# define ERROR "error"
# define H_DEBUG "[DEBUG]"
# define H_INFO "[INFO]"
# define H_WARNING "[WARNING]"
# define H_ERROR "[ERROR]"
# define MESS_DEBUG "I love having extra bacon for my 7XL-double-cheese-\
triple-pickle-specialketchup burger.\nI really do!"
# define MESS_INFO  "I cannot believe adding extra bacon costs more money.\nYou didn’t put\
enough bacon in my burger! If you did, I wouldn’t be asking for more!"
# define MESS_WARNING "I think I deserve to have some extra bacon for free.\nI’ve been coming for\
years whereas you started working here since last month."
# define MESS_ERROR "This is unacceptable! I want to speak to the manager now."
# define MESS_NAGGING "[ Probably complaining about insignificant problems ]"
# define INVALID_INPUT_DATA "Invalid input"


class Harl {
private:
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);
    void nagging(void);
public:
    Harl();
    ~Harl();
    void complain(std::string level);
    void upComplain(std::string level);
};

#endif
