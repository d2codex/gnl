/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diade-so <diade-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 16:31:04 by diade-so          #+#    #+#             */
/*   Updated: 2025/01/22 11:07:13 by diade-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"
#include <stdint.h>

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			i;
	unsigned char	*arr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	if (size > SIZE_MAX / nmemb)
		return (NULL);
	arr = (unsigned char *)malloc(nmemb * size);
	if (!arr)
		return (NULL);
	i = 0;
	while (i < nmemb * size)
	{
		arr[i] = 0;
		i++;
	}
	return (arr);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	size_t	len_s1;
	size_t	len_s2;
	char	*strjoin;

	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	strjoin = malloc(len_s1 + len_s2 + 1);
	if (!strjoin)
		return (NULL);
	i = 0;
	while (i < len_s1)
	{
		strjoin[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < len_s2)
		strjoin[i++] = s2[j++];
	strjoin[i] = '\0';
	return (strjoin);
}

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != (char)c)
	{
		if (s[i] == '\0')
			return (NULL);
		i++;
	}
	return ((char *)(s + i));
}
