/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c	                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/02 11:23:57 by phperrot          #+#    #+#             */
/*   Updated: 2020/02/02 11:23:57 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}
int check_char(char *str, char c)
{
	int i;
	int	output;

	i = 0;
	output = 0;
	while (str[i])
	{
		if (str[i] == c)
			output = 1;
		i++;
	}
	return (output);
}
int ft_union(char *s1, char *s2)
{
	int i;
	int j;
	int k;
	int check;

	i  = 0;
	while (s1[i])
	{	
		k = 0;
		check = 0;
		while (k < i)
		{
			if (s1[k] == s1[i])
				check = 1;
			k++;
		}
		if (!check)
			ft_putchar(s1[i]);
		i++;
	}
	i = 0;
	while (s2[i])
	{
		k = 0;
		check = 0;
		while (k < i)
		{
			if (s2[k] == s2[i])
				check = 1;
			k++;
		}
		if (check_char(s1, s2[i]))
			check = 1;
		if (!check)
			ft_putchar(s2[i]);
		i++;
	}
	return (0);
}

int main(int ac, char **av)
{
	if (ac == 3)
		ft_union(av[1], av[2]);
	ft_putchar('\n');
	return (0);
}

