/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalin <lsalin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 11:00:46 by lsalin            #+#    #+#             */
/*   Updated: 2022/07/03 22:14:13 by lsalin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*ret;
	int	i;

	if (min >= max)
		return (NULL);
	ret = malloc((max - min) * sizeof(int));
	if (!ret)
		return (NULL);
	i = 0;
	while (i < max - min)
	{
		ret[i] = min + i;
		i++;
	}
	return (ret);
}
