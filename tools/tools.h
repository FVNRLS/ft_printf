/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmazurit <rmazurit@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 13:47:54 by rmazurit          #+#    #+#             */
/*   Updated: 2022/05/09 12:45:59 by rmazurit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TOOLS_H
# define TOOLS_H

# include <unistd.h>
# include <stdlib.h>

int			ft_isdigit(int c);
size_t		ft_strlen(const char *s);
char		*ft_strchr(const char *s, int c);

#endif
