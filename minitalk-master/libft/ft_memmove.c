/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalremei <nastyarv@mail.ru>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 13:03:41 by aalremei          #+#    #+#             */
/*   Updated: 2022/10/12 14:17:32 by aalremei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (d == 0 && s == 0)
		return (0);
	if (d < s)
	{
		while (len-- > 0)
			*d++ = *s++;
		return (dest);
	}
	else
	{
		while (len > 0)
		{
			d[len - 1] = s[len - 1];
			len--;
		}
	}
	return (dest);
}
/*
int    main(void)
{
// char    src[] = "abcdefg";
// printf("%s\n", memmove(&src[4], &src[0], 4));

char    src1[] = "abcdefg";
    printf("%s\n", ft_memmove(0, &src1[5], 4));
}*/