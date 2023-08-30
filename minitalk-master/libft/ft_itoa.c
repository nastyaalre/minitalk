/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalremei <nastyarv@mail.ru>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:01:41 by aalremei          #+#    #+#             */
/*   Updated: 2022/10/15 17:37:07 by aalremei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_length_count(int i)
{
	int	len;

	if (i <= 0)
		len = 1;
	else
		len = 0;
	while (i)
	{
		i = i / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int i)
{
	unsigned int	str_size;
	long int		n;
	char			*p;

	n = i;
	str_size = ft_length_count(n);
	p = (char *)malloc(str_size * sizeof(char) + 1);
	if (!p)
		return (NULL);
	if (n < 0)
	{
		n = -n;
		p[0] = '-';
	}
	p[str_size] = '\0';
	if (n == 0 && n == -0)
		p[str_size - 1] = n + 48;
	while (n)
	{	
		str_size--;
		p[str_size] = (n % 10) + 48;
		n = n / 10;
	}
	return (p);
}


int	main(void)
{
	printf("%s\n", ft_itoa(-2147483648));
}