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


FragTrap::FragTrap(std::string name) : _name(name) {
	this->_hp = 100;
	this->_max_hp = 100;
	this->_energy = 100;
	this->_max_energy = 100;
	this->_level = 1;
	this->_melee_dmg = 30;
	this->_ranged_dmg = 20;
	this->_armor_reduc = 5;
	std::cout << "FR4G-TP - Created : " << name << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "FR4G-TP - Destroyed : " << this->_name << std::endl;
}


FragTrap & FragTrap::operator=(FragTrap const & rhs) {
	std::cout << "Assignation operator called" << std::endl;
	return *this;
}

void FragTrap::rangedAttack(std::string const & target) {
	std::cout << "FR4G-TP " << this->_name << " attacks " << target << " at range, causing " << this->_ranged_dmg << " points of damage !" << std::endl;
}

void FragTrap::meleeAttack(std::string const & target){
	std::cout << "FR4G-TP " << this->_name << " attacks " << target << " at melee, causing " << this->_melee_dmg << " points of damage !" << std::endl;	
}

void FragTrap::intimidatingShout(std::string const & target) {
	std::cout << "FR4G-TP " << this->_name << " attacks " << target << " with intimidating shouting, causing 0 points of damage..." << std::endl;
}

void FragTrap::makeSomeWind(std::string const & target) {
	std::cout << "FR4G-TP " << this->_name << " is making some wind for you " << target << ". Beautiful !" << std::endl;
}

void FragTrap::makeADance(std::string const & target) {
	std::cout << "FR4G-TP " << this->_name << " want to dance with you "<< target<< ".." << std::endl;
}

void FragTrap::takeDamage(unsigned int amount) {
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

void FragTrap::beRepared(unsigned int amount) {
	this->_hp += amount;
	if (this->_hp > this->_max_hp) {
		this->_hp = this->_max_hp;
	}
	std::cout << this->_name << "have " << this->_hp << " hp left." << std::endl;
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
    void (FragTrap::*actions[5])(std::string const & target) = {&FragTrap::meleeAttack, &FragTrap::rangedAttack, &FragTrap::intimidatingShout, &FragTrap::makeSomeWind, &FragTrap::makeADance};
	(this->*actions[i])(target);
        
}