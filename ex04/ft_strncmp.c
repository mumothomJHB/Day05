/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumothom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 13:31:28 by mumothom          #+#    #+#             */
/*   Updated: 2020/07/16 13:52:04 by mumothom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int ft_strncmp( char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	if ( n == 0)
	{
		return (0);
	}
	while (s1[i] == s2[i] && s1[i] != '\0' && i <=n)
		i++;
	if (s1[i] != s2[i])
		return ( s1[i] - s2[i]);
	return (0);
}

int main ()
	
{
	char s1[30] = "mumothom";
	char s2[40] = "mohtomum";
	char s3[] = "mumothom";
	char s4[] = "mohtomum";

	printf("%d\n", ft_strncmp(s1, s2, 4));
	printf("%d", strncmp(s3, s4, 4));

	return(0);
}
