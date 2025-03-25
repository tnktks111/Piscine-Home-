#include "ex05.h"

int read_operator(char *str)
{
	if (str[1] != '\0')
		return (INVALID);
	if (str[0] == '+')
		return (SUM);
	else if (str[0] == '-')
		return (MIN);
	else if (str[0] == '*')
		return (TIMES);
	else if (str[0] == '/')
		return (DIV);
	else if (str[0] == '%')
		return (MOD);
	else
		return (INVALID);
}