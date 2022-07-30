#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h> // memory allocation
# include <fcntl.h> // open
# include <unistd.h> // read
# include <stdio.h> // printf in main


# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif

char    *get_next_line(int fd);
char	*ft_get_line(char *left_str);
char	*str_join(char *left_str, char *buff);
# endif