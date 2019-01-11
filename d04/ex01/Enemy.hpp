/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etranchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 15:03:19 by etranchi          #+#    #+#             */
/*   Updated: 2019/01/11 15:03:20 by etranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#ifndef ENEMY_H
#define ENEMY_H
class Enemy
{
public:
    Enemy(int hp, std::string const & type);
    virtual ~Enemy();
    std::string getType() const;
    int getHP() const;
    virtual void takeDamage(int dmg);
private:
    int _hp;
    std::string _type;
    
};

#endif //ENEMY_H


