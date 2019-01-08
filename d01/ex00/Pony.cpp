/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etranchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 11:18:56 by etranchi          #+#    #+#             */
/*   Updated: 2019/01/08 11:18:58 by etranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Pony.hpp"

Pony::Pony(std::string name) : _name(name) {
	std::cout << "Pony " << name << " created" << std::endl;
}

Pony::~Pony() {
	std::cout << "Pony " << this->_name << " destroyed" << std::endl;
} 

void Pony::displayName() {
	std::cout << "My name is " << this->_name << ".." << std::endl;
}

void Pony::ponyOnTheStack(std::string name) {
	Pony pony = Pony(name);
	pony.displayName();
	return ;
}

void Pony::ponyOnTheHeap(std::string name) {
	Pony *pony = new Pony(name);
	pony->displayName();
	std::cout << "Pony on the Heap will be delete" << std::endl;
	delete pony;
	return ;
}
