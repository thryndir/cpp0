/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgalloux <lgalloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 13:17:26 by lgalloux          #+#    #+#             */
/*   Updated: 2025/03/04 17:45:33 by lgalloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>

void	PrintSpace(const std::string Field)
{
	int len = 0;

	len = Field.length();
	if (len < 10)
	{
		while (len < 10)
		{
			std::cout << ' ';
			len++;
		}
	}
}