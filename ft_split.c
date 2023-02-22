/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hayashikdi <hayashikdi@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 15:15:01 by hayashikdi        #+#    #+#             */
/*   Updated: 2023/02/10 14:14:31 by hayashikdi       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_count_malloc(char const *s, char c)
{
	unsigned int	count;
	unsigned int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

unsigned int	ft_count_len(char const *str, unsigned char c)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = 0;
	while (str[i] && (str[i] != c))
	{
		i++;
		len++;
	}
	return (len);
}

void	*ft_m_free(char **word_arr, unsigned int len)
{
	unsigned int	i;

	i = 0;
	while (i < len)
		free(word_arr[i++]);
	free(word_arr);
	return (NULL);
}

char	**ft_split_str(char const *str, unsigned int count, unsigned char c,
		char **word_arr)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	str_len;

	i = 0;
	while (i < count)
	{
		while (*str == c)
			str++;
		str_len = ft_count_len(str, c);
		word_arr[i] = (char *)malloc(sizeof(char) * (str_len + 1));
		if (!word_arr[i])
			return (ft_m_free(word_arr, i));
		j = 0;
		while (j < str_len)
			word_arr[i][j++] = *str++;
		word_arr[i][j] = '\0';
		i++;
	}
	word_arr[i] = NULL;
	return (word_arr);
}

char	**ft_split(char const *s, char c)
{
	unsigned char	uc_c;
	unsigned int	count;
	char			**word_arr;

	uc_c = (unsigned char)c;
	if (!s)
		return (NULL);
	count = ft_count_malloc(s, uc_c);
	word_arr = malloc(sizeof(char *) * (count + 1));
	if (!word_arr)
		return (NULL);
	word_arr = ft_split_str(s, count, uc_c, word_arr);
	return (word_arr);
}

// int main()
// {
//     char *s = "acaacbbb";
//     char c = 'c';
//     char ** res = ft_split(s, c);
//     while (res)
//     {
//         printf("%s\n", *res);
//         res++;
//     }
// }