/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 10:20:03 by sharrach          #+#    #+#             */
/*   Updated: 2021/11/28 10:20:05 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"get_next_line.h"

size_t	ft_strlen(const	char *str)
{
	size_t	i;
	char	*s;

	s = (char *)str;
	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

void	ft_strcpy(char *dst, const char *src)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
}

char	*ft_strchr(const char *s, int c)
{
	int	i;

	if (!s)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		if ((char)c == s[i])
			return ((char *)&s[i]);
		i++;
	}
	if ((char)c == '\0')
		return ((char *)&s[i]);
	return (0);
}

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)s;
	while (n > i)
	{
		str[i] = 0;
		i++;
	}
}

char	*ft_strnljoin(char *s1, char *s2)
{
	char	*s;
	int		s_len;
	int		s2_len;
	int		i;

	s2_len = 0;
	while (s2[s2_len] && s2[s2_len] != '\n')
		s2_len++;
	if (s2[s2_len] == '\n')
		s2_len++;
	s = ((char *)malloc(ft_strlen(s1) + s2_len + 1));
	if (s == 0)
		return (NULL);
	ft_strcpy(s, (char *) s1);
	s_len = ft_strlen(s);
	i = 0;
	while (i < s2_len)
	{
		s[s_len + i] = s2[i];
		i++;
	}
	s[s_len + i] = '\0';
	free (s1);
	return (s);
}
