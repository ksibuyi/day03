/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksibuyi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 14:37:11 by ksibuyi           #+#    #+#             */
/*   Updated: 2020/06/22 15:00:26 by ksibuyi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void ft_sort_integer_table( int *list, int size_of_list )
{
	int counter;
	int temp;

	counter = 0;
	while(counter < size_of_list )
	{
		if (list[counter] > list[counter + 1])
		{
			temp = list[counter + 1];
			list[counter + 1] = list[counter];
			list[counter] = temp;
			counter = 0;
		}
		else
			counter++;
     }
}
