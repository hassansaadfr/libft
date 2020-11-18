/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsaadaou <hsaadaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 15:25:38 by hsaadaou          #+#    #+#             */
/*   Updated: 2020/11/18 13:32:08 by hsaadaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t			ft_strlen(const char *str);

char			*ft_strrchr(const char *string, int c)
{
	size_t		len;
	char		*str;

	str = (char*)string;
	len = ft_strlen(str);
	if (c == '\0')
		return (str);
	while (len--)
	{
		if (str[len] == c)
			return (&(*(str + len)));
	}
	return (0);
}
