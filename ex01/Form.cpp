/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbeets <wbeets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/12 13:17:06 by wbeets            #+#    #+#             */
/*   Updated: 2015/01/12 13:17:06 by wbeets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(std::string name, int reqGradeSign, int reqGradeExec) 
	:_name(name), 
	_signed(false),
   	_reqGradeSign( reqGradeSign),
	_reqGradeExec( reqGradeExec) {
	if (reqGradeExec >  150 || reqGradeSign > 150){
		throw(Form::GradeTooLowException());
	} else if (reqGradeExec < 1 || reqGradeSign < 1) {
		throw(Form::GradeTooHighException());
	}
	return;
}

Form::~Form(){
	return;
}

Form::Form(Form const & src) 
	:_name(src.getName()),
   	_signed(src.getSigned()),
   	_reqGradeSign(src.getReqGradeSign()),
	_reqGradeExec(src.getReqGradeExec()) {
}

Form  const &		Form::operator=(Form const & i){
	/*create copy function here*/
	Form	n(	i.getName(),
				i.getReqGradeSign(),
				i.getReqGradeExec());
	*this = n;
	return *this;
}

std::string		Form::getName( void ) const{
	return this->_name;
}

bool			Form::getSigned( void ) const {
	return this->_signed;
}

int				Form::getReqGradeSign( void ) const {
	return this->_reqGradeSign;
}

int				Form::getReqGradeExec( void ) const {
	return this->_reqGradeExec;
}

std::ostream &		operator<<(std::ostream & o, Form const & i){
	std::cout << i.getName() << " where signed is:" << i.getSigned() << " and the required grade to sign is :" << i.getReqGradeSign() << " and the required grade to execute is :" << i.getReqGradeExec();
	return o;
}

void		Form::beSigned(Bureaucrat const & b){
	if (b.getGrade() > this->_reqGradeSign){
		throw(Bureaucrat::GradeTooLowException());
	} else {
		this->_signed = true;
	}
}

const char*  Form::GradeTooLowException::what() const  throw(){
	return "Forms grade is too low";
}

Form::GradeTooLowException::GradeTooLowException(){
	return;
}

Form::GradeTooLowException::~GradeTooLowException() throw(){
	return;
}

Form::GradeTooLowException const &	Form::GradeTooLowException::operator=( GradeTooLowException const & src){
	return src;
}


const char*  Form::GradeTooHighException::what() const  throw(){
	return "Forms grade is too low";
}

Form::GradeTooHighException::GradeTooHighException(){
	return;
}

Form::GradeTooHighException::~GradeTooHighException() throw(){
	return;
}

Form::GradeTooHighException const &	Form::GradeTooHighException::operator=( GradeTooHighException const & src){
	return src;
}


