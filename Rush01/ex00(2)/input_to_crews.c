#include <stdlib.h>
int *input_to_crews(char *str){
	int i = 0;
	int len = ft_strlen(str);
	int size;
	int *crews;
	if (len % 8 != 7)
		return (NULL);
	size = (len + 1) / 8;
	crews = (int *)malloc(sizeof(int) * (4 * size));
	while (i < len){
		if (i % 2 == 0){
			if (str[i] < '1' || str[i] > ('0' + size))
				return (NULL);
			else
				crews[i / 2] = str[i] - '0';
		}
		else if (str[i] != ' ')
			return (NULL);
		i++;
	}
	return (crews);
}