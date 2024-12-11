/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_next_line.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akosaca <akosaca@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-25 14:34:53 by akosaca           #+#    #+#             */
/*   Updated: 2024-11-25 14:34:53 by akosaca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_get_next_line.h"

char *ft_read_line(int fd, char *remainder)
{
    int bytes_read;
    int status;
    char *tmp;
    status = 1; // satırın sonuna geldiysek 0 olacak ve döngüden çıkacak
    remainder = (char *)malloc(BUFFER_SIZE + 1);
    bytes_read = read(fd, remainder, BUFFER_SIZE);
    if(bytes_read <= 0)
        return NULL;
    while (bytes_read > 0 && status) //böyle yazmak yerine direkt ft_strchr(buffer, '\n'); buraya'da yazabilirim
    {
        bytes_read = read(fd, tmp, BUFFER_SIZE);
        if(bytes_read <= 0)
		{
			free(remainder);
			free(tmp);
            return (NULL);

		}
		tmp[bytes_read] = '\0';
        remainder = ft_strjoin(remainder, tmp);
        status = ft_strchr(remainder, '\n');
    }
	free(tmp);
    return (remainder);
}

char *ft_before_next_line(char *remainder)
{
	char	*buffer;
	int		i;

	i = 0;
	while (remainder[i] != '\n')
	{
		buffer[i] = remainder[i];
		i++;
	}
	buffer = malloc(sizeof(char) * i + 2);
	if (!buffer)
		return (NULL);
	buffer = ft_strlcpy(buffer, remainder, i + 1);
	return (buffer);
	
}

char *ft_new_line(char *remainder)
{
	char	*tmp;
	int		i;

	i = 0;
	while (remainder[i] && remainder[i] != '\n')
		i++;
	tmp = malloc(sizeof(char) * ft_strlen(remainder) - i + 1);
	if(!tmp)
	{
		free(remainder);
		return (NULL);
	}
	ft_strlcpy(tmp, remainder + i, ft_strlen(remainder + i));
	free(remainder);
	return (tmp);

}



char *get_next_line(int fd)
{
    static char *remainder;
    char        *buffer;
    if (fd < 0 || BUFFER_SIZE <= 0)
        return (NULL);
    remainder = ft_read_line(fd, remainder); //ilk satır ve biraz fazlasını aldık
	if (!remainder)
		return (NULL);
	buffer = ft_before_next_line(remainder);
	remainder = ft_new_line(remainder);
	return (buffer);
}


// static char *extract_line(char *buffer) {
// size_t i = 0;
//     char *line;

//     if (!buffer || !buffer[0])
//         return NULL;
//     while (buffer[i] && buffer[i] != '\n')
//         i++;
//     line = malloc(i + (buffer[i] == '\n' ? 2 : 1));
//     if (!line)
//         return NULL;
//     i = 0;
//     while (buffer[i] && buffer[i] != '\n') {
//         line[i] = buffer[i];
//         i++;
//     }
//     if (buffer[i] == '\n')
//         line[i++] = '\n';
//     line[i] = '\0';
//     return line;
// }

// static char *save_remaining(char *buffer) {
//     size_t i = 0;
//     size_t j = 0;
//     char *remaining;

//     while (buffer[i] && buffer[i] != '\n')
//         i++;
//     if (!buffer[i]) {
//         free(buffer);
//         return NULL;
//     }
//     remaining = malloc(ft_strlen(buffer) - i);
//     if (!remaining)
//         return NULL;
//     i++;
//     while (buffer[i])
//         remaining[j++] = buffer[i++];
//     remaining[j] = '\0';
//     free(buffer);
//     return remaining;
// }

// char *get_next_line(int fd) {
// 	static char *buffer;
//     char temp[BUFFER_SIZE + 1];
//     char *line;
//     int bytes_read;

//     if (fd < 0 || BUFFER_SIZE <= 0)
//         return NULL;
//     while ((bytes_read = read(fd, temp, BUFFER_SIZE)) > 0) {
//         temp[bytes_read] = '\0';
//         buffer = ft_strjoin(buffer, temp);
//         if (ft_strchr(buffer, '\n'))
//             break;
//     }
//     if (bytes_read < 0 || (!buffer && !bytes_read))
//         return NULL;
//     line = extract_line(buffer);
//     buffer = save_remaining(buffer);
//     return line;
// }
//-------------------------------------------------
/* char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
	{
		return ((char *)s);
	}
	return (NULL);
}

char	*ft_strdup(const char *s1)
{
	size_t	sl;
	char	*scpy;
	size_t	i;

	sl = ft_strlen(s1);
	scpy = malloc((sl + 1) * sizeof(char));
	i = 0;
	if (scpy == NULL)
		return (NULL);
	while (s1[i])
	{
		scpy[i] = s1[i];
		i++;
	}
	scpy[i] = '\0';
	return (scpy);
}
char *crate_struct(int fd, t_list *node)
{
	char	*str;
	int		status;
	while (fd)
	{
		
		while (*str = read(fd, str, 1) && *str != '\n' && *str != '\0') // her bir karaktrer,
			str++;
		node->content = ft_strdup(str);
		node = node->next;
		if(!(*str))
			break;
	}
	
}
char *get_next_line(int fd)
{
	static t_list *node;
	
	if(node->content == NULL)
		crate_struct(fd, node); // burada txt dosyayı oluşturacağız
	ssize_t r_bytes;
	static char *buffer; //kalan array değeri
	char *val; // yazdırılabilir array değer
	val = malloc(BUFFER_SIZE + 1);

	r_bytes = read(fd, val, BUFFER_SIZE);

	val[r_bytes] = '\0';	
	while (val != '\0' || r_bytes != 0)
	{
		buffer = ft_strdup(ft_strchr(val, '\n'));
		
	}
	

}
 */
