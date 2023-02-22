/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hayashikdi <hayashikdi@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 13:09:21 by hayashikdi        #+#    #+#             */
/*   Updated: 2023/02/11 15:30:10 by hayashikdi       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*_str;

	if (!s || !f)
		return (NULL);
	i = 0;
	_str = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!_str)
		return (NULL);
	while (s[i])
	{
		_str[i] = f(i, s[i]);
		i++;
	}
	_str[i] = '\0';
	return (_str);
}

// char	my_func(unsigned int i, char c)
// {
// 	printf("index: %u\n", i);
// 	return (c - 32);
// }

// int main()
// {
//     char* str = "aiueo";
//     printf("%s\n", ft_strmapi(str, my_func));
// }