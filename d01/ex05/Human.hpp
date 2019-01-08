/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etranchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 14:23:59 by etranchi          #+#    #+#             */
/*   Updated: 2019/01/08 14:24:00 by etranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Brain.hpp"

#ifndef HUMAN_H
# define HUMAN_H

class Human {
	public : 
		Human();
		~Human();
		Brain const brain;
		const Brain & getBrain();
		const Brain *identify() const;
};

#endif


