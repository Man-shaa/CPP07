/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Template.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharifi <msharifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 15:44:24 by msharifi          #+#    #+#             */
/*   Updated: 2023/05/22 15:54:19 by msharifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATE_HPP
# define TEMPLATE_HPP

# include <iostream>


template <typename T>

void	swap(T &X, T &Y)
{
	T	tmp = X;

	X = Y;
	Y = tmp;
}

template <typename T>

T	max(T const &X, T const &Y)
{
	if (X > Y)
		return (X);
	return (Y);
}

template <typename T>

T	min(T const &X, T const &Y)
{
	if (X < Y)
		return (X);
	return (Y);
}

#endif
