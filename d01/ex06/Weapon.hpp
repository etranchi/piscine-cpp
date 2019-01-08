/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etranchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 15:36:29 by etranchi          #+#    #+#             */
/*   Updated: 2019/01/08 15:36:30 by etranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef WEAPON_H
# define WEAPON_H

class Weapon {
	public :
		Weapon(std::string name);
		~Weapon();
		std::string type;
		const std::string & getType(void);
		void setType(std::string type);
};

#endif
