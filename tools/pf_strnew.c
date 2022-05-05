/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmazurit <rmazurit@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 13:01:58 by rmazurit          #+#    #+#             */
/*   Updated: 2022/04/20 18:43:42 by rmazurit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* allocates memory for result string and initialize all slots with 0-term */

#include "../ft_printf.h"

char	*pf_strnew(size_t size)
{
	char	*mem;

	mem = (char *)malloc(sizeof(char) * (size + 1));
	if (!mem)
		return (NULL);
	pf_bzero(mem, size);
	return (mem);
}
