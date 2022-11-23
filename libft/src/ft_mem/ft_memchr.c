/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*ft_memchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grocamor <grocamor@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 12:38:19 by grocamor          #+#    #+#             */
/*   Updated: 2022/01/11 12:38:23 by grocamor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	key;
	char			*str;

	str = (void *)s;
	key = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == key)
		{
			return (&str[i]);
		}			
		i++;
	}
	return (NULL);
}
