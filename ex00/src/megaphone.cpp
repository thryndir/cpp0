/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgalloux <lgalloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 17:15:13 by lgalloux          #+#    #+#             */
/*   Updated: 2025/02/04 17:45:33 by lgalloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <iostream>

int main(int argc, char **argv)
{
	int	toPrint(0);

	if (argc <= 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return (0);
	}
	for (int i(1); argv[i]; i++)
	{
		for (int j(0); argv[i][j]; j++)
		{
			toPrint = toupper((int)argv[i][j]);
			std::cout << (char)toPrint;
		}
	}
	return (0);
}
