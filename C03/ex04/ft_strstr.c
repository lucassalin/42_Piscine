/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalin <lsalin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 16:39:57 by lsalin            #+#    #+#             */
/*   Updated: 2022/07/03 21:33:55 by lsalin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && i < n)
	{
		if (!(s1[i]))
			return (0);
		i++;
	}
	if (i == n)
		return (0);
	else
		return (s1[i] - s2[i]);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	i = 0;
	if (!to_find[i])
		return (str);
	else
	{
		while (str[i])
		{
			if (str[i] == *to_find)
			{
				if (ft_strncmp(&str[i], to_find, ft_strlen(to_find)) == 0)
					return (&str[i]);
			}
			i++;
		}
	}
	return (0);
}