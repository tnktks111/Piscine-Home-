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