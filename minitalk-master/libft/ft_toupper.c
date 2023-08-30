/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalremei <nastyarv@mail.ru>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 10:00:48 by aalremei          #+#    #+#             */
/*   Updated: 2022/10/12 14:23:41 by aalremei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c = c - 32;
	return (c);
}
/*
int	main(void)
{
	char	c;

	c = '2';
//	printf("From '%c' to new '%c'", c, toupper(c));
	printf("From '%c' to new '%c'", c, ft_toupper(c));
}*/