#include <stdlib.h>

int	*ft_map(int *tab, int length, int(*f)(int))
{
	int *res;
	int i;

	i = 0;
	res = (int*)malloc(sizeof(int) * length);
	while(i < length)
	{
		res[i] = f(tab[i]);
		i++;
	}
	return res;
}

int ft_square(int n){
	return (n * n);
}

// #include <stdio.h>
// int main(){
// 	int tab[] = {1, 2, 3, 4};
// 	int *res;
// 	res = ft_map(tab, 4, ft_square);
// 	int i = 0;
// 	while(i < 4)
// 		printf("%d, ", res[i++]);
// 	return (0);
// }