/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmazurit <rmazurit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 11:20:49 by rmazurit          #+#    #+#             */
/*   Updated: 2022/03/28 18:59:53 by rmazurit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* A simple way of writing into a file.
Outputs the character ’c’ to the given file descriptor. 
c: The character to output.
fd: The file descriptor on which to write = stdout
no return value 
file descriptor explanation:
https://www.geeksforgeeks.org/input-output-system-calls-c-create-open-close-
read-write/#:~:text=What%20is%20the%20File%20Descriptor,pointers%20to%20file%20
table%20entries.
*/

#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
