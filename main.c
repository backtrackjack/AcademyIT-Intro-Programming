/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsellars <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 17:07:42 by jsellars          #+#    #+#             */
/*   Updated: 2022/02/23 15:27:01 by jsellars         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <stdio.h>

int	main(void)
{
	char	str[20];
	char	*ret;

	printf("**initialized string variables:\n");
	printf("**str at %p\n**ret at %p\n", &str, &ret);
	printf("Enter your name: ");
	scanf("%21s", str);
	while (str[19] != '\0')
	{
		printf("Name field cannot be more than x characters,");
		printf("try again.\nEnter your name: ");
		ft_bzero(str, 4);
		scanf("%21s", str);
	}
	printf("**value of str after user input: %s\n", str);
	ret = ft_strjoin("Welcome to FDS - ", str);
	printf("**value of ret after ft_strjoin: %s\n", ret);
	printf("%s\n", ret);
	return (0);
}
