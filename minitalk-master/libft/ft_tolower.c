/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalremei <nastyarv@mail.ru>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 10:18:49 by aalremei          #+#    #+#             */
/*   Updated: 2022/10/12 14:23:27 by aalremei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c = c + 32;
	return (c);
}
/*
int	main(void)
{
	char	c;

	c = 'F';
//	printf("From '%c' to new '%c'", c, tolower(c));
	printf("From '%c' to new '%c'", c, ft_tolower(c));
}
*/