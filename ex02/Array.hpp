/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 18:08:50 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/12/09 15:11:28 by hlakhal-         ###   ########.fr       */
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
            for(unsigned int i = 0; i < other.numSize; i++)
            {
                this->elements[i] = other.elements[i];
            }
            this->numSize = other.numSize;
        }
        T& operator[](unsigned int n)
        {
            if (n >= numSize)
                throw std::runtime_error("out of range !!");
            return elements[n];
        }

        T* getElement() const
        {
            return this->elements; 
        }
        unsigned int size() const
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
                this->elements = new T[other.size()];
                for (unsigned int i = 0; i < other.size(); i++)
                {
                   this->elements[i] = other.getElement()[i];
                }
                this->numSize = other.size();
                 
            }
            return *this;
        }
};



