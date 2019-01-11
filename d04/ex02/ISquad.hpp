/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISquad.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etranchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 17:05:13 by etranchi          #+#    #+#             */
/*   Updated: 2019/01/11 17:05:14 by etranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ISpaceMarine.hpp"
#include <iostream>
#include <deque>
#ifndef ISQUAD_H
#define ISQUAD_H
/* code */

class ISquad
{
public:
    virtual ~ISquad() {};
    virtual int getCount() const = 0;
    virtual ISpaceMarine* getUnit(int) const = 0;
    virtual int push(ISpaceMarine*) = 0;
    std::deque<ISpaceMarine *> units;
private:
    
    
};

#endif //ISQUAD_H

