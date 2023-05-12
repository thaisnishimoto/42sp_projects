/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 23:39:08 by tmina-ni          #+#    #+#             */
/*   Updated: 2023/05/11 16:48:05 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	size_t	i;
	char	*ptr;
	char	*ptr2;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	ptr = malloc((s1_len + s2_len + 1) * 1);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	ptr = ft_memmove(ptr, s1, s1_len);
	ptr2 = ft_memmove(&ptr[s1_len], s2, s2_len);
	ptr[s1_len + s2_len] = '\0';
	return (ptr);
}
