/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalremei <nastyarv@mail.ru>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 12:06:17 by aalremei          #+#    #+#             */
/*   Updated: 2022/10/18 11:32:04 by aalremei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_list;

	new_list = malloc(sizeof(t_list));
	if (!new_list)
		return (NULL);
	new_list -> content = content;
	new_list -> next = NULL;
	return (new_list);
}

// int main (void)
// {
// 	t_list *b;
// 	b = ft_lstnew("blabla");
// 	printf("%s\n", b -> content);
// 	printf("%p\n", b -> next);
// 	printf("%s\n", (*b).content);
// 	printf("%p\n", (*b).next);
// 	return (0);
// }