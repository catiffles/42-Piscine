/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabrun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/18 19:31:03 by mabrun            #+#    #+#             */
/*   Updated: 2016/07/18 19:31:04 by mabrun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				r;

	r = 0;
	while ((s1[i] || s2[i]) && r == 0 && i < n)
	{
		if (s1[i] != s2[i])
		{
			r = s1[i] - s2[i];
		}
		i++;
	}
	return (r);
}
