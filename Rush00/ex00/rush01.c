/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalin <lsalin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 11:31:28 by lsalin            #+#    #+#             */
/*   Updated: 2022/07/04 11:32:47 by lsalin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print(int x, char l1, char lm, char lf)
{
	int	le_c;

	le_c = 1;
	while (le_c <= x)
	{
		if (le_c == 1)
			ft_putchar(l1);
		else if (le_c == x)
			ft_putchar(lf);
		else
			ft_putchar(lm);
		le_c++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	li_c;

	li_c = 1;
	if (x >= 1 && y >= 1 )
	{
		while (li_c <= y)
		{
			if (li_c == 1)
				ft_print(x, '/', '*', '\\');
			else if (li_c == y)
				ft_print(x, '\\', '*', '/');
			else
				ft_print(x, '*', ' ', '*');
			li_c++;
		}
	}
}
