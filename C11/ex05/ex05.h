#ifndef EX05_H
#define EX05_H

#include <unistd.h>

# define INVALID 0
# define SUM 1
# define MIN 2
# define TIMES 3
# define DIV 4
# define MOD 5
# define ERR_MSG_DIV "Stop : division by zero"

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int n);
int		ft_strlen(char *str);
int		ft_atoi(char *str);
int		read_operator(char *str);
int		ft_sum(int num1, int num2);
int		ft_minus(int num1, int num2);
int		ft_times(int num1, int num2);
int		ft_div(int num1, int num2);
int		ft_mod(int num1, int num2);
void	ft_putchar(char c);

#endif