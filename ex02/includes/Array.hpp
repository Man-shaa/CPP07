/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharifi <msharifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 17:12:39 by msharifi          #+#    #+#             */
/*   Updated: 2023/05/22 18:16:34 by msharifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <typename T>

class Array
{
	private:
		T		*_elem;
		size_t	_size;

	public:

		Array(void);
		Array(unsigned int n);
		Array(Array const &copy);
		~Array(void);

		Array	&operator = (Array const &toCopy);
		T		&operator [] (size_t index) const;

		unsigned int	size() const;
};

#endif
