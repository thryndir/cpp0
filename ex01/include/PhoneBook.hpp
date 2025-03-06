/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thryndir <thryndir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 15:41:21 by thryndir          #+#    #+#             */
/*   Updated: 2025/03/06 16:28:43 by thryndir         ###   ########.fr       */
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
	void	Add(void);
	void	Search(void);
	void	SetContactNbr(const int Nbr);
};

void	FormatString(const std::string& Src);
void	VerifInput(std::string& ToVerif);
int		StrToInt(const std::string& Str);

#endif