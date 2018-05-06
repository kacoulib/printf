/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kacoulib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/06 15:50:31 by kacoulib          #+#    #+#             */
/*   Updated: 2018/05/06 15:50:37 by kacoulib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft/libft.h"
# include <stdio.h> // to remove
# include <stdarg.h>
# include <unistd.h>


typedef struct		s_printf
{
	char			content[100];
	int				len;
}					t_printf;


#endif
