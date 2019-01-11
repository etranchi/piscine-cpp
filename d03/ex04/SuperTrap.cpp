/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etranchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 17:48:54 by etranchi          #+#    #+#             */
/*   Updated: 2019/01/10 17:48:54 by etranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "NinjaTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string name) : FragTrap(name), NinjaTrap(name){
	std::cout << "SP4V-TP - Created : " << name << std::endl;
	this->_hp = FragTrap::_hp;
	this->_max_hp = FragTrap::_max_hp;
	this->_energy = NinjaTrap::_energy;
	this->_melee_dmg = NinjaTrap::_melee_dmg;
	this->_ranged_dmg = FragTrap::_ranged_dmg;
	this->_armor_reduc = FragTrap::_armor_reduc;

}

SuperTrap::~SuperTrap(){
	std::cout << "SP4V-TP - Destroyed" << std::endl;
}

void SuperTrap::rangedAttack(std::string const & target) {
	FragTrap::rangedAttack(target);
}

void SuperTrap::meleeAttack(std::string const & target) {
	NinjaTrap::meleeAttack(target);
}
