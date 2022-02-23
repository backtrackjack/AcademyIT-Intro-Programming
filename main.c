/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsellars <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 17:07:42 by jsellars          #+#    #+#             */
/*   Updated: 2022/02/23 16:02:33 by jsellars         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <stdio.h>

int	main(void)
{
	char	str[22];
	char	*ret;

	printf(">>initialized string variables:\n");
	printf(">>str at %p\n>>ret at %p\n", &str, &ret);
	printf("Enter your name: ");
	scanf("%21s", str);
	while (ft_strlen(str) > 20)
	{
		printf(">>User input exceeds character limit (20)\n");
		printf("Name field cannot be more than x characters,");
		printf("try again.\nEnter your name: ");
		scanf("%21s", str);
	}
	printf(">>value of str after user input: %s\n", str);
	ret = ft_strjoin("Welcome to FDS - ", str);
	printf(">>value of ret after ft_strjoin: %s\n", ret);
	printf("%s\n", ret);
	return (0);
}
