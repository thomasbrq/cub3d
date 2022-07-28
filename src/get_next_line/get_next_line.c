/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lblanche <lblanche@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 11:41:39 by lblanche          #+#    #+#             */
/*   Updated: 2022/03/15 11:41:48 by lblanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <unistd.h>

char	*ft_read_to_save(int fd, char *save)
{
	char	*buff;
	int		nbr;

	buff = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buff)
		return (NULL);
	nbr = 1;
	while (!ft_strchr(save, '\n') && nbr != 0)
	{
		nbr = read(fd, buff, BUFFER_SIZE);
		if (nbr == -1)
		{
			free(buff);
			return (NULL);
		}
		buff[nbr] = '\0';
		save = ft_strjoin(save, buff);
	}
	free(buff);
	return (save);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*save;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	save = ft_read_to_save(fd, save);
	if (!save)
		return (NULL);
	line = ft_find_line(save);
	save = ft_new_save(save);
	return (line);
}
