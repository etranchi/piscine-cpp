/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etranchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 12:02:30 by etranchi          #+#    #+#             */
/*   Updated: 2019/01/14 12:02:31 by etranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat() : _name("default"), _grade(150) {

}


Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {
	if (grade < 1) {
		throw this->GradeTooHighException();
	}
	if (grade > 150) {
		throw this->GradeTooLowException();
	}
	this->_grade = grade;
}

std::exception Bureaucrat::GradeTooLowException() const {
	return (std::exception());
}

std::exception  Bureaucrat::GradeTooHighException() const {
	return (std::exception());
}

int Bureaucrat::getGrade() const {
	return this->_grade;
}

std::string Bureaucrat::getName() const {
	return this->_name;
}


void Bureaucrat::decrementGrade() {
	this->_grade += 1; 
	if (this->_grade > 150) {
		throw this->GradeTooLowException();
	}
	return;
}

void Bureaucrat::incrementGrade() {
	this->_grade -= 1;
	if (this->_grade < 1) {
		throw this->GradeTooHighException();
	}
	return ;
}


std::ostream &operator<<(std::ostream &o, Bureaucrat & rhs) {
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << std::endl;
	return o;
}