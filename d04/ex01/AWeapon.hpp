/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etranchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 15:02:28 by etranchi          #+#    #+#             */
/*   Updated: 2019/01/11 15:02:29 by etranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#ifndef AWEAPON_H
#define AWEAPON_H
class AWeapon
{
public:
    AWeapon(std::string const & name, int apcost, int damage);
    ~AWeapon();
    std::string getName() const; 
    int getAPCost() const; 
    int getDamage() const; 
    virtual void attack() const = 0;
private:
    std::string _name;
    int _cost_point;
    int _numberOfDamage;
};

#endif //AWEAPON_H


