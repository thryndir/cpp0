/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thryndir <thryndir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 15:41:26 by thryndir          #+#    #+#             */
/*   Updated: 2025/03/01 17:27:29 by thryndir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>

class Contact
{
	std::string	mFirstName;
	std::string	mLastName;
	std::string	mNickName;
	std::string	mDarkestSecret;
	std::string	mPhoneNumber;
	int			mIndex;
public:
	void		SetFirstName(const std::string& FirstName);
	std::string	GetFirstName(void) const;
	void		SetLastName(const std::string& LastName);
	std::string	GetLastName(void) const;
	void		SetNickName(const std::string& NickName);
	std::string	GetNickName(void) const;
	void		SetDarkestSecret(const std::string& DarkestSecret);
	std::string GetDarkestSecret(void) const;
	void 		SetPhoneNumber(const std::string& PhoneNumber);
	std::string	GetPhoneNumber(void) const;
	void		SetIndex(const int Index);
	int			GetIndex(void) const;
} t_Contact;

#endif