#include "shell01.h"
int ft_strlen(char *str){
	char *ptr = str;
	while (*ptr)
		ptr++;
	return (ptr - str);
}