/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etranchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 15:03:05 by etranchi          #+#    #+#             */
/*   Updated: 2019/01/11 15:03:06 by etranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "AWeapon.hpp"
#include <iostream>

#ifndef POWERFIST_H
#define POWERFIST_H

class PowerFist : public virtual AWeapon
{
public:
    PowerFist();
    ~PowerFist();

    void attack() const;
private:
};

#endif //POWERFIST_H