int	ft_count_if(char **tab, int lenght, int(*f)(char*))
{
	int count;

	count = 0;
	while(*tab)
	{
		if (f(*tab++))
			count++;
	}
	return (count);
}