/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharifi <msharifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 16:38:00 by msharifi          #+#    #+#             */
/*   Updated: 2023/05/22 18:28:32 by msharifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include "Array.tpp"
#include <cmath>

#define MAX_VAL 10
int main(int, char**)
{
	Array<int> numbers(MAX_VAL);
	int* mirror = new int[MAX_VAL];
	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++)
	{
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		std::cout << numbers[i] << " ";
		if (mirror[i] != numbers[i])
		{
			std::cerr << "didn't save the same value!!" << std::endl;
			return 1;
		}
	}
	std::cout << std::endl;
	delete [] mirror;

	// assignment and copy constructor
	{
		Array<int> tmp = numbers;
		for (int i = 0; i < MAX_VAL; i++)
			std::cout << tmp[i] << " ";
		std::cout << std::endl;
		Array<int> test(tmp);
		for (int i = 0; i < MAX_VAL; i++)
			std::cout << test[i] << " ";
		std::cout << std::endl;
	}

	// Error []
	try
	{
		numbers[-2] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		numbers[MAX_VAL] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return 0;
}