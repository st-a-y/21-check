/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farch <farch@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 19:20:06 by farch             #+#    #+#             */
/*   Updated: 2021/06/11 19:28:11 by farch            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar(char c);

void	ft_print_alphabet(void);

void	ft_print_reverse_alphabet(void);

void	ft_print_numbers(void);

void	ft_is_negative(int n);

void	ft_print_comb(void);

void	ft_print_comb2(void);

void	ft_putnbr(int nb);

void	ft_print_combn(int n);

int	main(void)
{
	printf("Ex00:\n");
	ft_putchar('g');
	ft_putchar('o');
	ft_putchar('o');
	ft_putchar('d');
	printf("\n");

	printf("Ex01:\n");
	ft_print_alphabet();
	printf("\n");

	printf("Ex02:\n");
	ft_print_reverse_alphabet();
	printf("\n");

	printf("Ex03:\n");
	ft_print_numbers();
	printf("\n");

	printf("Ex04:\n");
	ft_is_negative(-1);
	ft_is_negative(0);
	ft_is_negative(1);
	printf("\n");

	printf("Ex05:\n");
	ft_print_comb();
	printf("\n");

	printf("Ex06:\n");
	ft_print_comb2();
	printf("\n");

	printf("Ex07:\n");
	ft_putnbr(346);
	printf("\n");

	printf("Ex08:\n");
	ft_print_combn(2);
	printf("\n");
}
