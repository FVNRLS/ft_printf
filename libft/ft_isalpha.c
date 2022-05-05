/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmazurit <rmazurit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 10:22:15 by rmazurit          #+#    #+#             */
/*   Updated: 2022/03/25 16:54:43 by rmazurit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*In C programming, isalpha() function checks whether a character is an 
alphabet (a to z and A-Z) or not. If a character passed to isalpha() is an 
alphabet, it returns a non-zero integer, if not it returns 0.*/

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
