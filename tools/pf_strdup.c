/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmazurit <rmazurit@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 09:04:49 by ssettle           #+#    #+#             */
/*   Updated: 2022/04/20 18:13:31 by rmazurit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

char	*pf_strdup(const char *src)
{
	char	*null_str;
	char	*str;

	if (src == NULL)
	{
		null_str = (char *)malloc(sizeof(*null_str) * 7);
		null_str = pf_strcpy(null_str, "(null)");
		write(1, null_str, 6);
		free(null_str);
		return (NULL);
	}
	str = (char *)malloc(sizeof(char) * (pf_strlen(src) + 1));
	if (!str)
		return (NULL);
	str = pf_strcpy(str, src);
	return (str);
}
