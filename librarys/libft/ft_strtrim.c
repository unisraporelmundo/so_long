/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iizquier <iizquier@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 11:31:44 by iizquier          #+#    #+#             */
/*   Updated: 2024/05/13 11:41:04 by iizquier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*ptr;
	int		start;
	int		end;

	start = 0;
	if (s1[start] == 0)
		return (ft_strdup(""));
	end = ft_strlen(s1);
	while (ft_strchr (set, s1[start]))
		start++;
	while (ft_strchr (set, s1[end]))
		end--;
	ptr = ft_substr (s1, start, (end - start) + 1);
	return (ptr);
}
