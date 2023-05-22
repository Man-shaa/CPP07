/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharifi <msharifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 16:38:00 by msharifi          #+#    #+#             */
/*   Updated: 2023/05/22 17:10:43 by msharifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

int	main(void)
{
	{
		int	intArray[] = {1, 2, 4, 3, 5};
		int	len = (sizeof(intArray) / sizeof(intArray[0]));

		iter(intArray, len, printElem<int>);
		std::cout << std::endl;
	}

	{
		char charArray[] = {'a', 'b', 'c', 'd', 'e'};
		size_t charArraySize = sizeof(charArray) / sizeof(charArray[0]);

		iter(charArray, charArraySize, printElem<char>);
		std::cout << std::endl;
	}

	{
		std::string charArray[] = {"Manuel", "est", "plus", "fort", "que", "Shanley"};
		size_t charArraySize = sizeof(charArray) / sizeof(charArray[0]);

		iter(charArray, charArraySize, printElem<std::string>);
		std::cout << std::endl;
	}
	
	return (0);
}
