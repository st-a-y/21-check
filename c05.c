/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c05.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farch <farch@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 14:14:31 by farch             #+#    #+#             */
/*   Updated: 2021/06/16 23:25:43 by farch            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb);

int	ft_recursive_factorial(int nb);

int	ft_iterative_power(int nb, int power);

int ft_recursive_power(int nb, int power);

int	ft_fibonacci(int index);

int	ft_sqrt(int nb);

int	ft_is_prime(int nb);

int ft_find_next_prime(int nb);

int ft_ten_queens_puzzle(void);

int	main(void)
{
	int i;

	i = -1;
	while (i <= 13)
	{
		printf("Ex00 - Ex01  (%d) --   %d   --   %d\n", i, ft_iterative_factorial(i), ft_recursive_factorial(i));
		i++;
	}

	i = -1;
	while (i <= 31)
	{
		printf("Ex02 - Ex03  -2^(%d) --   %d   --   %d\n", i, ft_iterative_power(-2, i), ft_recursive_power(-2, i));
		i++;
	}

	i = -2;
	while (i <= 46)
	{
		printf("Ex04  (%d) --   %d\n", i, ft_fibonacci(i));
		i++;
	}

	i = -10;
	while (i <= 100)
	{
		printf("Ex05  sqrt(%d) --   %d\n", i, ft_sqrt(i));
		i++;
	}
	printf("Ex06  is_prime(-5): %d\n", ft_is_prime(-5));
	printf("Ex06  is_prime(0): %d\n", ft_is_prime(0));
	printf("Ex06  is_prime(1): %d\n", ft_is_prime(1));
	printf("Ex06  is_prime(4): %d\n", ft_is_prime(4));
	printf("Ex06  is_prime(5): %d\n", ft_is_prime(5));
	printf("Ex06  is_prime(6): %d\n", ft_is_prime(6));
	printf("Ex06  is_prime(8): %d\n", ft_is_prime(8));
	printf("Ex06  is_prime(2147483647): %d\n", ft_is_prime(2147483647));

	int j;
	i = 0;
	j = -2147483648;
	while (i++ <= 50)
	{
		j = ft_find_next_prime(j);
		printf("Ex06 - Ex07  -  %d  - %d\n", j, ft_is_prime(j));
		j++;
	}
	printf("Ex08: %d\n", ft_ten_queens_puzzle());
}
