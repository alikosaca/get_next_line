/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akosaca <akosaca@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-25 14:41:19 by akosaca           #+#    #+#             */
/*   Updated: 2024-11-25 14:41:19 by akosaca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_get_next_line.h"

size_t  ft_strlen(char *str)
{
    size_t  i;
    i = 0;
    while (str[i])
        i++;
    return (i);
}
char    *ft_strjoin(char *s1, char *s2)
{
    char    *str;
    int     i;
    int     j;
    i = 0;
    j = 0;
    str = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
    if (!str)
        return (NULL);
    while (s1[i])
    {
        str[i] = s1[i];
        i++;
    }
    while (s2[j])
    {
        str[i + j] = s2[j];
        j++;
    }
    str[i + j] = '\0';
    free(s1);
    free(s2);
    return (str);
}
int ft_strchr(char *str, int c)
{
    int i;
    i = 0;
    while (str[i])
    {
        if (str[i] == c)
            return (0);
        i++;
    }
    return (1);
}
char    *ft_strdup(char *s1)
{
    char    *str;
    int     i;
    i = 0;
    if (!s1)
        return (NULL);
    str = (char *)malloc(ft_strlen(s1) + 1);
    if (!str)
        return (NULL);
    while (s1[i])
    {
        str[i] = s1[i];
        i++;
    }
    str[i] = '\0';
    return (str);
}

char *ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
    int i;

    i = 0;
    while (src[i] != '\0' && dstsize > i)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

int main(void)
{
    char *denem;
    char *deneme;
    denem = malloc(3);
    deneme = malloc(3);
    denem[0] = 'k';
    denem[1] = 'o';
    denem[2] = 's';
    deneme[0] = 'k';
    deneme[1] = 'm';
    deneme[2] = 's';
    deneme = a(deneme, denem);
    printf("%s", denem);
    // char *s1 = malloc(10);
    // int      i = 0;
    // while (i < 10)
    // {
    //  s1[i] = 'a';
    //  i++;
    // }
    // char *s2;
    // char *s3;
    // s2 = s1;
    // free(s1);
    // printf("%s\n", s1);
    // printf("%s\n", s2);
    // printf("%x\n", s1);
    // s1 = "yaycicek";
    // printf("%s\n", s1);
    // printf("%x\n", s2);
}



// size_t ft_strlen(const char *s) {
//     size_t i = 0;
//     while (s && s[i])
//         i++;
//     return i;
// }

// char *ft_strchr(const char *s, int c) {
//     if (!s)
//         return NULL;
//     while (*s) {
//         if (*s == (char)c)
//             return (char *)s;
//         s++;
//     }
//     return NULL;
// }

// char *ft_strjoin(char *s1, char *s2) {
//     size_t len1 = ft_strlen(s1);
//     size_t len2 = ft_strlen(s2);
//     char *new_str = malloc(len1 + len2 + 1);
//     size_t i = 0;

//     if (!new_str)
//         return NULL;
//     while (s1 && *s1)
//         new_str[i++] = *s1++;
//     while (s2 && *s2)
//         new_str[i++] = *s2++;
//     new_str[i] = '\0';
//     return new_str;
// }
