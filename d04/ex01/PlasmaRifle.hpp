/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etranchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 15:02:46 by etranchi          #+#    #+#             */
/*   Updated: 2019/01/11 15:02:47 by etranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include <iostream>

#ifndef PLASMARIFLE_H
#define PLASMARIFLE_H

class PlasmaRifle : public virtual AWeapon
{
public:
    PlasmaRifle();
    ~PlasmaRifle();

    void attack() const;
private:
};

#endif //PLASMARIFLE_H
