/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iizquier <iizquier@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 12:27:53 by iizquier          #+#    #+#             */
/*   Updated: 2024/05/02 18:23:02 by iizquier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (src == dst)
	{
		return (dst);
	}
	if (dst < src)
	{
		while (i < len)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	if (dst > src)
	{
		while (len > 0)
		{
			((unsigned char *)dst)[len -1] = ((unsigned char *)src)[len -1];
			len--;
		}
	}
	return (dst);
}
