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
#define FT_GET_NEXT_LINE_H
#ifndef BUFFER_SIZE
#define BUFFER_SIZE 42
#endif

#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
char *get_next_line(int fd);
char *ft_strjoin(char *s1, char *s2);
char *ft_strchr(const char *s, int c);
size_t ft_strlen(const char *s);
char    *ft_strdup(char *s1);
char *ft_strlcpy(char *dest, const char *src, size_t dstsize);

char *get_next_line(int fd);
char get_next_line_utils();
