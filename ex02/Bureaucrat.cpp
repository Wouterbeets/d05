/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbeets <wbeets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/12 10:19:53 by wbeets            #+#    #+#             */
/*   Updated: 2015/01/12 10:19:53 by wbeets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat( std::string name, int grade) :_name(name) {	
	this->setGrade(grade);
	return;
}

Bureaucrat::~Bureaucrat( void ){
	return;
}

Bureaucrat::Bureaucrat( Bureaucrat const & src) {
	*this = src;	
}

Bureaucrat const &		Bureaucrat::operator=( Bureaucrat const & src) {
	Bureaucrat b(src.getName(), src.getGrade());
	*this = b;
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i){
	std::cout << i.getName() << " has a grade of " << i.getGrade();
	return o;
}

std::string const	Bureaucrat::getName( void ) const {
	return this->_name;
}

int					Bureaucrat::getGrade( void ) const {
	return this->_grade;
}

void				Bureaucrat::setGrade( int i){
	if (i >  150){
		throw(GradeTooHighException());
	} else if (i < 1){
		throw(GradeTooLowException());
	} else {
		this->_grade = i;
	}
}


//TOO HIGH

const char*  Bureaucrat::GradeTooHighException::what() const  throw(){
	return "Bureaucrats grade is too high";
}

Bureaucrat::GradeTooHighException::GradeTooHighException(){
	return;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw(){
	return;
}

Bureaucrat::GradeTooHighException const &	Bureaucrat::GradeTooHighException::operator=( GradeTooHighException const & src){
	return src;
}


// TOO LOOOOOOW
const char*  Bureaucrat::GradeTooLowException::what() const  throw(){
	return "Bureaucrats grade is too low";
}

Bureaucrat::GradeTooLowException::GradeTooLowException(){
	return;
}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw(){
	return;
}

Bureaucrat::GradeTooLowException const &	Bureaucrat::GradeTooLowException::operator=( GradeTooLowException const & src){
	return src;
}

void				Bureaucrat::decGrade( void ){
	this->setGrade(this->getGrade() + 1);
}

void				Bureaucrat::incGrade( void ){
	this->setGrade(this->getGrade() - 1);
}

void				Bureaucrat::executeForm(Form const & form) {
	try{
		form.beExecuted(*this);
		std::cout << *this << " and  executes" << form << std::endl;
	} catch (Bureaucrat::GradeTooLowException e) {
		std::cout <<  *this << " and cannot execite " << form << " because: " << e.what() << std::endl;
	}
}

void				Bureaucrat::signForm(Form & f) {
	try{
		f.beSigned(*this);
		std::cout << *this << " and signs " << f << std::endl;
	} catch (Bureaucrat::GradeTooLowException e) {
		std::cout <<  *this << " and cannot sign " << f << " because: " << e.what() << std::endl;
	}
}

