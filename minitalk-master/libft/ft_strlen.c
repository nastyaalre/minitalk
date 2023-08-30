/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalremei <nastyarv@mail.ru>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 09:55:33 by aalremei          #+#    #+#             */
/*   Updated: 2022/10/12 09:25:05 by aalremei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	count;

	count = 0;
	while (str[count] != 0)
	{
		count ++;
	}
	return (count);
}
/*
int	main(void)
{
	char	str[] = "12684653";
//	printf("%lu\n", strlen(str));
	printf("%zu\n", ft_strlen(str));

}
*/