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

int main(){
	{
		try{
			Bureaucrat b("boo", 151);
			std::cout << b << std::endl;
		} catch (Bureaucrat::GradeTooHighException e){
			std::cout <<  e.what() << std::endl;
		}
	}
	{
		try{
			Bureaucrat b2("foo", -2);
			std::cout << b2 << std::endl;
		} catch (Bureaucrat::GradeTooLowException e){
			std::cout << e.what() << std::endl;
		}
	}
	{
		try{
			Bureaucrat b3("goo", 3);
			std::cout << b3 << std::endl;
			b3.setGrade(151);
		}catch (Bureaucrat::GradeTooHighException e){
			std::cout << e.what() << std::endl;
		}
	}
	{
		try{
			Bureaucrat b4("zoo", 1);
			std::cout << b4 << std::endl;
			b4.decGrade();
		}catch (Bureaucrat::GradeTooLowException e){
			std::cout << e.what() << std::endl;
		}
	}
	{
		try{
			Bureaucrat b5("zoo", 150);
			std::cout << b5 << std::endl;
			b5.incGrade();
		}catch (Bureaucrat::GradeTooHighException e){
			std::cout << e.what() << std::endl;
		}
	}
	return 0;

}
