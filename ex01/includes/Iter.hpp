/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharifi <msharifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 16:38:42 by msharifi          #+#    #+#             */
/*   Updated: 2023/05/22 16:56:40 by msharifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T>

void	iter(T *tab, int size, void (*f)(T&))
{	
	for (int i = 0; i < size; i++)
		f(tab[i]);
}

template <typename T>

void	printElem(T &elem)
{
	std::cout << elem << " ";
}

#endif
