/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thryndir <thryndir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 13:17:26 by lgalloux          #+#    #+#             */
/*   Updated: 2025/03/07 20:22:17 by thryndir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	StrToInt(const std::string& Str)
{
	std::stringstream	Sstream(Str);
	int					result;
	char				temp;

	if (!(Sstream >> result))
		throw std::runtime_error("Please enter a valid int");
	while (Sstream.peek() != EOF && std::isspace(Sstream.peek()))
		Sstream.get(temp);
	if (Sstream.peek() != EOF)
		throw std::runtime_error("Please enter a valid int");
	return (result);
}

int CheckRange(int Index)
{
	if (Index >= 0 && Index <= 7)
			return (EXIT_SUCCESS);
	else
		std::cerr << "Please enter a value between 0 and 7\n";
	return (EXIT_FAILURE);
}

int	VerifNumber(bool	CheckIndex)
{
	std::string Input;
	int			Index (0);

	do
	{
		std::getline(std::cin, Input);
		if (std::cin.eof())
			return (EOF);
		try
		{
			Index = StrToInt(Input);
			if (CheckIndex == true)
				return (CheckRange(Index));
			else
				return (EXIT_SUCCESS);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
			std::cin.clear();
			char c;
            while (std::cin.peek() != EOF && std::isspace(std::cin.peek()))
				std::cin.get(c);
		}
	} while (true);
	return (EXIT_FAILURE);
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

int	VerifEmpty(std::string& ToVerif)
{
	do
	{
		std::getline(std::cin, ToVerif);
		if (std::cin.eof())
			return (EOF);
		std::stringstream Sstream (ToVerif);
		ToVerif.clear();
		Sstream >> std::ws >> ToVerif;
		if (ToVerif.empty())
			std::cerr << "Input cannot be empty. Please enter a valid input: ";
	} while (ToVerif.empty());
	return (EXIT_SUCCESS);
}

int	main(void)
{
	std::string	Input;
	PhoneBook PhoneBook;
	
	while (Input != "EXIT")
	{
		std::getline(std::cin >> std::ws, Input);
		if (std::cin.eof())
			return (EXIT_SUCCESS);
		if (Input == "ADD")
		{
			if (PhoneBook.Add() == EOF)
				return (EXIT_SUCCESS);
		}
		else if (Input == "SEARCH")
		{
			if (PhoneBook.Search() == EOF)
				return (EXIT_SUCCESS);
		}
	}
	return (EXIT_SUCCESS);
}
