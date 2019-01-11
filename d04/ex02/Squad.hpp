/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etranchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 17:03:38 by etranchi          #+#    #+#             */
/*   Updated: 2019/01/11 17:03:39 by etranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ISquad.hpp"
#include "ISpaceMarine.hpp"

#ifndef SQUAD_H
#define SQUAD_H

class Squad : public virtual ISquad
{
public:
    Squad();
    ~Squad();
    int getCount() const;
    ISpaceMarine *getUnit(int) const;
    int push(ISpaceMarine*);
private:
    
};

#endif //SQUAD_H

