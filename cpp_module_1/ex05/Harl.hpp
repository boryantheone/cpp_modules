/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcollin <jcollin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 15:18:57 by jcollin           #+#    #+#             */
/*   Updated: 2022/07/10 15:18:58 by jcollin          ###   ########.fr       */
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
# define MESS_DEBUG "I love having extra bacon for my 7XL-double-cheese-\
triple-pickle-specialketchup burger. I really do!"
# define MESS_INFO  "I cannot believe adding extra bacon costs more money. You didn’t put\
enough bacon in my burger! If you did, I wouldn’t be asking for more!"
# define MESS_WARNING "I think I deserve to have some extra bacon for free. I’ve been coming for\
years whereas you started working here since last month."
# define MESS_ERROR "This is unacceptable! I want to speak to the manager now."

class Harl {
private:
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);
public:
    Harl();
    ~Harl();
    void complain(std::string level);
};

#endif
