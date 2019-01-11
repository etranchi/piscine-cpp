/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etranchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 15:04:22 by etranchi          #+#    #+#             */
/*   Updated: 2019/01/11 15:04:23 by etranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "Character.hpp"
#include "Enemy.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"

int main()
{
Character* zaz = new Character("zaz");
std::cout << *zaz;
Enemy* b = new RadScorpion();
AWeapon* pr = new PlasmaRifle();
AWeapon* pf = new PowerFist();
zaz->equip(pr);
std::cout << *zaz;
zaz->equip(pf);
zaz->attack(b);
std::cout << *zaz;
zaz->equip(pr);
std::cout << *zaz;
zaz->attack(b);
std::cout << *zaz;
zaz->attack(b);
std::cout << *zaz;
return 0;
}
