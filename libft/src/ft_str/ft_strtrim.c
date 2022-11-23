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

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*newstr;
	size_t	len;
	size_t	i;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[i] && ft_strchr (set, s1[i]))
	{
		i++;
	}
	len = ft_strlen (s1);
	while (len && ft_strchr (set, s1[len]))
	{
		len--;
	}
	newstr = ft_substr (s1, i, len - i + 1);
	return (newstr);
}
