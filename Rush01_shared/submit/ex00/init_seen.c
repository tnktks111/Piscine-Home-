#include "shell01.h"
void init_seen(){
	int i;

	seen = (int *)malloc(sizeof(int) * size * 2);
	i = 0;
	while (i < (size * 2))
		seen[i++] = 0;
}