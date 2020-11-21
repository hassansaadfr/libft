/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsaadaou <hsaadaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 17:16:35 by hsaadaou          #+#    #+#             */
/*   Updated: 2020/11/21 17:40:07 by hsaadaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char			*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*out;
	unsigned int	i;
	int				size;

	i = 0;
	size = ft_strlen((char*)s);
	if (s == NULL || f == NULL)
		return (NULL);
	if (!(out = (char*)malloc(sizeof(char) * size + 1)))
		return (NULL);
	ft_strcpy(out, (char*)s);
	while (out[i])
	{
		out[i] = (*f)(i, out[i]);
		i++;
	}
	return (out);
}
