/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgalloux <lgalloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 15:41:18 by thryndir          #+#    #+#             */
/*   Updated: 2025/03/04 18:51:04 by lgalloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

void	PhoneBook::SetContactNbr(const int Nbr)
{
	mContactNbr = Nbr;
}

void	PhoneBook::Search(const int Index)
{
	if (Index >= 0 && Index < 8)
		mContact[Index].PrintData();
	
}

void    PhoneBook::Add(void)
{
	std::string	FirstName;
	std::string	LastName;
	std::string	NickName;
	std::string	DarkestSecret;
	std::string	PhoneNumber;

	std::getline(std::cin >> std::ws, FirstName);
	mContact->SetFirstName(FirstName);
	std::getline(std::cin >> std::ws, LastName);
	mContact->SetLastName(LastName);
	std::getline(std::cin >> std::ws, NickName);
	mContact->SetNickName(NickName);
	std::getline(std::cin >> std::ws, DarkestSecret);
	mContact->SetDarkestSecret(DarkestSecret);
	std::getline(std::cin >> std::ws, PhoneNumber);
	mContact->SetDarkestSecret(DarkestSecret);
	mContact->SetIndex(mContactNbr);
	mContactNbr++;
}
