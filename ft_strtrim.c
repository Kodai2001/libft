/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hayashikdi <hayashikdi@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 14:24:00 by hayashikdi        #+#    #+#             */
/*   Updated: 2023/02/11 14:42:42 by hayashikdi       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	len;
	char			*trimmed_s1;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	len = ft_strlen(s1);
	while (len && ft_strchr(set, s1[len]))
		len--;
	trimmed_s1 = ft_substr(s1, 0, len + 1);
	return (trimmed_s1);
}

// int	main(void)
// {
// 	char *s = ft_strtrim("123", "");
// 	if (!strcmp(s, "123"))
// 		printf("%s\n", s);
// }