/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 16:10:08 by soubella          #+#    #+#             */
/*   Updated: 2022/12/07 20:21:09 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "MutantStack.hpp"

int main(void) {
    
    MutantStack<int> mstack;

    mstack.push(5);
    mstack.push(17);
    
    std::cout << "Size: " << mstack.top() << std::endl;

    mstack.pop();
    
    std::cout << "Size: " << mstack.size() << std::endl;
    
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();

    ++it;
    --it;
    
    while (it != ite)
    {
        std::cout << "Element: " << *it << std::endl;
        ++it;
    }
    
    std::stack<int> s(mstack);
    
    return 0;
}
