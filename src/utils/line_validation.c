/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   line_validation.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meskelin <meskelin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:12:50 by meskelin          #+#    #+#             */
/*   Updated: 2023/11/14 11:12:51 by meskelin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/cubed.h"

int	validate_line(char *line, char *validate)
{
	char	*temp;

	temp = ft_strtrim(line, validate);
	if (ft_strlen(temp) > 0)
	{
		free(temp);
		free(line);
		ft_put_error_exit("Invalid input file");
		return (0);
	}
	free(temp);
	return (1);
}
