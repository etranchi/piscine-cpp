/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etranchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 13:26:07 by etranchi          #+#    #+#             */
/*   Updated: 2019/01/08 13:26:10 by etranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef ZOMBIE_HORDE_H
# define ZOMBIE_HORDE_H

class ZombieHorde {
	public :
		Zombie *horde;
		ZombieHorde(int n);
		~ZombieHorde();
		void annonce();
		int n;
};

#endif
