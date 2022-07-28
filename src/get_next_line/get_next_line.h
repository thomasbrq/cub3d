/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lblanche <lblanche@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 11:41:58 by lblanche          #+#    #+#             */
/*   Updated: 2022/03/15 11:42:03 by lblanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1000
# endif

char	*get_next_line(int fd);
char	*ft_read_to_save(int fd, char *save);
char	*ft_strchr(char *s, int c);
char	*ft_strjoin(char *save, char *buff);
size_t	ft_strlen(char *s);
char	*ft_find_line(char *save);
char	*ft_new_save(char *save);

#endif
