/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalin <lsalin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 09:14:48 by lsalin            #+#    #+#             */
/*   Updated: 2022/07/03 22:09:22 by lsalin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (size != 0 && i < size - 1 && src[i])
	{
		dest[i] = src[i];
		++i;
	}
	if (i < size)
		dest[i] = 0;
	while (src[i])
		++i;
	return (i);
}
