/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmazurit <rmazurit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 20:12:38 by rmazurit          #+#    #+#             */
/*   Updated: 2022/03/25 20:00:10 by rmazurit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The toupper() function converts a lowercase alphabet to an uppercase alphabet.
The function prototype of the toupper() function is:
int toupper(int ch);
If an argument passed to toupper() is
1) a lowercase character, the function returns 
its corresponding uppercase character.
2) an uppercase character or a non-alphabetic character, 
the function returns the character itself.
*/

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c -= 32;
		return (c);
	}
	return (c);
}
