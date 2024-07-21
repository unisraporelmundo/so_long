/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iizquier <iizquier@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 11:39:36 by iizquier          #+#    #+#             */
/*   Updated: 2024/05/02 11:49:34 by iizquier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;
	char	target;
	size_t	i;

	str = ((char *)s);
	target = ((char)c);
	i = 0;
	while (i < n)
	{
		if (str[i] != target)
		{
			i++;
		}
		else
		{
			return ((char *)&s[i]);
		}
	}
	return (0);
}
