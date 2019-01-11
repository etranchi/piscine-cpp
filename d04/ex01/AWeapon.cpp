/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etranchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 15:02:32 by etranchi          #+#    #+#             */
/*   Updated: 2019/01/11 15:02:34 by etranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AWeapon.hpp"


AWeapon::AWeapon(std::string const & name, int apcost, int damage) : _name(name), _cost_point(apcost), _numberOfDamage(damage) {}

AWeapon::~AWeapon() {}

std::string AWeapon::getName() const { return this->_name;}
int AWeapon::getAPCost() const { return this->_cost_point;};
int AWeapon::getDamage() const { return this->_numberOfDamage;};
