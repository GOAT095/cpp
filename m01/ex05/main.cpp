/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anassif <anassif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 16:38:27 by anassif           #+#    #+#             */
/*   Updated: 2021/07/31 15:22:49 by anassif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main()
{
    Karen k;
    k.complain("DEBUG");
    k.complain("INFO");
    k.complain("WARNING");
    k.complain("ERROR");
    return 0;
}