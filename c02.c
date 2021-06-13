/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c02.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farch <farch@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 20:14:09 by farch             #+#    #+#             */
/*   Updated: 2021/06/12 16:45:24 by farch            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src);

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	ft_str_is_alpha(char *str);

int	ft_str_is_numeric(char *str);

int	ft_str_is_lowercase(char *str);

int	ft_str_is_uppercase(char *str);

int	ft_str_is_printable(char *str);

char	*ft_strupcase(char *str);

char	*ft_strlowcase(char *str);

char	*ft_strcapitalize(char *str);

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

void	ft_putstr_non_printable(char *str);

void	*ft_print_memory(void *addr, unsigned int size);

int	main(void)
{
	char	str_cpy1[5];
	char	str_cpy2[5];
	char	capit_str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	//Ex00
	strcpy(str_cpy1, "tes");
	ft_strcpy(str_cpy2, "tes");
	if (strcmp(str_cpy1, str_cpy2) == 0)
	{
		printf("Ex00 (ft_strcpy): Test 1 OK!\n");
	}
	else
	{
		printf("Ex00 (ft_strcpy): Test 1 ERROR!\n");
		printf("%s   -   %s\n", str_cpy1, str_cpy2);
	}
	strcpy(str_cpy1, "test");
	ft_strcpy(str_cpy2, "test");
	if (strcmp(str_cpy1, str_cpy2) == 0)
	{
		printf("Ex00 (ft_strcpy): Test 2 OK!\n");
	}
	else
	{
		printf("Ex00 (ft_strcpy): Test 2 ERROR!\n");
		printf("%s   -   %s\n", str_cpy1, str_cpy2);
	}

	//Ex01
	strncpy(str_cpy1, "123", 5);
	ft_strncpy(str_cpy2, "123", 5);
	if (strcmp(str_cpy1, str_cpy2) == 0)
	{
		printf("Ex01 (ft_strncpy): Test 1 OK!\n");
	}
	else
	{
		printf("Ex01 (ft_strncpy): Test 1 ERROR!\n");
		printf("%s   -   %s\n", str_cpy1, str_cpy2);
	}
	strncpy(str_cpy1, "asdf", 5);
	ft_strncpy(str_cpy2, "asdf", 5);
	if (strcmp(str_cpy1, str_cpy2) == 0)
	{
		printf("Ex01 (ft_strncpy): Test 2 OK!\n");
	}
	else
	{
		printf("Ex01 (ft_strncpy): Test 2 ERROR!\n");
		printf("%s   -   %s\n", str_cpy1, str_cpy2);
	}

	//Ex02
	if (ft_str_is_alpha("asdf6.sFFDd2") == 0)
	{
		printf("Ex02: Test 1 OK!\n");
	}
	else
	{
		printf("Ex02: Test 1 ERROR!\n");
	}
	if (ft_str_is_alpha("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz") == 1)
	{
		printf("Ex02: Test 2 OK!\n");
	}
	else
	{
		printf("Ex02: Test 2 ERROR!\n");
	}

	//Ex03
	if (ft_str_is_numeric("asdf6.sFFDd2") == 0)
	{
		printf("Ex03: Test 1 OK!\n");
	}
	else
	{
		printf("Ex03: Test 1 ERROR!\n");
	}
	if (ft_str_is_numeric("0123456789") == 1)
	{
		printf("Ex03: Test 2 OK!\n");
	}
	else
	{
		printf("Ex03: Test 2 ERROR!\n");
	}

	//Ex04
	if (ft_str_is_lowercase("asdf6.sFFDd2") == 0)
	{
		printf("Ex04: Test 1 OK!\n");
	}
	else
	{
		printf("Ex04: Test 1 ERROR!\n");
	}
	if (ft_str_is_lowercase("abcdefghijklmnopqrstuvwxyz") == 1)
	{
		printf("Ex04: Test 2 OK!\n");
	}
	else
	{
		printf("Ex04: Test 2 ERROR!\n");
	}

	//Ex05
	if (ft_str_is_uppercase("asdf6.sFFDd2") == 0)
	{
		printf("Ex05: Test 1 OK!\n");
	}
	else
	{
		printf("Ex05: Test 1 ERROR!\n");
	}
	if (ft_str_is_uppercase("ABCDEFGHIJKLMNOPQRSTUVWXYZ") == 1)
	{
		printf("Ex05: Test 2 OK!\n");
	}
	else
	{
		printf("Ex05: Test 2 ERROR!\n");
	}

	//Ex06
	str_cpy1[0] = 127;
	if (ft_str_is_printable(str_cpy1) == 0)
	{
		printf("Ex06: Test 1 OK!\n");
	}
	else
	{
		printf("Ex06: Test 1 ERROR! %s\n", str_cpy1);
	}
	if (ft_str_is_printable("ABCDEFGHIJKLMNOP QR!!@#$%%^&*()STUVWXYZ") == 1)
	{
		printf("Ex06: Test 2 OK!\n");
	}
	else
	{
		printf("Ex06: Test 2 ERROR!\n");
	}

	//Ex07
	if (strcmp(ft_strupcase(str_cpy2), "ASDF") == 0)
	{
		printf("Ex07: Test 1 OK!\n");
	}
	else
	{
		printf("Ex07: Test 1 ERROR! %s\n", str_cpy2);
	}

	//Ex08
	if (strcmp(ft_strlowcase(str_cpy2), "asdf") == 0)
	{
		printf("Ex08: Test 1 OK!\n");
	}
	else
	{
		printf("Ex08: Test 1 ERROR! %s\n", str_cpy2);
	}

	//Ex09
	if (strcmp(ft_strcapitalize(capit_str), "Salut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un") == 0)
	{
		printf("Ex09: Test 1 OK!\n");
	}
	else
	{
		printf("Ex09: Test 1 ERROR! %s\n", capit_str);
	}

	//Ex10
	printf("%lu  -  %d \n", strlcpy(str_cpy1, "1234567", 5), ft_strlcpy(str_cpy2, "1234567", 5));
	if (strcmp(str_cpy1, str_cpy2) == 0)
	{
		printf("Ex10: Test 1 OK!\n");
	}
	else
	{
		printf("Ex10: Test 1 ERROR!\n");
		printf("%s   -   %s\n", str_cpy1, str_cpy2);
	}
	strlcpy(str_cpy1, "asdf", 5);
	ft_strlcpy(str_cpy2, "asdf", 5);
	if (strcmp(str_cpy1, str_cpy2) == 0)
	{
		printf("Ex10: Test 2 OK!\n");
	}
	else
	{
		printf("Ex10: Test 2 ERROR!\n");
		printf("%s   -   %s\n", str_cpy1, str_cpy2);
	}

	//Ex11
	printf("Ex11: Should be: Coucou\\0atu vas bien ?\n");
	ft_putstr_non_printable("Coucou\ntu vas bien ?");
	printf("\n");

	//Ex12
	printf("Ex12:\n");
	ft_print_memory("Lorem\n\ripsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur.", 150);
	return (0);
}
