/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbeets <wbeets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/12 10:19:54 by wbeets            #+#    #+#             */
/*   Updated: 2015/01/12 10:19:54 by wbeets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(){
	RobotomyRequestForm	r("foo");
	PresidentialPardonForm p;
	ShrubberyCreationForm s;
	Bureaucrat	b;
	b.setGrade(60);
	b.executeForm(r);
	b.executeForm(p);
	b.executeForm(s);
	b.signForm(p);
	b.signForm(r);
	b.signForm(s);
	p.execute(b);
	r.execute(b);
	r.execute(b);
	r.execute(b);
	r.execute(b);
	s.execute(b);
	b.setGrade(1);
	b.signForm(p);
	b.signForm(r);
	b.signForm(s);
	p.execute(b);
	r.execute(b);
	r.execute(b);
	r.execute(b);
	r.execute(b);
	s.execute(b);

	b.executeForm(r);
	b.executeForm(p);
	b.executeForm(s);
	return 0;
}
