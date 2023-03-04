/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hayashikdi <hayashikdi@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 23:16:35 by hayashikdi        #+#    #+#             */
/*   Updated: 2023/03/04 20:27:26 by hayashikdi       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	max_len;
	char	*sub_s;

	if (!s || (len <= 0) || (start >= ft_strlen(s)))
		return (ft_strdup(""));
	else
	{
		max_len = ft_strlen(&s[start]);
		if (max_len < len)
			len = max_len;
		sub_s = malloc(sizeof(char) * (len + 1));
		if (!sub_s)
			return (NULL);
		i = 0;
		while (s[i] && i < len)
		{
			sub_s[i] = s[i + start];
			i++;
		}
		sub_s[i] = '\0';
		return (sub_s);
	}
}

// int main()
// {

// 	char *s = ft_substr("42", 0, 0);
// 	if (!strcmp(s, ""))
// 		printf("%d\n", 1);
// }
