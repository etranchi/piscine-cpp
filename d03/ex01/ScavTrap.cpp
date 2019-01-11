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


ScavTrap::ScavTrap(std::string name) : _name(name) {
	this->_hp = 100;
	this->_max_hp = 100;
	this->_energy = 50;
	this->_max_energy = 50;
	this->_level = 1;
	this->_melee_dmg = 20;
	this->_ranged_dmg = 15;
	this->_armor_reduc = 3;
	std::cout << "SC4V-TP - Created : " << name << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "SC4V-TP - Destroyed : " << this->_name << std::endl;
}



ScavTrap & FragTrap::operator=(ScavTrap const & rhs) {
	std::cout << "Assignation operator called" << std::endl;
	return *this;
}

void ScavTrap::rangedAttack(std::string const & target) {
	std::cout << "SC4V-TP " << this->_name << " attacks " << target << " at range, causing " << this->_ranged_dmg << " points of damage !" << std::endl;
}

void ScavTrap::meleeAttack(std::string const & target){
	std::cout << "SC4V-TP " << this->_name << " attacks " << target << " at melee, causing " << this->_melee_dmg << " points of damage !" << std::endl;	
}

void ScavTrap::intimidatingShout(std::string const & target) {
	std::cout << "SC4V-TP " << this->_name << " attacks " << target << " with intimidating shouting, causing 0 points of damage..." << std::endl;
}

void ScavTrap::makeSomeWind(std::string const & target) {
	std::cout << "SC4V-TP " << this->_name << " is making some wind for you " << target << ". Beautiful !" << std::endl;
}

void ScavTrap::makeADance(std::string const & target) {
	std::cout << "SC4V-TP " << this->_name << " want to dance with you "<< target<< ".." << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount) {
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

void ScavTrap::beRepared(unsigned int amount) {
	this->_hp += amount;
	if (this->_hp > this->_max_hp) {
		this->_hp = this->_max_hp;
	}
	std::cout << this->_name << "have " << this->_hp << " hp left." << std::endl;
}

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