/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 17:02:58 by brandebr          #+#    #+#             */
/*   Updated: 2023/09/26 18:27:26 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	word_count(char const *s, char c)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			counter++;
			while (s[i] && s[i] != c)
				i++;
		}

		else 
			i++;
	}
	return (counter);
}

char	**ft_split(char const *s, char c)
{
	int	words;
	char	**words_array;

	words = word_count(s, c);
	words_array = (char **)malloc((words + 1) * sizeof(char *));
	if (!s || !words_array)
		return NULL;
	words_array[words] = NULL;

	write(1, "Holleluja", 9); 
	return (0);
}
