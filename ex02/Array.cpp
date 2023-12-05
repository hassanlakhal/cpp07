/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 18:19:41 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/12/05 20:31:50 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Array.hpp"
int main() {
    try {
        Array<int> arr1;
        std::cout << "arr1 size: " << arr1.size() << std::endl;

        Array<double> arr2(5);
        std::cout << "arr2 size: " << arr2.size() << std::endl;

        Array<int> arr3 = arr1;
        std::cout << "arr3 size: " << arr3.size() << std::endl;

        arr3 = arr2;
        std::cout << "arr3 size: " << arr3.size() << std::endl;
        
        arr2[2] = 42.0;
        std::cout << "arr2[2]: " << arr2[2] << std::endl;
        
    }
     catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}