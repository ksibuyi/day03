/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksibuyi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 11:23:40 by ksibuyi           #+#    #+#             */
/*   Updated: 2020/06/22 11:40:20 by ksibuyi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{
	int temp;
	
	temp = *a;
	*a = *a / (*b);
	*b = temp % (*b);
}


int main()
{
	int a = 4;
	int b = 2;

	printf("a = %d, b = %d \n", a, b);
    
    ft_ultimate_div_mod(&a,&b);

    printf("a = %d, b = %d ", a, b);
   
    return (0);
}	
