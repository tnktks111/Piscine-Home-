int main(int argv, char *argc[]){
	if (argv != 2){
		//エラーハンドリング
	}
	int n = (ft_strlen(argc[1]) - 1) / 8 ;
	int *crews = input_to_crews(*argc[1]);
	int *nums = (int *)malloc(sizeof(int) * n);
	int i = 0;
	while(i < n){
		nums[i] = i + 1;
	}
	int perm_size = factorial(n);
	int **perm = permute(nums, perm_size);
	

}