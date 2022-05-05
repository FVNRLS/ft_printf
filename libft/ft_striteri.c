/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmazurit <rmazurit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 10:39:33 by rmazurit          #+#    #+#             */
/*   Updated: 2022/03/28 19:00:35 by rmazurit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Applies the function ’f’ on each character of the string passed as argument,
passing its index as first argument. Each character is passed by address to ’f’ 
to be modified if necessary. 
No return value. */

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	if (!f)
		return ;
	if (!s)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, (s + i));
		i++;
	}
}
