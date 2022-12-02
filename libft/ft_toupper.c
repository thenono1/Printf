/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-malt <ael-malt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 16:48:10 by ael-malt          #+#    #+#             */
/*   Updated: 2022/11/09 16:41:28 by ael-malt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - ' ');
	return (c);
}

// int main()
// {
// 	printf("ft_toupper: %c\n", ft_toupper('A'));
// 	printf("toupper: %c\n\n", toupper('A'));
// 	printf("ft_toupper: %c\n", ft_toupper('\\'));
// 	printf("toupper: %c\n", toupper('\\'));
// 	return 0;
// }
