/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalremei <nastyarv@mail.ru>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 10:49:36 by aalremei          #+#    #+#             */
/*   Updated: 2022/10/15 15:34:32 by aalremei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t i, size_t size)
{
	void			*p;

	if (size && SIZE_MAX / size < i)
		return (NULL);
	p = malloc(i * size);
	if (!p)
		return (NULL);
	ft_bzero(p, i * size);
	return (p);
}

// int	main(void)
// {
// 	int i;
// 	i = 0;
// 	char *str = ft_calloc(56, 20);
// 	while (i <= 20)
// 	{
// 		str[i] = i;
// 		printf("%d\n", str[i]);
// 		i++;
// 	}
// }