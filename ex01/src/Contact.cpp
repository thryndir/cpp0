/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgalloux <lgalloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 15:55:35 by thryndir          #+#    #+#             */
/*   Updated: 2025/03/04 17:49:58 by lgalloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	Contact::SetFirstName(const std::string& FirstName)
{
	mFirstName = FirstName;
}

std::string	Contact::GetFirstName(void) const
{
	return (mFirstName);
}

void	Contact::SetLastName(const std::string& LastName)
{
	mLastName = LastName;
}

std::string	Contact::GetLastName(void) const
{
	return (mLastName);
}

void	Contact::SetNickName(const std::string& NickName)
{
	mNickName = NickName;
}

std::string	Contact::GetNickName(void) const
{
	return (mNickName);
}

void	Contact::SetDarkestSecret(const std::string& DarkestSecret)
{
	mDarkestSecret = DarkestSecret;
}

std::string Contact::GetDarkestSecret(void) const
{
	return (mDarkestSecret);
}

void	Contact::SetPhoneNumber(const std::string& PhoneNumber)
{
	mPhoneNumber = PhoneNumber;
}

std::string Contact::GetPhoneNumber(void) const
{
	return (mPhoneNumber);
}

void	Contact::SetIndex(const int Index)
{
	mIndex = Index;
}

int		Contact::GetIndex(void) const
{
	return (mIndex);
}

void	Contact::PrintData(const int ColsOrRows) const
{
	if (ColsOrRows == ROWS)
	{
		std::cout << mFirstName << '\n';
		std::cout << mLastName << '\n';
		std::cout << mNickName << '\n';
		std::cout << mDarkestSecret << '\n';
		std::cout << mPhoneNumber << '\n';
		std::cout << mIndex << '\n';
	}
	else if (ColsOrRows == COL)
	{
		PrintSpace(mFirstName)
	}
}
