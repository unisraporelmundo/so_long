/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iizquier <iizquier@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 12:29:00 by iizquier          #+#    #+#             */
/*   Updated: 2024/05/13 12:36:50 by iizquier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*string;

	i = 0;
	string = (char *) malloc((ft_strlen(s) + 1) * sizeof(char));
	if (string == 0)
		return (NULL);
	while (s[i] != 0)
	{
		string[i] = (*f)(i, s[i]);
		i++;
	}
	string[i] = 0;
	return (string);
}
