/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amine <amine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 13:40:33 by amine             #+#    #+#             */
/*   Updated: 2022/11/25 18:52:10 by amine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

// int main(void)
// {
// 	t_list *test0 = ft_lstnew("test0");
// 	ft_lstadd_front(&test0, ft_lstnew("test1"));
// 	ft_lstadd_front(&test0, ft_lstnew("test2"));

// 	printf("%d", ft_lstsize(l));
// }
