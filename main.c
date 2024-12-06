
#include "ft_get_next_line.h"
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>


int main() {
    int fd = open("test.txt", O_RDONLY);
    char *line;

    if (fd < 0) {
        perror("Dosya açılamadı");
        return 1;
    }

    while ((line = get_next_line(fd)) != NULL) {
        printf("%s", line);
        free(line);
    }

    close(fd);
    return 0;
}
/*
merhaba dunya deneme yaziyorumsd\n
mesela buda denemenin devamidir\n
bu proje kafa karistiriciqwewqe\n
ve bu kadar!\0

buffer = 15
*/
/*
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}		t_list;
*/
//int main()
//{


    // char text[] = "Merhabadunya!\n merhaba dunya";
    // int fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);  // Dosyayı aç veya oluştur


    // ssize_t bytesWritten = write(fd, text, sizeof(text));  // Veriyi dosyaya yaz


    // printf("Yazılan byte sayısı: %zd\n", bytesWritten);

    // close(fd);  // Dosyayı kapat
    // return 0;

	//int fd = open("akosaca.text", O_CREAT | O_RDWR | O_APPEND, 0666);
	// char *a = "48";
	// if(1 == -1)
	// 	return printf("hata \n");
	// printf("yüklendi \n");
	
	// write(1, a, 2);
	// printf("yüklendi \n");

	// ft_putchar_fd('a', fd);
	//23456789
	//234567ı
	// get_next_line(fd);

	// return 0;
//}
		//fd
	//int a = 42;
	// int fd = open("done.txt", O_CREAT | O_RDWR | O_TRUNC, 999);
	// if (fd == -1)
	// 	return (printf("%s", "have a problem"));
	// else
	// 	return (printf("%s", "haven't a problem,  and creat file"));
	// write(fd, "a", 1);
/*
1234567
82345678ıo
sADFGHJDSKF

gnl = 1234567
2. gnl = 82345678ıo
*/