/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalin <lsalin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 15:02:30 by lsalin            #+#    #+#             */
/*   Updated: 2022/07/03 22:13:59 by lsalin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	just_print(int argc, char *argv[])
{
	int y;
	int x;

	y = 1;
	while (y < argc)
	{
		x = 0;
		while (argv[y][x])
		{
			ft_putchar(argv[y][x]);
			x++;
		}
		y++;
		ft_putchar('\n');
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] && s2[i]) && (s1[i] == s2[i]))
	{
		i++;
	}
	if (s1[i] == s2[i])
		return (0);
	return (s1[i] - s2[i]);
}

int	main(int argc, char **argv)
{
	int		y;
	int		x;
	char	*temp;

	y = 1;
	x = 2;
	while (y < argc - 1)
	{
		while (x < argc)
		{
			if (ft_strcmp(argv[y], argv[x]) > 0)
			{
				temp = argv[x];
				argv[x] = argv[y];
				argv[y] = temp;
				x = y + 1;
			}
			x++;
		}
		y++;
		x = y;
	}
	just_print(argc, argv);
}
