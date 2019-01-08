/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etranchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 12:51:53 by etranchi          #+#    #+#             */
/*   Updated: 2019/01/08 12:51:54 by etranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Zombie.hpp"
#include "ZombieEvent.hpp"


ZombieEvent::ZombieEvent() {
}
ZombieEvent::~ZombieEvent() {

}

void ZombieEvent::setZombieType(Zombie *zombie, std::string type) {
	zombie->type = type;
}


Zombie *ZombieEvent::newZombie(std::string name) {
	Zombie *z = new Zombie(name);
	return z;
}


void ZombieEvent::randomChump() {
	ZombieEvent instance;
	std::string names[8] = {"toto", "titi", "tutu", "tata", "lolo", "lili", "lulu", "lala"};
	std::string types[3] = {"marsien", "terrien", "lunaire"};
	int i = -1;
	while (++i < 8) {
		int rand = std::rand() %8;
		int randType = std::rand() % 3;
		Zombie *z = instance.newZombie(names[rand]);
		instance.setZombieType(z, types[randType]);
		z->annonce();
		delete z;
	}

}