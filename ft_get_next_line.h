/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_next_line.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akosaca <akosaca@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-25 14:31:31 by akosaca           #+#    #+#             */
/*   Updated: 2024-11-25 14:31:31 by akosaca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_GET_NEXT_LINE_H
# define FT_GET_NEXT_LINE_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 3
# endif

#include <fcntl.h>
#include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
#include <string.h>

char	*get_next_line(int fd);
char	*ft_strjoin(char *s1, char *s2);
int		ft_strchr(const char *s);
size_t	ft_strlen(const char *s);
char	*ft_strcpy(char *s1, char *s2, int n);

char	*get_next_line(int fd);

#endif
