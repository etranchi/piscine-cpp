/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etranchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 15:45:41 by etranchi          #+#    #+#             */
/*   Updated: 2019/01/10 15:45:43 by etranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 100, 30, 20, 5) {
	std::cout << "SC4V-TP - Created : " << name << std::endl;
}

ScavTrap::~ScavTrap(){
	std::cout << "SC4V-TP - Destroyed : " << this->_name << std::endl;
}

// ScavTrap::ScavTrap(FragTrap & ref) {
// 	*this = ref;
// }



// ScavTrap & ScavTrap::operator=(ScavTrap & rhs) {
// 	*this = ScavTrap(ref);
// 	return *this;
// }

void ScavTrap::challengeNewcomer() {
	
	std::string actionsStr[] = {"running", "walking", "eating", "pissing", "kissing", "dancing"};
	int i = rand() %  6;
	if (this->_energy >= 25) {
		this->_energy -= 25;
	} else {
		std::cout << "Not enought energy dude.." << std::endl;
		return ;
	}
	std::cout << this->_name << " is " << actionsStr[i] << std::endl;
        
}