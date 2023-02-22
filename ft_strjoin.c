/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hayashikdi <hayashikdi@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 14:02:31 by hayashikdi        #+#    #+#             */
/*   Updated: 2023/02/11 15:18:32 by hayashikdi       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined_str;

	if (!s1 || !s2)
		return (NULL);
	joined_str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)
				+ 1));
	if (!joined_str)
		return (NULL);
	ft_strlcpy(joined_str, s1, ft_strlen(s1) + 1);
	ft_strlcat(joined_str, s2, ft_strlen(s1) + ft_strlen(s2) + 1);
	return (joined_str);
}

// int main()
// {
//     char s1[] = "aaa";
//     char s2[] = "bbb";
//     printf("%s\n", ft_strjoin(s1, s2));
// }