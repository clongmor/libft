/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strsplit.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clongmor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 14:31:35 by clongmor          #+#    #+#             */
/*   Updated: 2019/06/05 14:31:40 by clongmor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		*ft_check_splits(char const *s, char c)
{
	size_t	i;
	size_t	count;
	int		*index_array;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && s[i - 1] == c)
		{
			count++;
		}
		i++;
	}
	index_array = (int *)malloc((count + 1) * 4);
	index_array[0] = (count + 1);
	count = 1;
	i = 0;
	while (s[i] != '\0')
	{
 		if (s[i] != c && s[i - 1] == c)
		{
			index_array[count] = i;
			count++;
		}
		i++;
	}
	return (index_array);
}

char    **ft_strsplit(char const *s, char c)
{
    int  i;
    int  k;
    int  j;
    int     *index_array;
    char    **str_array;

    i = 0;
    k = 0;
    index_array = ft_check_splits(s, c);
    str_array = (char **)malloc(index_array[0] *8);
    while (i < index_array[0])
    {
      str_array[i] = (char *)malloc(strlen(s)*1);
      i++;
    }
    str_array[index_array[0] - 1][0] = '\0';
    i = 0;
    j = index_array[1];
    while (s[j])
    {
        while (s[j] != c)
        {
          str_array[i][k] = s[j];
          k++;
          j++;
        }
        if (s[j] == c)
        {
            str_array[i][k] ='\0';
            if (index_array[0] == (i + 2))
              break;
            j = index_array[i + 2];
            k = 0;
            i++;
        }
    }
    return (str_array);
}
