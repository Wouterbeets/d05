/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbeets <wbeets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/12 17:35:25 by wbeets            #+#    #+#             */
/*   Updated: 2015/01/12 17:35:27 by wbeets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PresidentialPardonForm.hpp"
#include "Form.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) :Form("PresidentialPardonForm", 25, 5 ), _target(target){
	return;
}

PresidentialPardonForm::~PresidentialPardonForm(){
	return;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src){
	*this = src;
}

PresidentialPardonForm const &		PresidentialPardonForm::operator=(PresidentialPardonForm const & src){
	/*create copy function here*/
	(void)src;
	return *this;
}

void		PresidentialPardonForm::action() const{
	std::cout << this->_target  << " is pardonned by Zafod Beeblebrox" << std::endl;
}
