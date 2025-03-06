/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thryndir <thryndir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 13:17:26 by lgalloux          #+#    #+#             */
/*   Updated: 2025/03/06 19:46:30 by thryndir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	StrToInt(const std::string& Str)
{
	std::stringstream	Sstring(Str);
	int					result;
	char				temp;

	if (!(Sstring >> result))
		throw std::runtime_error("Please enter a valid int");
	while (Sstring.peek() != EOF && std::isspace(Sstring.peek()))
		Sstring.get(temp);
	if (Sstring.peek() != EOF)
		throw std::runtime_error("Please enter a valid int");
	return (result);
}

void	FormatString(const std::string& Src)
{
	std::string ToPrint;

	if (Src.length() <= 10)
		std::cout << std::setw(10) << std::right << Src << '|';
	else
	{
		ToPrint = Src.substr(0, 9);
		ToPrint.push_back('.');
		std::cout << ToPrint << '|';
	}
}

void	VerifInput(std::string& ToVerif)
{
	std::getline(std::cin >> std::ws, ToVerif);
	while (ToVerif.empty())
	{
		std::cout << "Input cannot be empty. Please enter a valid input: ";
		std::getline(std::cin >> std::ws, ToVerif);
	}
}

int	main(void)
{
	std::string	Input;
	PhoneBook PhoneBook;
	
	PhoneBook.SetContactNbr(0);
	while (Input != "EXIT")
	{
		std::getline(std::cin >> std::ws, Input);
		if (Input == "ADD")
			PhoneBook.Add();
		else if (Input == "SEARCH")
			PhoneBook.Search();
	}
	return (0);
}
