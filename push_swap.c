/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 04:29:40 by amounach          #+#    #+#             */
/*   Updated: 2022/07/02 22:18:55 by amounach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int		ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

static int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

static char	*ft_strcpy(char	*dest, char	*src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		*dest = src [i];
		dest++;
		i++;
	}
	return (dest);
}

static int	ft_full_len(int	size, char	**strs, int	sep_len)
{
	int	i;
	int	len;

	len = sep_len * -1;
	i = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]) + sep_len;
		i++;
	}
	return (len);
}

char	*ft_strjoin(int	size, char	**strs, char	*sep)
{
	int		i;
	int		len;
	char	*rtn;

	if (size == 0)
	{
		rtn = (char *)malloc(1);
		return (rtn);
	}
	len = ft_full_len(size, strs, ft_strlen(sep));
	rtn = (char *)malloc(sizeof(char) * (len + 1));
	if (rtn == NULL)
		return (NULL);
	else
	{
		i = -1;
		while (++i < size)
		{
			rtn = ft_strcpy(rtn, strs[i]);
			if (i < size - 1)
				rtn = ft_strcpy(rtn, sep);
		}
	}
	*rtn = 0;
	return (rtn - len);
}

static	char	**free_table(int index, char **tab)
{
	while (index-- >= 0)
		free(tab[index]);
	free(tab);
	return (NULL);
}

static int	ft_count_word(char const *str, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (str[i])
	{
		if (str[i] != c && (str[i + 1] == c || str[i + 1] == '\0'))
			words++;
		i++;
	}
	return (words);
}

static int	word_len(char const *str, char c)
{
	int	len;

	len = 0;
	while (str[len] != c && str[len])
		len++;
	return (len);
}

static char	**allocate(const char *s, int c, int words, char **arr)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	while (i < words)
	{
		while (*s == c)
			s++;
		len = word_len(s, c);
		arr[i] = (char *)malloc(len * sizeof(char) + 1);
		if (!arr)
			return (free_table(i, arr));
		j = 0;
		while (j < len)
			arr[i][j++] = *s++;
		arr[i][j] = '\0';
		i++;
	}
	arr[i] = 0;
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	int		nb_words;
	char	**tab;

	if (!s)
		return (NULL);
	nb_words = ft_count_word(s, c);
	tab = (char **)malloc((nb_words) * sizeof(char *) + 1);
	if (!tab)
		return (NULL);
	allocate(s, c, nb_words, tab);
	return (tab);
}

char    **is_valid_input(int ac, char **str)
{
 	char	*sep;
 	int		i;
	int		j;
    
    i = 1;
    sep = " ";
    str = ft_split(ft_strjoin(ac - 1, &str[i], sep), ' ');
    while(str[i])
    {
        if(!ft_isdigit(*str[i]))
            printf("Error\n");
		j = i + 1;
		while (str[j])
		{
			if (atoi(str[i]) == atoi(str[j])) // Todos:  must change the system function
				printf("Error\nNumbers must not be duplicated!");
			j++;
		}
		i++;
    }
    return (str);
}

int main (int ac, char **av)
{	
	is_valid_input(ac, av);
}
