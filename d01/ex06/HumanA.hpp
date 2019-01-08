/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etranchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 15:36:44 by etranchi          #+#    #+#             */
/*   Updated: 2019/01/08 15:36:45 by etranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"

#ifndef HUMAN_A_H 
# define HUMAN_A_H

class HumanA {
	public :
		HumanA(std::string name, Weapon &weapon);
		~HumanA();
		std::string name;
		Weapon &weapon;
		void attack();
};

#endif
