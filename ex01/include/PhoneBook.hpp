/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgalloux <lgalloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 15:41:21 by thryndir          #+#    #+#             */
/*   Updated: 2025/03/04 17:45:47 by lgalloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

enum ColOrRows
{
	COL,
	ROWS
};

class PhoneBook
{
	Contact 	mContact[8];
	int			mContactNbr;
public:
	void	Add(void);
	void	Search(const int Index);
	void	SetContactNbr(const int Nbr);
} t_PhoneBook;

void	PrintSpace(const std::string Field);

#endif