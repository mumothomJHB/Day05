/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumothom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 12:29:34 by mumothom          #+#    #+#             */
/*   Updated: 2020/07/16 13:05:17 by mumothom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char *ft_strstr( char *str, char *to_find)
{
	int i;
	int j;
	int to_find_length;

	to_find_length = -1;
		while ( to_find[ ++to_find_length]);
		
		i = 0;
		while (str[i])
		{
			j = 0;
			while (str[i=j] == to_find[j])
				j++;
			if ( j == to_find_length )
				return ( str + i );
			i++;
		}

		return (0);
}

int main ()
{ char str[] = "mumothom";
	char to_find[] = "hi";

	printf("%s", ft_strstr(str, to_find));

	return (0);
}

