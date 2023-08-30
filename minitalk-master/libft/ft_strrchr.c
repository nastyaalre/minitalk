/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalremei <nastyarv@mail.ru>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 08:59:07 by aalremei          #+#    #+#             */
/*   Updated: 2022/10/20 13:12:40 by aalremei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int i)
{
	int	b;

	b = ft_strlen(str);
	while (b > 0 && ((unsigned char *)str)[b] != (unsigned char)i)
	{
		b--;
	}
	if (((unsigned char *)str)[b] == (unsigned char)i)
		return ((char *)&str[b]);
	return (NULL);
}

// int    main(void)
// {
//     char    str[] = "bonjour";
//     char    *p = ft_strrchr(str, 's');
//     printf("%s\n", p);

// 	    char    str1[] = "bonjour";
//     char    *q = strrchr(str1, 's');
//     printf("%s\n", q);
// }