/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbeets <wbeets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/12 13:17:07 by wbeets            #+#    #+#             */
/*   Updated: 2015/01/12 13:17:09 by wbeets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FORM_HPP
# define FORM_HPP
#include <iostream>
#include "Bureaucrat.hpp"
class Bureaucrat;
class Form
{
	public:
		Form(std::string name = "Copy of Copy of Untiteld2.docx", int reqGradeSign = 1, int reqGradeExec = 1);
		virtual ~Form();
		Form(Form const & src);
		Form const &		operator=(Form const & i);
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

		std::string		getName( void ) const;
		bool			getSigned( void ) const;
		int				getReqGradeSign( void ) const;
		int				getReqGradeExec( void ) const;
		void			beSigned(Bureaucrat const & b);

	private:
		std::string const	_name;
		bool				_signed;
		int const			_reqGradeSign;
		int	const			_reqGradeExec;


		/* data */
};

std::ostream &		operator<<(std::ostream & o, Form const & i);
#endif /*FORM_HPP*/
