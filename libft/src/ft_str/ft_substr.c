/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*ft_strlen.c                                            :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: grocamor <grocamor@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 16:09:26 by grocamor          #+#    #+#             */
/*   Updated: 2022/04/19 19:47:28 by grocamor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*newstr;
	size_t	x;
	size_t	i;
	
	newstr = malloc(sizeof(char) * (len + 1));
	i = start;
	x = 0;
	if (!newstr)
		return (NULL);
	if (!s)
		return (NULL);
	if (start > len)
		return (NULL);
	while (x < len)
	{
		newstr[x] = s[i];
		x++;
		i++;
	}
	newstr[x] = '\0';
	return (newstr);
}
