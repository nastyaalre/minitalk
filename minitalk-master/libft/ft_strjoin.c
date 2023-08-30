/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalremei <nastyarv@mail.ru>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 12:29:11 by aalremei          #+#    #+#             */
/*   Updated: 2022/10/10 13:29:42 by aalremei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Allocates (with malloc(3)) and returns a new
string, which is the result of the concatenation
of ’s1’ and ’s2’.*/

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		sa;
	int		sb;
	int		len;
	char	*p;

	sa = 0;
	sb = 0;
	if (!s1 || !s2)
		return (0);
	len = ft_strlen(s1) + ft_strlen(s2);
	p = (char *)malloc(len * sizeof(char) + 1);
	if (!p)
		return (0);
	while (s1[sa] != '\0')
	{
		p[sb++] = s1[sa++];
	}
	sa = 0;
	while (s2[sa] != '\0')
	{
		p[sb++] = s2[sa++];
	}
	p[sb] = '\0';
	return (p);
}
/*
int	main(void)
{
	char	*s1a = "where is my ";
	char	*re = ft_strjoin(s1a, NULL);
		printf("%s\n", re);


	// char *s1 = "my favorite animal is";
	// char *s2 = " ";
	// char *s3 = "the nyancat";
	// char *res = ft_strjoin(ft_strjoin(s1, s2), s3);
	// printf("%s\n", res);
	return (0);
}*/