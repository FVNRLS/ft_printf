/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmazurit <rmazurit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 10:51:23 by rmazurit          #+#    #+#             */
/*   Updated: 2022/03/25 16:56:33 by rmazurit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* isascii in c checks the passed value is ascii character or not. Returns 
non-zero digit if passed value is ascii character otherwise zero.*/

int	ft_isascii(int c)
{
	if ((c >= 0) && (c <= 127))
		return (1);
	return (0);
}
