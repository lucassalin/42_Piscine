/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalin <lsalin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 12:00:45 by lsalin            #+#    #+#             */
/*   Updated: 2022/07/03 21:35:24 by lsalin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	calcul_length(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int				i;
	unsigned int	j;
	unsigned int	len_dest;
	unsigned int	len_src;

	len_dest = calcul_length(dest);
	len_src = calcul_length(src);
	i = 0;
	j = 0;
	while (dest[i])
		i++;
	if (size <= len_dest || size == 0)
		return (len_src + size);
	if (size > (len_dest + len_src))
		size = (len_dest + len_src + 1);
	while (j < (size - len_dest - 1))
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (len_dest + len_src);
}