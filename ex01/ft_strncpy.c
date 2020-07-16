/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumothom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 12:11:55 by mumothom          #+#    #+#             */
/*   Updated: 2020/07/16 12:26:15 by mumothom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char *ft_strncpy( char *dest, char *scr, unsigned int n)
{
	unsigned int i;

	i = -1;
		while ( ++i < n )
		{ 
			if ( scr [i] == '\0')
				dest[i] = '\0';
			else
				dest[i] = scr[i];
		}
	return ( dest );
}

int main ()
{
	char str[] = "mumothom";
	char dest[] = "there";
		int n = 5;

	printf("%s\n", ft_strncpy(dest, str,n));
	printf("%s\n", ft_strncpy(dest, "qwerty", 4));
	printf("%s\n", ft_strncpy(dest, "z", 1));

	return(0);
}
