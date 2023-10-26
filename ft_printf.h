/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 23:00:19 by marvin            #+#    #+#             */
/*   Updated: 2023/10/26 23:00:19 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H /*This is an id*/
# define LIBFTPRINTF_H
# include <stdarg.h> //library for av_ macros
# include <unistd.h>
# include <stdio.h>
# include <stdint.h> //library for uintptr_t

int	ft_printf(char const *str, ...);
int	ft_checkarg(char arg, va_list vargs);
int	ft_putstr(char *str);
int	ft_putchar(char c);
// Es necesario poner las anteriores??
int	ft_puthexptr(uintptr_t number, int printed_chars, char *str);
int	ft_puthex(unsigned int number, int printed_chars, char *str);
int	ft_putdec(int number, int printed_chars, char *str);
int	ft_putudec(unsigned int number, int printed_chars, char *str);


#endif