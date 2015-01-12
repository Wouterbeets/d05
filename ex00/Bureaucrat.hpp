/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbeets <wbeets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/12 10:19:30 by wbeets            #+#    #+#             */
/*   Updated: 2015/01/12 10:19:32 by wbeets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
	public:
		Bureaucrat( std::string name = "louis", int grade = 150 );
		Bureaucrat( Bureaucrat const  & );
		virtual ~Bureaucrat();
		Bureaucrat const &		operator=( Bureaucrat const & src);
		class GradeTooLowException : public std::exception {
			public:
				GradeTooLowException( void );
				~GradeTooLowException( void ) throw();
				const char* what() const throw();
				GradeTooLowException const &	operator=( GradeTooLowException const & src);
		};
		class GradeTooHighException : public std::exception {
			public:
				GradeTooHighException( void );
				~GradeTooHighException( void ) throw();
				const char* what() const throw();
				GradeTooHighException const &	operator=( GradeTooHighException const & src);
		};

		std::string const	getName( void ) const;
		int					getGrade( void ) const;
		void				setGrade( int i);
		void				decGrade( void );
		void				incGrade( void );
	private:
		std::string const	_name;
		int					_grade;


		/* data */
};

std::ostream  &			operator<<( std::ostream & o, Bureaucrat const & i);
#endif /*BUREAUCRAT_HPP*/

