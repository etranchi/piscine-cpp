/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etranchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 17:29:20 by etranchi          #+#    #+#             */
/*   Updated: 2019/01/10 17:29:21 by etranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "NinjaTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name, 120, 120, 60, 5, 0) {
	std::cout << "SC4V-TP - Created : " << name << std::endl;
}

NinjaTrap::~NinjaTrap(){
	std::cout << "SC4V-TP - Destroyed : " << this->_name << std::endl;
}

// NinjaTrap::NinjaTrap(FragTrap & ref) {
// 	*this = ref;
// }



// NinjaTrap & NinjaTrap::operator=(NinjaTrap & rhs) {
// 	*this = NinjaTrap(ref);
// 	return *this;
// }

void NinjaTrap::ninjaShoebox(FragTrap & ref) {
	std::cout << "Ninja from FragTrap " << ref._name << std::endl;
}

void NinjaTrap::ninjaShoebox(ClapTrap & ref) {
	std::cout << "Ninja from ClapTrap " << ref._name << std::endl;
}

void NinjaTrap::ninjaShoebox(ScavTrap & ref) {
	std::cout << "Ninja from ScavTrap " << ref._name << std::endl;
}

void NinjaTrap::ninjaShoebox(NinjaTrap & ref) {
	std::cout << "Ninja from NinjaTrap " << ref._name << std::endl;
}