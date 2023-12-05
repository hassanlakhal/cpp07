/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 19:16:34 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/12/05 10:40:18 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>

template<typename T>
void swap(T& a, T& b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}

template<typename T>
const T& min(T& a, T& b)
{
    return (a < b) ? a : b;
}

template<typename T>
const T& max(T& a, T& b)
{
    return (a > b) ? a : b;
}