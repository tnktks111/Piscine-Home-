int	ft_any(char **tab, int(*f)(char*))
{
	while (*tab)
	{
		if(f(*tab++))
			return 1;
	}
	return 0;
}

// int is_single(char *str)
// {
// 	if (str[1] != '\0')
// 		return (0);
// 	return (1);
// }

// #include <stdlib.h>
// #include <stdio.h>
// int main(){
// 	char *str[] = {"ab", "bs", "cc", "sd", NULL};
// 	printf("%d",ft_any(str, is_single));
// 	return (0);
// }