// struct'sız
// char *get_next_line(int fd)
// {
// 	ssize_t r_bytes;
// 	static char *buffer; //kalan array değeri
// 	char *val; // yazdırılabilir array değer
// 	val = malloc(BUFFER_SIZE + 1);

// 	r_bytes = read(fd, val, BUFFER_SIZE);

// 	val[r_bytes] = '\0';	
// 	while (val != '\0' || r_bytes != 0)
// 	{
// 		buffer = ft_strdup(ft_strchr(val, '\n'));
		
// 	}
	

// }



/*
merhaba dunya deneme yaziyorumsd\n
mesela buda denemenin devamidir\n
bu proje kafa karistiriciqwewqe\n
ve bu kadar!\0

buffer = 15


*/


//---------------------------------------------------








// static char *ft_gnl_read(int fd, char *nex_line)
// {
	
// 	return 0;
// }

// static char *ft_gnl_ln(int fd, char *next_line)
// {
// 	int	r_bytes;
// 	char *buffer;

// 	buffer = malloc(sizeof(char) * BUFFER_SIZE - 1);
// 	if(!buffer)
// 		return (0);
// 	r_bytes = read(fd, buffer, BUFFER_SIZE);
// 	if(!r_bytes)
// 	{
// 		free(buffer);
// 		return (0);
// 	}
// 	buffer[r_bytes] = '\0';
// 	return (buffer);
// }

// char *get_next_line(int fd)
// {
// 	static char *next_line; // anlık konumum

// 	ft_gnl_ln(fd, next_line);
// }

//buffer_size; 3;
/*
	merhaba dunya\n
	mesela ornek yazi yaziyorum \n
	bir baska ornek
	
 */




	// fd
	// //int a = 42;
	// int fd = open("fdone.txt", O_RDWR | O_TRUNC, 666);
	// if (fd == -1)
	// 	return (printf("%s", "have a problem"));
	// else
	// 	return (printf("%s", "haven't a problem,  and creat file"));