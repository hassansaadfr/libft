/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsaadaou <hsaadaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 22:05:45 by hsaadaou          #+#    #+#             */
/*   Updated: 2020/11/18 20:08:34 by hsaadaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct		s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

char				ft_toupper(char c);
char				ft_tolower(char c);
char				*strchr(const char *s, int c);
char				*ft_strrchr(const char *string, int c);
size_t				ft_strlen(const char *str);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
size_t				ft_strlcpy(char *dst, const char *src, size_t size);
size_t				ft_strlcat(char *dest, const char *src, size_t size);
char				*ft_strnstr(const char *str, const char *find, size_t nb);
int					ft_isalpha(char c);
int					ft_isdigit(char c);
int					ft_isalnum(char c);
int					ft_isascii(char c);
int					ft_isprint(char c);

#endif
