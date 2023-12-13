/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btvildia <btvildia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 18:45:50 by btvildia          #+#    #+#             */
/*   Updated: 2023/12/13 17:33:35 by btvildia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 22
# endif

size_t	ft_strlen(char *a);
char	*get_next_line(int fd);
char	*ft_nline(char *s, int c);
char	*ft_strjoin_null(char *s2);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_reallocate(char *s1, char *s2);
void	*ft_memcpy(void *dst, const void *src, size_t n);

#endif
