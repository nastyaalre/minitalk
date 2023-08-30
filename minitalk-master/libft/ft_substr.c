/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalremei <nastyarv@mail.ru>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 11:12:05 by aalremei          #+#    #+#             */
/*   Updated: 2022/10/20 11:32:00 by aalremei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Allocates (with malloc(3)) and returns a substring from the string ’s’.
The substring begins at index ’start’ and is of
maximum size ’len’.
s: The string from which to create the substring.
start: The start index of the substring in the string ’s’.
len: The maximum length of the substring.
Return value The substring.
NULL if the allocation fails.
*/

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	i;
	size_t	a;

	i = 0;
	if (!s)
		return (NULL);
	if (start + len > ft_strlen(s) && ft_strlen(s) - start > 0)
		a = ft_strlen(s) - start;
	if (start + len <= ft_strlen(s))
		a = len;
	if (start > ft_strlen(s))
		a = 0;
	p = (char *)malloc(sizeof(char) * a + 1);
	if (!p)
		return (NULL);
	while (i < a)
		p[i++] = s[start++];
	p[i] = '\0';
	return (p);
}

// int	main(void)
// {
// 	char *str = "42";
// 	char *ret = ft_substr(str, 0, 0);

// 	printf("%s\n", ret);
// 	return (0);
// }