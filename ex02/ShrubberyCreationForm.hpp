/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbeets <wbeets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/12 17:35:16 by wbeets            #+#    #+#             */
/*   Updated: 2015/01/12 17:35:29 by wbeets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYcREATIONfORM_HPP
# define SHRUBBERYcREATIONfORM_HPP

#include "Form.hpp"

class ShrubberyCreationForm
{
	public:
		ShrubberyCreationForm();
		virtual ~ShrubberyCreationForm();
		ShrubberyCreationForm(ShrubberyCreationForm const & src);
		ShrubberyCreationForm const &		operator=(ShrubberyCreationForm const & i);

	private:
		/* data */
	};
#endif /*SHRUBBERYcREATIONfORM_HPP*/

