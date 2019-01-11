/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etranchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 17:04:21 by etranchi          #+#    #+#             */
/*   Updated: 2019/01/11 17:04:22 by etranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ISpaceMarine.hpp"

#ifndef ASSAULT_TERMINATOR_H
#define ASSAULT_TERMINATOR_H

class AssaultTerminator : public virtual ISpaceMarine
{
public:
    AssaultTerminator();
    ~AssaultTerminator();
    virtual ISpaceMarine *clone() const;
    void battleCry() const;
    void rangedAttack() const;
    void meleeAttack() const;
private:
    
};

#endif //ASSAULT_TERMINATOR_H


