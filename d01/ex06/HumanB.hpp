/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etranchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 15:36:57 by etranchi          #+#    #+#             */
/*   Updated: 2019/01/08 15:36:58 by etranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"

#ifndef HUMAN_B_H 
# define HUMAN_B_H

class HumanB {
	public :
		HumanB(std::string name);
		~HumanB();
		std::string name;
		Weapon *weapon;
		void attack();
		void setWeapon(Weapon &weapon);

};

#endif
