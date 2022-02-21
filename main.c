/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsellars <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 17:07:42 by jsellars          #+#    #+#             */
/*   Updated: 2022/02/21 18:02:08 by jsellars         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//include libraries for ft_strjoin and I/O functions
#include "libft/libft.h"
#include <stdio.h>

int	main(void)
{
	//initialize variables for input string and return value
	char	str[20];
	char	*ret;
	
	//Console log
	printf("**initialized string variables:\n**str at %p\n**ret at %p\n", &str, &ret);

	//print to the console a prompt for the user to enter name
	printf("Enter your name: ");

	//read input from user and store it in variable
	scanf("%21s", str);
	
	while (str[19] != '\0')
	{
		printf("Name field cannot be more than x characters, try again.\nEnter your name: ");
		ft_bzero(str, 4);
		scanf("%21s", str);
	}
	//Console log
	printf("**value of str after user input: %s\n", str);

	//merge text from requirements and input variable to return string 
	ret = ft_strjoin("Welcome to FDS - ", str);

	//Console log
	printf("**value of ret after ft_strjoin: %s\n", ret);

	//print return string
	printf("%s\n", ret);

	return (0);
}

