/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etranchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 12:51:46 by etranchi          #+#    #+#             */
/*   Updated: 2019/01/08 12:51:47 by etranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

#ifndef ZOMBIE_EVENT_H
# define ZOMBIE_EVENT_H

class ZombieEvent {
	public:
		ZombieEvent();
		~ZombieEvent();
		void setZombieType(Zombie *zombie, std::string type);
		Zombie *newZombie(std::string name);
		static void randomChump();
};


#endif
