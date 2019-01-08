/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etranchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 13:26:02 by etranchi          #+#    #+#             */
/*   Updated: 2019/01/08 13:26:04 by etranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"
#include "ZombieHorde.hpp"

ZombieHorde::~ZombieHorde() {
	delete [] this->horde;
	std::cout << "Delete" << std::endl;
}

ZombieHorde::ZombieHorde(int n) {
	std::cout << "Horde init" << std::endl;
	std::string names[8] = {"toto", "titi", "tutu", "tata", "lolo", "lili", "lulu", "lala"};
	int i = -1;
	this->n = n;
	this->horde = new Zombie[n];
	while (++i < n) {
		int rand = std::rand() % 8;
		this->horde[i].name = names[rand];
	}
}

void ZombieHorde::annonce() {
	int i = -1;
	while (++i < this->n) {
		this->horde[i].annonce();
	}
	return ;
}
