/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etranchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 14:58:52 by etranchi          #+#    #+#             */
/*   Updated: 2019/01/10 14:58:53 by etranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30, 20, 5){ 
	std::cout << "FR4G-TP - Created : " << name << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "FR4G-TP - Destroyed " << std::endl;
}


void FragTrap::vaulthunter_dot_exe(std::string const & target) {
	
	std::string actionsStr[] = {"meleeAttack", "rangedAttack", "intimidatingShout", "makeSomeWind", "makeADance"};
	int i = rand() % 5;
	if (this->_energy >= 25) {
		this->_energy -= 25;
	} else {
		std::cout << "Not enought energy dude.." << std::endl;
		return ;
	}
    void (ClapTrap::*actions[5])(std::string const & target) = {&FragTrap::meleeAttack, &FragTrap::rangedAttack, &FragTrap::intimidatingShout, &FragTrap::makeSomeWind, &FragTrap::makeADance};
	(this->*actions[i])(target);
        
}