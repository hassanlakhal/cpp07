/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 12:14:42 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/12/12 19:08:46 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template<typename E>
void func(const E& e)
{
    std::cout << "element of the template: " << e << std::endl;
    return ;
}

template<typename T, typename F>
void iter(T tab, int len , void(*func)(F))
{
    if (!tab)
        return ;
    for(int i = 0; i < len ; i++)
    {
        func(tab[i]);
    }
}