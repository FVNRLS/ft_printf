/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmazurit <rmazurit@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 11:24:23 by rmazurit          #+#    #+#             */
/*   Updated: 2022/04/14 13:43:37 by rmazurit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*sprint(int c) checks whether the passed character is printable. 
A printable character is a character that is not a control character.
This function returns a non-zero value if c is a printable char; else, zero.*/

int	ft_isprint(int c)
{
	if (c > 31 && c < 127)
		return (1);
	return (0);
}
