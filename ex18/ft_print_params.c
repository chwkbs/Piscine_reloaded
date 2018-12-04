/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchaudry <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 17:30:03 by bchaudry          #+#    #+#             */
/*   Updated: 2018/12/04 17:30:06 by bchaudry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int i;
	int x;

	x = 1;
	while (x < argc)
	{
		i = 0;
		while (argv[x][i])
		{
			ft_putchar(argv[x][i]);
			i++;
		}
		x++;
		ft_putchar('\n');
	}
	return (0);
}
