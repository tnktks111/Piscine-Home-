int	ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int i;

	if (length == 1)
		return (1);
	i = 0;
	while (i < length - 1){
		if (f(tab[i], tab[i + 1]) > 0)
			return 0;
		i++;
	}
	return (1);
}

int 	ft_numcmp(int s1, int s2)
{
	return (s1 - s2);
}

#include <stdio.h>
int main(){
	int tab[] = {3,1,5,4,2};
	printf("%d", ft_is_sort(tab, 5, ft_numcmp));
	return (0);
}