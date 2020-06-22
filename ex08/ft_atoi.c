/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksibuyi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 14:06:01 by ksibuyi           #+#    #+#             */
/*   Updated: 2020/06/22 14:34:03 by ksibuyi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 int ft_atoi( char *str )
{
	int counter;
	int is_negative;
	int return_number;

	counter = 0;
	is_negative = 0;
	return_number = 0;

	while(( str[counter] == ' ') || (str[counter] == '\t') || (str[counter] == '\n') || (str[counter] == '\v') || (str[counter] == '\f') || (str[counter] == '\r'))
	{
	   counter++;
	}

    if(str[counter] == 45)
	{
		is_negative = 1;
	}
	if((str[counter] == 45) || (str[counter] == 43))
	{
	    counter++;
	}

	while(str[counter] >= 48 && str[counter] <= 57)
	{
		return_number *= 10;
		return_number += ((int)str[counter] - 48);
		counter++;
	}

	if(is_negative == 1)
		return (-return_number);
	else
		return (return_number);

}
