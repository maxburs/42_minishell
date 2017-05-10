/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_absolute.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/07 20:27:27 by mburson           #+#    #+#             */
/*   Updated: 2017/01/07 20:27:29 by mburson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <minishell.h>
#include <unistd.h>

int		main(void)
{
  char	*remaindor;
  char	*line;

  remaindor = NULL;
  while (get_next_line(&line, &remaindor))
  {
	  ft_putstr("\e[1m");
	  ft_putstr(line);
	  ft_putstr("\e[0m");
	  ft_putchar('\n');
	  free(line);
	  sleep(3);
  }
  free(line);
  return (0);
}
