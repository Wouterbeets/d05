/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbeets <wbeets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/12 17:35:24 by wbeets            #+#    #+#             */
/*   Updated: 2015/01/12 17:35:29 by wbeets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALpARDONfORM_HPP
# define PRESIDENTIALpARDONfORM_HPP
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
	public:
		PresidentialPardonForm(std::string target = "");
		virtual ~PresidentialPardonForm();
		PresidentialPardonForm(PresidentialPardonForm const & src);
		PresidentialPardonForm const &		operator=(PresidentialPardonForm const & i);
		void		action() const;

	private:
		std::string const	 _target;
	};

#endif /*PRESIDENTIALpARDONfORM_HPP*/
