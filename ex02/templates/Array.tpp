/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharifi <msharifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 17:14:10 by msharifi          #+#    #+#             */
/*   Updated: 2023/05/22 18:17:59 by msharifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
template <typename T>

Array<T>::Array(void) : _elem(NULL), _size(0)
{
	std::cout << "Array default constructor called" << std::endl;
	return ;
}

template <typename T>
Array<T>::Array(unsigned int n) : _elem(new T[n]), _size(n)
{
	std::cout << "Array constructor called" << std::endl;
	return ;
}

template <typename T>
Array<T>::Array(Array<T> const &toCopy) : _elem(new T[toCopy._size]), _size(toCopy._size)
{
	std::cout << "Array copy constructor called" << std::endl;
	if (this != &toCopy)
	{
		for (size_t i = 0; i < toCopy._size; i++)
			_elem[i] = toCopy._elem[i];
	}
}

template <typename T>
Array<T>::~Array(void)
{
	std::cout << "Array destructor called" << std::endl;
	delete [](_elem);
	return ;
}

template <typename T>
Array<T>	&Array<T>::operator = (Array<T> const &toCopy)
{
	if (*this != toCopy)
	{
		delete [](_elem);

		_elem = new(T[toCopy._size]);
		_size = toCopy._size;
		for (int i = 0; i < _size; i++)
			_elem[i] = toCopy[i];
	}
	return (*this);
}

template <typename T>
T	&Array<T>::operator [] (size_t index) const
{
	if (index < 0 || index >= _size)
	{
		throw (std::out_of_range("Invalid index"));
	}
	return (_elem[index]);
}

template <typename T>
unsigned int	Array<T>::size() const
{
	return (_size);
}
