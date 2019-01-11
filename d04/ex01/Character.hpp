/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etranchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 15:04:16 by etranchi          #+#    #+#             */
/*   Updated: 2019/01/11 15:04:16 by etranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include "Enemy.hpp"
#include "AWeapon.hpp"

#ifndef CHARACTER_H
#define CHARACTER_H

class Character
{
public:
    Character(std::string const & name);
    ~Character();
    void recoverAP();
    void equip(AWeapon* weapon);
    void attack(Enemy* ennemy);
    std::string getName() const;
    std::string introduce() const;
    std::string getAP() const;
private:
    AWeapon * _weapon;
    std::string _name;
    int _ap;

    
};


std::ostream & operator<<(std::ostream & o, Character const & rhs);
#endif //CHARACTER_H


