/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 12:14:46 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/12/12 23:11:06 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"iter.hpp"

int main()
{
    int tab[5] = {1,2,3,4,5};
    iter(tab,5,func<int>);
}