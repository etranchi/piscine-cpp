/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etranchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 15:03:40 by etranchi          #+#    #+#             */
/*   Updated: 2019/01/11 15:03:41 by etranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include "Enemy.hpp"

#ifndef SUPERMUTANT_H
#define SUPERMUTANT_H

class SuperMutant : public virtual Enemy
{
public:
    SuperMutant();
    ~SuperMutant();
    void takeDamage(int dmg);
private:
    
};

#endif //SUPERMUTANT_H
