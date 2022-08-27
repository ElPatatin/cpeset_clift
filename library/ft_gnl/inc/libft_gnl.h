/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_gnl.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:11:01 by cpeset-c          #+#    #+#             */
/*   Updated: 2022/08/27 19:39:46 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_GNL_H
# define LIBFT_GNL_H

# include "../../libft/inc/libft.h"

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE	(int)1
# endif

char	*get_next_line(int fd);
char	*ft_save_buff(char *buff);
char	*ft_get_line(char *buff);
char	*ft_read_save(int fd, char *buff);

#endif