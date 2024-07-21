/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iizquier <iizquier@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 17:10:00 by iizquier          #+#    #+#             */
/*   Updated: 2024/05/04 17:32:41 by iizquier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	s_len;

	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
	{
		substr = (char *)malloc(1);
		if (substr == NULL)
			return (NULL);
		substr[0] = 0;
		return (substr);
	}
	if (len > s_len - start)
	{
		len = s_len - start;
	}
	substr = (char *)malloc(len + 1);
	if (substr == NULL)
	{
		return (NULL);
	}
	ft_strlcpy(substr, s + start, len + 1);
	return (substr);
}
