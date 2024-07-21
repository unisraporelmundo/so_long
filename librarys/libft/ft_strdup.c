/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iizquier <iizquier@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 22:11:14 by iizquier          #+#    #+#             */
/*   Updated: 2024/05/03 22:20:35 by iizquier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*string;
	int		i;

	i = 0;
	string = (char *)malloc(sizeof(char) * ft_strlen(s1) +1);
	if (!string)
		return (NULL);
	while (s1[i] != 0)
	{
		string[i] = s1[i];
		i++;
	}
	string[i] = 0;
	return (string);
}
