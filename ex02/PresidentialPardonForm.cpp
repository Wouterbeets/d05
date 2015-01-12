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

#include "PresidentialPardonForm.hpp"
#include "Form.hpp"

PresidentialPardonForm::PresidentialPardonForm(){
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
