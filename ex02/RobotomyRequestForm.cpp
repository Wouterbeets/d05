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

#include "RobotomyRequestForm.hpp"
#include "Form.hpp"

RobotomyRequestForm::RobotomyRequestForm(){
	return;
}

RobotomyRequestForm::~RobotomyRequestForm(){
	return;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src){
	*this = src;
}

RobotomyRequestForm const &		RobotomyRequestForm::operator=(RobotomyRequestForm const & src){
	/*create copy function here*/
	(void)src;
	return *this;
}
