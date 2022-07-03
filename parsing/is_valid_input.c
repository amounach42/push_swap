/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 20:35:43 by amounach          #+#    #+#             */
/*   Updated: 2022/07/02 22:25:00 by amounach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    **is_valid_input(int ac, char **str)
{
    char	*sep;
    int		i;
	int		j;
    
    i = 1;
    sep = " ";
    str = ft_split(ft_strjoin(ac - 1, str[i], sep), ' ');
    while(str[i])
    {
        if(!ft_isdigit(*str[i]))
            return(printf("Error\n"), 0);
		j = i + 1;
		while (str[j])
		{
			if (atoi(str[i]) == atoi(str[j]))
				 return(printf("Error\nNumbers must not be duplicated!"), 0);
			j++;
		}
		i++;
    }
    return (str);
}

