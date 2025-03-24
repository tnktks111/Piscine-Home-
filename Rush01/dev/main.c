#define ERROR "Error\n"
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