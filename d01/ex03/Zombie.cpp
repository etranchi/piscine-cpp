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

Zombie::Zombie() {
	std::cout << "Zombie" << " created" << std::endl;
}

Zombie::~Zombie(){
	std::cout << "Zombie" << " destoyed" << std::endl;
}

void Zombie::annonce(void) {
	std::cout << this->name << " Braiiiiiiinnnssss..." << std::endl;
}


