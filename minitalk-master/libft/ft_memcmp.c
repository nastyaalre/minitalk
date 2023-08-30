/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalremei <nastyarv@mail.ru>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 11:28:02 by aalremei          #+#    #+#             */
/*   Updated: 2022/10/12 14:26:21 by aalremei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t len)
{
	unsigned char	*s1;
	unsigned char	*s2;
	size_t			b;

	s1 = (unsigned char *)str1;
	s2 = (unsigned char *)str2;
	b = 0;
	while (b < len)
	{
		if (*s1 == *s2 && b < len)
		{
			b++;
			s1++;
			s2++;
		}
		else
			return (*s1 - *s2);
	}
	return (0);
}
/*
int    main(void)
{
 char	str[] = "dskfjsf5678sij";
 char	str1[] = "dskfjsf5678sijknesd1";
 printf("%d\n", memcmp(str, str1, 31));

 char	stra[] = "dskfjsf5678sij";
 char	strb[] = "dskfjsf5678sijknesd1";
 printf("%d\n", ft_memcmp(stra, strb, 31));
 return (0);
}
*/