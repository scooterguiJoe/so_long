/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvascon <guvascon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 12:14:16 by guvascon          #+#    #+#             */
/*   Updated: 2025/04/07 17:21:46 by guvascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strlengnl(char *s)
{
	int	i;

	i = 0;
	while (s && s[i] && s[i] != '\n')
		i++;
	if (s && s[i] == '\n')
		i++;
	return (i);
}

char	*ft_strjoin(char *str, char *buffer)
{
	int			i;
	int			j;
	char		*s1;

	i = 0;
	j = 0;
	s1 = malloc(ft_strlen(str) + ft_strlen(buffer) + 1);
	if (!s1)
		return (NULL);
	while (str && str[i])
	{
		s1[i] = str[i];
		i++;
	}
	while (buffer[j] && buffer[j] != '\n')
	{
		s1[i + j] = buffer[j];
		if (buffer[j++] == '\n')
			break ;
	}
	if (buffer[j] == '\n')
		s1[i + j++] = '\n';
	s1[i + j] = '\0';
	return (free(str), s1);
}

void	check_newline(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\n' && str[i] != '\0')
		i++;
	if (str[i] == '\n')
		i++;
	while (str[j] != '\0')
	{
		str[j] = str[i];
		i++;
		j++;
	}
	str[j] = '\0';
}
