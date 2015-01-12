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

int main(){
	Form		f;
	Form		f2("sick note", 150, 150);
	Form		f3("winning lotto ticket", 40, 40);
	Form		f4("launch nuclear warhead paper", 1, 1);
	Bureaucrat	b;
	b.signForm(f);
	b.signForm(f2);
	b.signForm(f3);
	b.signForm(f4);
	std::cout << "setting"<< b << "to 39" << std::endl;
	b.setGrade(39);
	b.signForm(f);
	b.signForm(f2);
	b.signForm(f3);
	b.signForm(f4);
	b.setGrade(1);
	b.signForm(f);
	b.signForm(f2);
	b.signForm(f3);
	b.signForm(f4);
	return 0;
}
