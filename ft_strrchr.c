/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzary <mzary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 13:59:20 by mzary             #+#    #+#             */
/*   Updated: 2024/10/27 12:34:16 by mzary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*p;
	int		i;

	p = (char *)0;
	i = 0;
	if ((char)c == '\0')
	{
		return ((char *)(s + ft_strlen(s)));
	}
	while (*(s + i) != '\0')
	{
		if (*(s + i) == (char)c)
			p = (char *)(s + i);
		i++;
	}
	return (p);
}
