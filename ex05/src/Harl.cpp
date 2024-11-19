/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstrohal <pstrohal@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 19:56:58 by pstrohal          #+#    #+#             */
/*   Updated: 2024/11/19 20:44:43 by pstrohal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

/* ************************************************************************** */
/*		CONSTRUCTORS, DESTRUCTOR
*/
Harl::Harl(){}
Harl::~Harl(){}

/* ************************************************************************** */
/*		Class Functions
*/

void	Harl::complain(std::string level)
{
	char i = level[0];
	void (Harl::*func[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	switch (i)
	{
		case 'd':
			(this->*func[0])();
			break ;
		case 'i':
			(this->*func[1])();
			break ;
		case 'w':
			(this->*func[2])();
			break ;
		case 'e':
			(this->*func[3])();
			break ;
		default :
			std::cout<<"Wow Harls throat suddelny got really dry, he cant speak.\n"<<std::endl;
	}
}

void	Harl::debug(void)
{
	std::cout<<"I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!\n"<<std::endl;
}

void	Harl::info(void)
{
	std::cout<<"I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!\n"<<std::endl;
}

void	Harl::warning(void)
{
	std::cout<<"I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month.this\n"<<std::endl;
}

void	Harl::error(void)
{
	std::cout<<"This is unacceptable! I want to speak to the manager now.\n"<<std::endl;
}