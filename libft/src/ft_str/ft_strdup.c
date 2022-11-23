/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*ft_strdup.c                                            :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: grocamor <grocamor@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 16:09:26 by grocamor          #+#    #+#             */
/*   Updated: 2022/01/16 16:36:32 by grocamor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
		char	*newstr;
		int		count;
		size_t	len;

		count = 0;
		len = ft_strlen(str);
		newstr = malloc(sizeof(char) * (len + 1));
		if (!newstr)
			return (NULL);
		while (str[count] != '\0')
		{
			newstr[count] = str[count];
			count++;
		}
		newstr[count] = '\0';
		return (newstr);
}