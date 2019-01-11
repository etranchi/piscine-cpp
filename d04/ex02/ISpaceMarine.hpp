/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISpaceMarine.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etranchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 17:04:54 by etranchi          #+#    #+#             */
/*   Updated: 2019/01/11 17:04:55 by etranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISPACEMARINE_H
#define ISPACEMARINE_H

class ISpaceMarine
{
public:
virtual ~ISpaceMarine() {};
virtual ISpaceMarine* clone() const = 0;
virtual void battleCry() const = 0;
virtual void rangedAttack() const = 0;
virtual void meleeAttack() const = 0;
};

#endif //ISPACEMARINE_H

