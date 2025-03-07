/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thryndir <thryndir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 15:41:21 by thryndir          #+#    #+#             */
/*   Updated: 2025/03/07 19:03:53 by thryndir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

enum ColOrRows
{
	COLS,
	ROWS
};

class PhoneBook
{
	Contact 	mContact[8];
	int			mContactNbr;
public:
	PhoneBook()
		: mContactNbr (0)
	{
		for (int i (0); i <= 7; i++)
			mContact[i] = Contact(i);
	}
	int		Add(void);
	int		Search(void);
	void	SetContactNbr(const int Nbr);
};

void	FormatString(const std::string& Src);
int		VerifEmpty(std::string& ToVerif);
int		VerifNumber(bool CheckRange);
int		StrToInt(const std::string& Str);
int 	CheckRange(int CheckIndex);

#endif