/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c	                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/02 11:07:48 by phperrot          #+#    #+#             */
/*   Updated: 2020/02/02 11:07:48 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int ft_inter(char *s1, char *s2)
{
	int i;
	int j;
	int k;
	int check;
	i = 0;
	if (!s1 || !s2)
	{
		ft_putchar('\n');
		return 0;
	}
	while (s1[i])
	{
		j = 0;
		check = 0;
		while (s2[j])
		{
			if (s1[i] == s2[j])
			{
				k = 0;
				while (k < i)
				{
					if (s1[k] == s1[i])
						check = 1;
					k++;
				}
				if (!check)
					ft_putchar(s1[i]);
				break;
			}
			j++;
		}
		i++;
	}
	ft_putchar('\n');
	return (0);	
}
int	main(int ac, char **av)
{
	if (ac == 3)
		ft_inter(av[1], av[2]);
	ft_putchar('\n');
	return (0);
}
