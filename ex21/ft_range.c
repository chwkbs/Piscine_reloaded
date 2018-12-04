/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchaudry <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 17:31:15 by bchaudry          #+#    #+#             */
/*   Updated: 2018/12/04 17:31:17 by bchaudry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int	*output;
	int i;

	if (max - min <= 0 || (output = malloc(sizeof(int) * (max - min))) == NULL)
		return (NULL);
	i = 0;
	while (i < max - min)
	{
		output[i] = min + i;
		i++;
	}
	return (output);
}
