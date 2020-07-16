/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumothom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 13:12:44 by mumothom          #+#    #+#             */
/*   Updated: 2020/07/16 13:22:56 by mumothom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int ft_strcmp( char *s1, char *s2)
{
	int i;
	i = 0;

	while ( s1[i])
	{
		if (s1[i] != s2[i])
			return ( s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

int main ()
{
	char str[] = "B";
		char to_find[] = "A";

		printf("%d", ft_strcmp(str, to_find));
	return (0);
}

