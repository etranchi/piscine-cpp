/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etranchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 12:02:24 by etranchi          #+#    #+#             */
/*   Updated: 2019/01/14 12:02:27 by etranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H


class Bureaucrat {
public:
	Bureaucrat();
	Bureaucrat(const std::string name, int grade);
	Bureaucrat(Bureaucrat & ref);
	~Bureaucrat();
	int getGrade() const;
	std::string const getName() const;
	void incrementGrade();
	std::string introduce() const;
	void decrementGrade();
	// class GradeTooHighException : public std::exception {
	// public:
	// 	GradeTooHighException();
	// 	GradeTooHighException(std::string reason);
	// 	// ~GradeTooHighException();
	// 	virtual const char *what() const throw();
	// 	std::string reason;
	// };
	// class GradeTooLowException : public std::exception {
	// public:
	// 	GradeTooLowException();
	// 	GradeTooLowException(std::string reason);
	// 	// ~GradeTooLowException();
	// 	virtual const char *what() const throw();
	// 	std::string reason;
	// };


private:
	std::string const _name;
	int _grade;
};

std::ostream &operator<<(std::ostream &o, Bureaucrat const & rhs);
// std::ostream &operator<<(std::ostream &o, Bureaucrat * const & rhs);
#endif