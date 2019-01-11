/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etranchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 17:04:08 by etranchi          #+#    #+#             */
/*   Updated: 2019/01/11 17:04:09 by etranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ISpaceMarine.hpp"
#include "TacticalMarine.hpp"


TacticalMarine::TacticalMarine() : ISpaceMarine() {
    std::cout << "Tactical Marine ready for battle" << std::endl;
}

TacticalMarine::~TacticalMarine() {
    std::cout << "Aaargh ..." << std::endl;
}


ISpaceMarine *TacticalMarine::clone() const {
    return (ISpaceMarine *)this;
}

void TacticalMarine::battleCry() const {
    std::cout << "For the holy PLOT !" << std::endl;
}

void TacticalMarine::rangedAttack() const {
    std::cout << "* attacks with bolter *" << std::endl;
}

void TacticalMarine::meleeAttack() const {
    std::cout << "* attacks with chainsword *" << std::endl;
}

