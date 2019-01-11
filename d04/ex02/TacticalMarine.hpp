/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etranchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 17:04:01 by etranchi          #+#    #+#             */
/*   Updated: 2019/01/11 17:04:02 by etranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ISpaceMarine.hpp"
#include <iostream>
#ifndef TACTICAL_MARINE_H
#define TACTICAL_MARINE_H

class TacticalMarine : public virtual ISpaceMarine
{
public:
    TacticalMarine();
    ~TacticalMarine();
    virtual ISpaceMarine *clone() const;
    void battleCry() const;
    void rangedAttack() const;
    void meleeAttack() const;
    
private:
    
};

#endif //TACTICAL_MARINE_H

