/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalremei <nastyarv@mail.ru>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 15:08:17 by aalremei          #+#    #+#             */
/*   Updated: 2022/10/12 14:26:30 by aalremei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int cr, size_t len)
{
	unsigned char	*p;
	unsigned char	chr;
	size_t			a;

	p = (unsigned char *)str;
	chr = (unsigned char) cr;
	a = 0;
	while (a < len)
	{
		if (*p == chr)
			return (p);
		a++;
		p++;
	}
	return (NULL);
}
/*
int    main(void)
{
 char	str[] = "dskfjsf567\08sipoklm)oiefjknesd1";
 printf("%s\n", memchr(str, 112, 26));
 char	str1[] = "dskfjsf567\08sipoklm)oiefjknesd1";
 char	*p = ft_memchr(str1, 112, 26);
 printf("%s\n", p);
 return (0);
}
*/