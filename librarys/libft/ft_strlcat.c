/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iizquier <iizquier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 11:55:25 by iizquier          #+#    #+#             */
/*   Updated: 2024/04/19 13:04:03 by iizquier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_d;
	size_t	len_s;
	size_t	i;

	len_d = ft_strlen(dst);
	len_s = ft_strlen(src);
	if (len_d >= size)
	{
		return (len_s + size);
	}
	else if (len_d + 1 < size)
	{
		i = 0;
		while (src[i] && (len_d + i + 1 < size))
		{
			dst [len_d + i] = src[i];
			i++;
		}
		dst [len_d + i] = 0;
	}
	return (len_d + len_s);
}
