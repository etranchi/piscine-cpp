/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etranchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 15:03:52 by etranchi          #+#    #+#             */
/*   Updated: 2019/01/11 15:03:53 by etranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include "Enemy.hpp"

#ifndef RADSCORPION_H
#define RADSCORPION_H

class RadScorpion : public virtual Enemy
{
public:
    RadScorpion();
    ~RadScorpion();
private:
    
};

#endif //RADSCORPION_H