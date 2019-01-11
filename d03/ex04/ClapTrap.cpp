/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etranchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 16:24:54 by etranchi          #+#    #+#             */
/*   Updated: 2019/01/10 16:24:56 by etranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include "ClapTrap.hpp"


ClapTrap::ClapTrap(std::string name, int energy, int m_energy, int melee_d, int range_d, int armor_reduc) {
	this->_hp = 100;
	this->_max_hp = 100;
	this->_level = 1;
	this->_energy = energy;
	this->_max_energy = m_energy;
	this->_melee_dmg = melee_d;
	this->_ranged_dmg = range_d;
	this->_armor_reduc = armor_reduc;
	std::cout << "CL4P-TP - Created : " << name << std::endl;
}

ClapTrap::ClapTrap() {
	std::cout << "CL4P-TP - Default constructor" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "CL4P-TP - Destroyed" << std::endl;
}

// ClapTrap::ClapTrap(FragTrap & ref) {
// 	*this = ref;
// }

// ClapTrap & ClapTrap::operator=(ClapTrap & rhs) {
// 	std::cout << "Assignation operator called" << std::endl;
// 	*this = ClapTrap(rhs);
// 	return *this;
// }

void ClapTrap::rangedAttack(std::string const & target) {
	std::cout << "CL4P-TP " << this->_name << " attacks " << target << " at range, causing " << this->_ranged_dmg << " points of damage !" << std::endl;
}

void ClapTrap::meleeAttack(std::string const & target){
	std::cout << "CL4P-TP " << this->_name << " attacks " << target << " at melee, causing " << this->_melee_dmg << " points of damage !" << std::endl;	
}

void ClapTrap::intimidatingShout(std::string const & target) {
	std::cout << "CL4P-TP " << this->_name << " attacks " << target << " with intimidating shouting, causing 0 points of damage..." << std::endl;
}

void ClapTrap::makeSomeWind(std::string const & target) {
	std::cout << "CL4P-TP " << this->_name << " is making some wind for you " << target << ". Beautiful !" << std::endl;
}

void ClapTrap::makeADance(std::string const & target) {
	std::cout << "CL4P-TP " << this->_name << " want to dance with you "<< target<< ".." << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	unsigned int dmg = amount - this->_armor_reduc;
	if ((unsigned int)this->_armor_reduc > amount) {
		return ;
	}
	this->_hp -= dmg;
	if (this->_hp < 0) {
		this->_hp = 0;
	}
	std::cout << this->_name << "have " << this->_hp << " hp left." << std::endl; 
}

void ClapTrap::beRepared(unsigned int amount) {
	this->_hp += amount;
	if (this->_hp > this->_max_hp) {
		this->_hp = this->_max_hp;
	}
	std::cout << this->_name << "have " << this->_hp << " hp left." << std::endl;
}
