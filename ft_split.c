/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pameyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 20:16:50 by pameyer           #+#    #+#             */
/*   Updated: 2024/02/22 20:16:52 by pameyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(char const *s, char c)
{
	int	i;
	int	count;

	if (ft_strlen(s) == 0)
		return (0);
	i = 0;
	count = 0;
	while (s[i] && s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] == c)
		{
			count++;
			while (s[i] && s[i] == c)
				i++;
			continue ;
		}
		i++;
	}
	if (s[i - 1] != c)
		count++;
	return (count);
}

static char	*word_dup(const char *str, int start, int finish)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((finish - start + 1) * sizeof(char));
	while (start < finish)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		index;
	char	**tab;

	tab = ft_calloc(ft_count_words(s, c) + 1, sizeof(char *));
	if (!s || !tab)
		return (NULL);
	i = -1;
	j = 0;
	index = -1;
	while ((size_t)++i <= ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = (int) i;
		else if ((s[i] == c || (size_t) i == ft_strlen(s)) && index >= 0)
		{
			tab[j++] = word_dup(s, index, (int) i);
			index = -1;
		}
	}
	tab[j] = 0;
	return (tab);
}

/*
int	main(int argc, char **argv) {
	char	v[] = "";
	printf("Il y a %li mots", ft_count_words(v, ' '));
}
*/
