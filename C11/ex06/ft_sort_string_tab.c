int 	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i])
		i++;
	return (s1[i] - s2[i]);
}

void swap(char **a, char **b)
{
    char *tmp = *a;
    *a = *b;
    *b = tmp;
}

int partition(char *array[], int left, int right) {
	int i = left;
	int j = right + 1;
	char *pivot;
	
	pivot = array[left];
	while (i < j)
	{
		while (++i <= right && ft_strcmp(array[i], pivot) < 0);
		while (--j >= left && ft_strcmp(array[j], pivot) > 0);
		if (i >= j) break;
		swap(&array[i], &array[j]);
	}
	swap(&array[left], &array[j]);
	return j;
}

void quick_sort(char *array[], int left, int right) {
    if (left < right) {
        int q = partition(array, left, right);
        quick_sort(array, left, q - 1);
        quick_sort(array, q + 1, right);
    }
}

void ft_sort_string_tab(char **tab)
{
	int size;

	size = 0;
	while (tab[size])
		size++;
	quick_sort(tab, 0, size - 1);
}

#include <stdio.h>
int main(){
	char *tab[] = {"apple", "orange", "banana", "kiwi", NULL};
	int size = 4;
	ft_sort_string_tab(tab);
	int i = 0;
	while (i < size){
		printf("%s, ", tab[i++]);
	}
	printf("\n");
	return (0);
}