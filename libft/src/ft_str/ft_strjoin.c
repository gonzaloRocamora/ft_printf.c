/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grocamor <grocamor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 12:38:19 by grocamor          #+#    #+#             */
/*   Updated: 2022/07/02 12:55:00 by grocamor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstr;
	size_t	i;
	size_t	x;
	size_t	len;
	size_t	j;	

	j = 0;
	i = 0;
	x = ft_strlen(s1);
	len = ft_strlen(s1) + ft_strlen(s2);
	newstr = malloc(sizeof(char) * (len + 1));
	if(!newstr)
		return (NULL);
	while (s1[i] != '\0')
	{
		newstr[i] = s1[i];
		i++;
	}	
	while (s2[j] != '\0')
	{
		newstr[x] = s2[j];
		j++;
		x++;
	}	
	newstr[x] = '\0';
	return (newstr);
}
