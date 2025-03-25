#include <unistd.h>

int ft_strarr_len(char **strarr)
{
	int i;

	i = 0;
	while (strarr[i])
		i++;
	return (i);
}

void swap(char **a, char **b)
{
    char *tmp = *a;
    *a = *b;
    *b = tmp;
}

int partition(char *array[], int left, int right, int(*cmp)(char *, char *))
{
	int i = left;
	int j = right + 1;
	char *pivot;
	
	pivot = array[left];
	while (i < j)
	{
		while (++i <= right && cmp(array[i], pivot) < 0);
		while (--j >= left && cmp(array[j], pivot) > 0);
		if (i >= j) break;
		swap(&array[i], &array[j]);
	}
	swap(&array[left], &array[j]);
	return j;
}

void quick_sort(char *array[], int left, int right, int(*cmp)(char *, char *)) {
    if (left < right) {
        int q = partition(array, left, right, cmp);
        quick_sort(array, left, q - 1, cmp);
        quick_sort(array, q + 1, right, cmp);
    }
}

void ft_advanced_sort_string_tab(char **tab, int(*cmp)(char *, char *))
{
	int size;

	size = ft_strarr_len(tab);
	quick_sort(tab, 0, size - 1, cmp);
}

int ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i])
		i++;
	return (s1[i] - s2[i]);
}

#include <stdio.h>
int main(){
	char *tab[] = {"apple", "orange", "banana", "kiwi", NULL};
	int size = 4;
	ft_advanced_sort_string_tab(tab, ft_strcmp);
	int i = 0;
	while (i < size){
		printf("%s, ", tab[i++]);
	}
	printf("\n");
	return (0);
}