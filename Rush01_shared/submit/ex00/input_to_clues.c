#include "shell01.h"

//入力の文字列をint配列に変換する
//ex ... "4 3 2 ... 1" -> {4, 3, 2, ..., 1}
void input_to_clues(char *str){
	int i = 0;
	int len = ft_strlen(str);
	if (len % 8 != 7)
	{
		printf("Error\n, 無効な入力形式\n");
		return ;
	}
	size = (len + 1) / 8;
	clues = (int *)malloc(sizeof(int) * (4 * size));
	if (!clues){
		printf("メモリ確保に失敗しました");
		return ;
	}
	while (i < len){
		if (i % 2 == 0){
			if (str[i] < '1' || str[i] > ('0' + size)){
				printf("無効なヒントの値: %c\n", str[i]);
				free(clues);
				return ;
			}
			clues[i / 2] = str[i] - '0';
		}
		else if (str[i] != ' '){
			printf("無効な入力形式\n");
			free(clues);
			return ;
		}
		i++;
	}
}