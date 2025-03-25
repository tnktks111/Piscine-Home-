#include "ex05.h"

int ft_atoi(char *str)
{
	int sign;
	long num;

	sign = 1;
	num = 0;
	while(*str && (*str == ' ' || (*str >= 9 && *str <= 13)))
		str++;
	while(*str && (*str == '+' || *str == '-'))
	{
		if (*str++ == '-')
			sign *= -1;
	}
	while(*str && *str >= '0' && *str <= '9')
	{
		num = num * 10 + (*str - '0');
		str++;
	}
	return (int)(sign * num);
}

