/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etranchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 12:51:27 by etranchi          #+#    #+#             */
/*   Updated: 2019/01/08 12:51:29 by etranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(std::string name) : name(name), type("default") {
	std::cout << "Zombie " << name << " created" << std::endl;
}

Zombie::~Zombie(){
	std::cout << "Zombie " << this->name << " " << this->type << " destoyed" << std::endl;
}

void Zombie::annonce(void) {
	std::cout << this->name << " " << this->type << " Braiiiiiiinnnssss..." << std::endl;
}


