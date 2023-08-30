/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalremei <nastyarv@mail.ru>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 14:36:33 by aalremei          #+#    #+#             */
/*   Updated: 2022/10/20 13:12:34 by aalremei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hstk, const char *ndl, size_t i)
{
	size_t	h;
	size_t	n;

	h = 0;
	n = 0;
	if ((char *)hstk == NULL && i == 0)
		return (0);
	if (*ndl == 0)
		return ((char *)hstk);
	while (hstk[h] != '\0' && h < i)
	{
		n = 0;
		while (ndl[n] == hstk[h + n] && (h + n) < i)
		{
			if (ndl[n + 1] == '\0')
				return ((char *)hstk + h);
			n++;
		}
		h++;
	}
	return (0);
}

// int    main(void)
// {
// 	char *s1 = "MZIRIBMZIRIBMZE123";
// 	char *s2 = "";
// 	size_t max = strlen(s2);
// 	char *i1 = strnstr(s1, s2, -1);
// 	char *i2 = ft_strnstr(s1, s2, -1);
// 	printf("%s\n", i1);
// 	printf("%s\n", i2);
// }