/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumothom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 14:18:23 by mumothom          #+#    #+#             */
/*   Updated: 2020/07/16 11:42:43 by mumothom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char *ft_strcpy( char *dest, char *scr)
{
	int i;
	i = 0;

	while (scr[i]) 
	{
		dest[i] = scr [i];
		i++;
	}

	dest[i] = '\0';

	return ( dest );
}

int main()
{
	char *a = "mumothom";
	int i;
	i = 0;
	while(a[i] != '\0')
		i++;
	char b[i];

	printf ("%s", ft_strcpy( b, a ));

}

