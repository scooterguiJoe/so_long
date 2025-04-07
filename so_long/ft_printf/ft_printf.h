/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvascon <guvascon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 13:20:02 by guvascon          #+#    #+#             */
/*   Updated: 2025/04/07 17:24:51 by guvascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>
# include <fcntl.h>

# define LWCASE "0123456789abcdef"
# define UPCASE "0123456789ABCDEF"
# define DEC "0123456789"

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

//printf
int		ft_printf(const char *format, ...);
int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_putnbr_base(long nbr, char *base);
int		ft_print_format(char special, va_list *args);
int		ft_strlen(const char *str);
int		ft_print_pointer(unsigned long int n, char *base, int flag);

//gnl
int		ft_strlengnl(char *str);
char	*ft_strjoin(char *str, char *buffer);
void	check_newline(char *str);
char	*get_next_line(int fd);

#endif