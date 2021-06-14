/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c03.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farch <farch@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 16:08:02 by farch             #+#    #+#             */
/*   Updated: 2021/06/13 15:23:25 by farch            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2);

int	ft_strncmp(char *s1, char *s2, unsigned int n);

char	*ft_strcat(char *dest, char *src);

char	*ft_strncat(char *dest, char *src, unsigned int nb);

char	*ft_strstr(char *str, char *to_find);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	// Ex00
	if (
		strcmp("12345", "12345") == ft_strcmp("12345", "12345")
		&& strcmp("11344", "12345") == ft_strcmp("11344", "12345")
		&& strcmp("12344", "02343") == ft_strcmp("12344", "02343")
		&& strcmp("asdf", "02zxcv343") == ft_strcmp("asdf", "02zxcv343")
		&& strcmp("45y#$wgsfdg", "45y#$wgsfdg_") == ft_strcmp("45y#$wgsfdg", "45y#$wgsfdg_")
		&& strcmp("45y#$wg", "45y#$wgsfdg_") == ft_strcmp("45y#$wg", "45y#$wgsfdg_")
		&& strcmp("", "") == ft_strcmp("", "")
		&& strcmp("1", "1") == ft_strcmp("1", "1")
		&& strcmp("1", "12") == ft_strcmp("1", "12")
		&& strcmp("12", "1") == ft_strcmp("12", "1")
		&& strcmp("\127", "\127") == ft_strcmp("\127", "\127")
		&& strcmp("\127 ", "\127") == ft_strcmp("\127 ", "\127")
		&& strcmp("\127 ", "\127  ") == ft_strcmp("\127 ", "\127  ")
		&& strcmp("\127 \200", "\127  ") == ft_strcmp("\127 \200", "\127  ")
	)
	{
		printf("Ex00 - OK!\n");
	}
	else
	{
		printf("Ex00 - ERROR!\n");
	}

	// Ex01
	if (
		strncmp("12345", "12345", 3) == ft_strncmp("12345", "12345", 3)
		&& strncmp("11344", "12345", 3) == ft_strncmp("11344", "12345", 3)
		&& strncmp("12344", "02343", 3) == ft_strncmp("12344", "02343", 3)
		&& strncmp("12344", "02343", 0) == ft_strncmp("12344", "02343", 0)
		&& strncmp("12344", "0234323", 10) == ft_strncmp("12344", "0234323", 10)
		&& strncmp("0234323", "12344", 10) == ft_strncmp("0234323", "12344", 10)
		&& strncmp("123", "1234", 10) == ft_strncmp("123", "1234", 10)
		&& strncmp("1234", "123", 10) == ft_strncmp("1234", "123", 10)
		&& strncmp("12", "1", 4) == ft_strncmp("12", "1", 4)
		&& strncmp("\127", "\127", 4) == ft_strncmp("\127", "\127", 4)
		&& strncmp("\127 ", "\127", 4) == ft_strncmp("\127 ", "\127", 4)
		&& strncmp("\127 ", "\127  ", 4) == ft_strncmp("\127 ", "\127  ", 4)
		&& strncmp("\127 \200", "\127  ", 4) == ft_strncmp("\127 \200", "\127  ", 4)
	)
	{
		printf("Ex01 - OK!\n");
	}
	else
	{
		printf("Ex01 - ERROR!\n");
	}

	// Ex02
	char test[20] = "1234";
	if (
		strcat(test, "5678") == ft_strcat(test, "5678")
		&& strcmp(test, "123456785678") == 0
	)
	{
		printf("Ex02 - OK!\n");
	}
	else
	{
		printf("Ex02 - ERROR!\n");
		printf("%s\n", test);
	}

	// Ex03
	char test2[20] = "1234";
	if (
		strncat(test2, "5678", 2) == ft_strncat(test2, "5678", 2)
		&& strcmp(test2, "12345656") == 0
	)
	{
		printf("Ex03 - OK!\n");
	}
	else
	{
		printf("Ex03 - ERROR!\n");
		printf("%s\n", test2);
	}

	// Ex04
	char test3[] = "Hello how are you.";
	if (
		ft_strstr(test3, "llo") == strstr(test3, "llo")
		&& ft_strstr(test3, "567") == strstr(test3, "567")
		&& ft_strstr(test3, "") == strstr(test3, "")
		&& ft_strstr(test3, ".") == strstr(test3, ".")
		&& ft_strstr(test3, "\0") == strstr(test3, "\0")
	)
	{
		printf("Ex04 - OK!\n");
	}
	else
	{
		printf("Ex04 - ERROR!\n");
	}

	// Ex05
	char test4[20] = "12";
	printf("%d  -  %lu\n", ft_strlcat(test4, "34", 20), strlcat(test4, "56", 20));
	printf("%lu  -  %d\n", strlcat(test4, "34", 20), ft_strlcat(test4, "56", 20));
	if (strcmp(test4, "1234563456") == 0)
	{
		printf("Ex05 - OK!\n");
	}
	else
	{
		printf("%s\nEx05 - ERROR!\n", test4);
	}
}
