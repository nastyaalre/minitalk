/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalremei <nastyarv@mail.ru>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 14:05:52 by aalremei          #+#    #+#             */
/*   Updated: 2022/10/20 14:33:50 by aalremei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	check_sign(const char *str, int r)
{
	int	a;

	a = 0;
	if (str[r] == '-' || str[r] == '+')
	{
		if (str[r] == '-')
			a = -1;
		else
			a = 1;
	}
	return (a);
}

int	ft_atoi(const char *str)
{
	int			i;
	long int	num;
	int			a;

	i = 0;
	num = 0;
	a = 1;
	while (str[i] != '\0' && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
			|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r'))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		a = check_sign((char *)str, i);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = (num * 10) + (str[i] - '0');
		i++;
		if (num * a < -2147483648)
			return (0);
		if (num * a > 2147483647)
			return (-1);
	}
	return (num * a);
}

// int	main(void)
// {
// 	char	str[] = "    -125k;l";
// 	char	str1[] = "000074";
// 	printf("%d\n", atoi(str));
// 	printf("%d\n", ft_atoi(str));
// }