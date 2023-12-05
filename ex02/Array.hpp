/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 18:08:50 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/12/05 20:47:18 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
template<typename T>
class Array
{
    private:
        T* elements;
        unsigned int numSize;
    public:
        Array() : elements(NULL), numSize(0){}
        Array(unsigned int n) : elements(new T[n]), numSize(n){}
        Array(const Array& other) : elements(new T[other.numSize]) , numSize(other.numSize)
        {  
            *(this->elements) = *(other.elements);
        }
        T& operator[](unsigned int n)
        {
            if (n >= numSize)
                throw std::runtime_error("out of range !!");
            return elements[n];
        }
        unsigned int size()
        {
            return numSize;
        }
        ~Array()
        {
            delete [] elements;
        }
        template<typename U>
        Array& operator =(const Array<U>& other)
        {
            if(this != static_cast<const void*>(&other))
            {
                delete [] elements;
                this->elements = new T[other.numSize];
                 *(this->elements) = static_cast<T>(*(other.elements));
            }
            return *this;
        }
};



