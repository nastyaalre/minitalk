/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalremei <nastyarv@mail.ru>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 11:27:05 by aalremei          #+#    #+#             */
/*   Updated: 2022/10/10 12:25:06 by aalremei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *str, int c, unsigned int len)
{
	unsigned int	a;

	a = 0;
	while (a < len)
	{
		((unsigned char *)str)[a] = c;
		a++;
	}
	return (str);
}
/*

int    main(void)
{
 char	str1[21] = "";
 
// printf("%s\n", memset(str1, 62, 20));
	char	*p = ft_memset(str1, 62, 5);
	printf("%s\n", p);
}*/