/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalremei <nastyarv@mail.ru>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 11:53:29 by aalremei          #+#    #+#             */
/*   Updated: 2022/10/22 12:25:08 by aalremei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nbr_of_strings(char const *str, char a)
{
	int	ind;
	int	nbr;

	ind = 0;
	nbr = 0;
	while (str[ind])
	{
		if (str[ind] == a)
			ind++;
		else if (str[ind] != a)
		{
				nbr++;
			while (str[ind] != a && str[ind])
				ind++;
		}			
	}
	return (nbr);
}

static int	word_len(const char *str, char c)
{
	int	count;

	count = 0;
	while (str[count] && str[count] != c)
	{
		count ++;
	}
	return (count);
}

static char	*new_str(const char *s1, char c)
{
	char	*ptr;
	int		len;
	int		i;

	i = 0;
	len = word_len(s1, c);
	ptr = (char *)malloc(len * sizeof(char) + 1);
	if (!ptr)
		return (NULL);
	while (s1[i] != '\0' && s1[i] != c)
	{
		ptr[i] = s1[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

char	**ft_split(char const *s, char c)
{	
	int		i;
	int		n;
	char	**p;

	i = 0;
	n = 0;
	if (!s)
		return (NULL);
	p = (char **)malloc(sizeof(char *) * (nbr_of_strings(s, c) + 1));
	if (!p)
		return (NULL);
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] != c && s[i] != '\0')
		{
			p[n] = new_str(&s[i], c);
			n++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
	}
	p[n] = NULL;
	return (p);
}

// int	main(void)
// {
// 	char	str[] = "";
// 	char	**p;

// 	p = ft_split("          ", ' ');
// 	return (0);
// }