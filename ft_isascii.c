/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsaadaou <hsaadaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 20:07:55 by hsaadaou          #+#    #+#             */
/*   Updated: 2020/11/18 20:08:01 by hsaadaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isascii(char c)
{
	return (c >= 0 && c <= 127);
}