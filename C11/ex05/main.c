#include "ex05.h"

int main (int argc, char **argv)
{
	int val1;
	int val2;
	int op;

	if (argc != 4)
		return (1);
	val1 = ft_atoi(argv[1]);
	val2 = ft_atoi(argv[3]);
	op = read_operator(argv[2]);
	if (op == INVALID)
	{
		write(1, "0\n", 2);
		return 1;
	}
	if (op == SUM)
	{
		ft_putnbr(ft_sum(val1, val2));
		return 0;
	}
	if (op == MIN)
	{
		ft_putnbr(ft_minus(val1, val2));
		return 0;
	}
	if (op == TIMES)
	{
		ft_putnbr(ft_times(val1, val2));
		return 0;
	}
	if (op == DIV)
	{
		if (!val2){
			ft_putstr(ERR_MSG_DIV);
			return 1;
		}
		ft_putnbr(ft_div(val1, val2));
		return 0;
	}
	if (op == MOD)
	{
		if (!val2){
			ft_putstr(ERR_MSG_DIV);
			return(1);
		}
		ft_putnbr(ft_mod(val1, val2));
		return (0);
	}
}
