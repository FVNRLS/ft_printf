/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmazurit <rmazurit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 13:26:34 by rmazurit          #+#    #+#             */
/*   Updated: 2022/03/28 15:29:28 by rmazurit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Outputs the string ’s’ to the given file descriptor.
Writes _s_ to _fd_, if _fd_ is 1 it is printed to the stdout.
Uses ft_strlen in order to avoid more write calls
s: The string to output.
fd: The file descriptor on which to write.
No return value */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
}
