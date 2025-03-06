/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thryndir <thryndir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 15:41:18 by thryndir          #+#    #+#             */
/*   Updated: 2025/03/06 19:40:31 by thryndir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

void	PhoneBook::SetContactNbr(const int Nbr)
{
	mContactNbr = Nbr;
}

void	PhoneBook::Search(void)
{
	int	Index = 0;
	std::string	Input;

	while (Index <= 7)
	{
		mContact[Index].PrintData(COLS);
		std::cout << '\n';
		Index++;
	}
	std::cout << "Please enter the index of the contact you want to display\n";
	std::getline(std::cin >> std::ws, Input);
	try
	{
		Index = StrToInt(Input);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	mContact[Index].PrintData(ROWS);
}

void    PhoneBook::Add(void)
{
	std::string	FirstName;
	std::string	LastName;
	std::string	NickName;
	std::string	DarkestSecret;
	std::string	PhoneNumber;

	std::cout << "Please type a FirstName\n";
	VerifInput(FirstName);
	mContact[mContactNbr % 8].SetFirstName(FirstName);

	std::cout << "Please type a LastName\n";
	VerifInput(LastName);
	mContact[mContactNbr % 8].SetLastName(LastName);

	std::cout << "Please type a NickName\n";
	VerifInput(NickName);
	mContact[mContactNbr % 8].SetNickName(NickName);

	std::cout << "Please type a DarkestSecret\n";
	VerifInput(DarkestSecret);
	mContact[mContactNbr % 8].SetDarkestSecret(DarkestSecret);

	std::cout << "Please type a PhoneNumber\n";
	VerifInput(PhoneNumber);
	mContact[mContactNbr % 8].SetIndex(mContactNbr % 8);
	
	std::cout << "Contact :" << mContactNbr % 8 << " has been created\n";
	mContactNbr++;
}
