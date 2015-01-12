/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbeets <wbeets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/12 17:35:24 by wbeets            #+#    #+#             */
/*   Updated: 2015/01/12 17:35:29 by wbeets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "RobotomyRequestForm.hpp"
#include "Form.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) :Form("RobotomyRequestForm", 72, 45), _target(target) {
	return;
}

RobotomyRequestForm::~RobotomyRequestForm(){
	return;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src) :Form("RobotomyRequestForm", 72, 45){
	*this = src;
}

RobotomyRequestForm const &		RobotomyRequestForm::operator=(RobotomyRequestForm const & src){
	(void)src;
	*this = RobotomyRequestForm(src.getTarget());
	return *this;
}

std::string const	RobotomyRequestForm::getTarget() const{
	return this->_target;
}

void		RobotomyRequestForm::action() const{
	static bool succes = false;
	if (succes){
		succes = false;
		std::cout << "*BBBZZT* * BGGGRING* *GHHZZT* *BFFVVVFT* " << this->_target << " is succesfully Robotomized" << std::endl;
	} else {
		succes = true;
		std::cout << "failure" << std::endl;
	}
}
