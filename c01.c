#include <stdio.h>

void	ft_ft(int *nbr);
void	ft_ultimate_ft(int *********nbr);
void	ft_swap(int *a, int *b);
void	ft_div_mod(int a, int b, int *div, int *mod);
void	ft_ultimate_div_mod(int *a, int *b);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
void	ft_rev_int_tab(int *tab, int size);
void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int		num;
	int		*num1;
	int		**num2;
	int		***num3;
	int		****num4;
	int		*****num5;
	int		******num6;
	int		*******num7;
	int		********num8;
	int		a;
	int		b;
	int		div;
	int		mod;
	int		array[] = {1, 2, 3, 4, 5, 6 ,7, 8, 9, 10};
	int		i;

	//Ex00
	num = 12;
	ft_ft(&num);
	if (num == 42)
	{
		printf("Ex00 - OK\n");
	}
	else
	{
		printf("Ex00 - FAILED\n");
	}

	//Ex01
	num = 12;
	num1 = &num;
	num2 = &num1;
	num3 = &num2;
	num4 = &num3;
	num5 = &num4;
	num6 = &num5;
	num7 = &num6;
	num8 = &num7;
	ft_ultimate_ft(&num8);
	if (num == 42)
	{
		printf("Ex01 - OK\n");
	}
	else
	{
		printf("Ex01 - FAILED\n");
	}

	//Ex02
	a = 5;
	b = 10;
	ft_swap(&a, &b);
	if (a == 10 && b == 5)
	{
		printf("Ex02 - OK\n");
	}
	else
	{
		printf("Ex02 - FAILED\n");
	}

	//Ex03
	a = 12;
	b = 10;
	div = 0;
	mod = 0;
	ft_div_mod(a, b, &div, &mod);
	if (div == 1 && mod == 2)
	{
		printf("Ex03 - OK\n");
	}
	else
	{
		printf("Ex03 - FAILED\n");
	}

	//Ex04
	a = 12;
	b = 10;
	ft_ultimate_div_mod(&a, &b);
	if (a == 1 && b == 2)
	{
		printf("Ex04 - OK\n");
	}
	else
	{
		printf("Ex04 - FAILED (a = %d, b = %d)\n", a, b);
	}

	//Ex05
	printf("Ex05 should be: Awesome string\n");
	ft_putstr("Awesome string\n");

	//Ex06
	if (ft_strlen("0123456789") == 10)
	{
		printf("Ex06 - OK\n");
	}
	else
	{
		printf("Ex06 - FAILED\n");
	}

	//Ex07
	ft_rev_int_tab(&array[0], 7);
	printf("Ex07 Numbers should decrease.\n");
	for (i = 0; i < 7; i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n");

	//Ex08
	ft_sort_int_tab(&array[0], 10);
	printf("Ex08 Numbers should increase.\n");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n");
}
