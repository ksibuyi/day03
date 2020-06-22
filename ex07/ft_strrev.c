/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksibuyi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 13:01:03 by ksibuyi           #+#    #+#             */
/*   Updated: 2020/06/22 13:20:32 by ksibuyi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strrev( char *str)
{
	int counter;
	int size_of_str;
	char temp;

	counter = 0;
	size_of_str = 0;
	while(str[size_of_str])
	{
		size_of_str++;
	}

	while( counter < size_of_str -1 )
	{
		temp = str[size_of_str];
		str[size_of_str] = str[counter];
		str[counter] = temp;
		counter++;
		size_of_str--;
	}
	return ( str );
}
