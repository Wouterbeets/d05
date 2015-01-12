/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbeets <wbeets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/12 17:35:24 by wbeets            #+#    #+#             */
/*   Updated: 2015/01/12 17:35:29 by wbeets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYrEQUESTfORM_HPP
# define ROBOTOMYrEQUESTfORM_HPP
#include <iostream>
#include "Form.hpp"
class RobotomyRequestForm : public Form
{
	public:
		RobotomyRequestForm(std::string _target = "the dude");
		virtual ~RobotomyRequestForm();
		RobotomyRequestForm(RobotomyRequestForm const & src);
		RobotomyRequestForm const &		operator=(RobotomyRequestForm const & i);
		std::string const			getTarget( void ) const;
		void		action() const;

	private:

		std::string const	 _target;
		/* data */
	};

#endif /*ROBOTOMYrEQUESTfORM_HPP*/
