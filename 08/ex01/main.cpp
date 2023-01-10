/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 15:58:59 by soubella          #+#    #+#             */
/*   Updated: 2023/01/10 14:13:37 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

#include "Span.hpp"

int main()
{
    Span sp = Span(8);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    sp.addNumber(-19);
    sp.addNumber(22);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    
    std::vector<int64_t> v;
    v.push_back(6);
    v.push_back(3);
    v.push_back(17);
    v.push_back(9);
    v.push_back(11);
    
    Span s = Span(5);
    s.addRange(v.begin(), v.end());
    std::cout << s.shortestSpan() << std::endl;
    std::cout << s.longestSpan() << std::endl;

    return 0;
}
