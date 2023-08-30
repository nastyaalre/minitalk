/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalremei <nastyarv@mail.ru>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 10:27:16 by aalremei          #+#    #+#             */
/*   Updated: 2022/10/14 09:36:42 by aalremei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int i)
{
	while (*str != '\0')
	{
		if ((unsigned char)*str == (unsigned char)i)
			return ((char *)str);
		str++;
	}
	if ((unsigned char)i == '\0')
		return ((char *)str);
	return (NULL);
}

// int	main(void)
// {
// 	char	src[] = "tripouille";
// char	*p = strchr(src, 'z');
// 	printf("%s\n", p);
// 	char	src1[] = "tripouille";
// char	*q = ft_strchr(src1, 'z');
// 	printf("%s\n", q);
// }