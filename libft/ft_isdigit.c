/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmazurit <rmazurit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 10:30:56 by rmazurit          #+#    #+#             */
/*   Updated: 2022/03/25 17:10:48 by rmazurit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The isdigit() function checks whether a character is numeric char or not.
Function takes a single argument in the form of an int and returns the value 
of type int.*/

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
