int valid_format(char *str){
	int i = 0;
	int len = ft_strlen(str);
	int size;
	if (len % 8 != 7)
		return (0);
	size = (len + 1) / 8;
	while (i < len){
		if (i % 2 == 0 && str[i] >= '1')
	}
}