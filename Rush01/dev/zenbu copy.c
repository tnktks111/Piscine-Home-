#include <stdlib.h>
#include <unistd.h>
#define ERROR "Error\n"

//入力された9個のコマンドライン引数からboardを形成する関数。
int *conv_cline_to_array(char *str){
	int i = 0;
	int *res = (int*)malloc(sizeof(int) * 9);
	while(i < 9){
		if (str[i] != '.'){
			res[i] = str[i] - '0';
		}
		else{
			res[i] = -1;
		}
		i++;
	}
	return (res);
}

void output(int **board){
	int r = 0;
	int c;
	char output[18];
	while (r < 9){
		c = 0;
		while(c < 17){ 
			if (c % 2 == 1)
				output[c] = ' ';
			else
				output[c] = '0' + board[r][c / 2];
			c++;
		}
		output[c] = '\n';
		write(1, output, 18);
		r++;
	}
}

int *set_seen(int *board[]){
	int *seen = (int *)malloc(sizeof(int) * 27);
	int n;
	int r = 0;
	while(r < 9){
		int c = 0;
		while(c < 9){
			if (board[r][c] > 0){
				n = board[r][c] - 1;
				seen[r] |= (1 << n);
				seen[c + 9] |= (1 << n);
				seen[(r / 3) * 3 + (c / 3) + 18] |= (1 << n);
			}
			c++;
		}
		r++;
	}
	return seen;
}

void backtrack(int r, int c, int seen[], int *board[])
{
	int n;
	if (r == 9){
		output(board);
		return;
	}
	if (board[r][c] > 0){
		if (c < 8)
			backtrack(r, c + 1, seen, board);
		else
			backtrack(r + 1, 0, seen, board);
	}
	else{
		n = 0;
		while (n < 9){
			if ((seen[r] & (1 << n)) || (seen[c + 9] & (1 << n) || seen[(r / 3) * 3 + (c / 3) + 18] & (1 << n))){
				n++;
				continue;
			}
			board[r][c] = n + 1;
			seen[r] |= (1 << n);
			seen[c + 9] |= (1 << n);
			seen[(r / 3) * 3 + (c / 3) + 18] |= (1 << n);
			if (c < 8)
				backtrack(r, c + 1, seen, board);
			else
				backtrack(r + 1, 0, seen, board);
			board[r][c] = -1;
			seen[r] ^= (1 << n);
			seen[c + 9] ^= (1 << n);
			seen[(r / 3) * 3 + (c / 3) + 18] ^= (1 << n);
			n++;
		}
	}
}

int main(int argv, char *argc[]){
	int i = 0;
	int **board;
	int *seen;
	
	if (argv != 10){
		write(1, ERROR, 6);
		return(1);
	}
	board = (int **)malloc(sizeof(int *) * 9);
	while (i < 9){
		board[i] = conv_cline_to_array(argc[i + 1]);
		i++;
	}
	seen = set_seen(board);
	backtrack(0, 0, seen, board);
	return(0);
}