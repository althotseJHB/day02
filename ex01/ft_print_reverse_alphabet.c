/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: althotse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 13:57:45 by althotse          #+#    #+#             */
/*   Updated: 2020/07/15 13:57:52 by althotse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


void ft_putchar(char alpha){
  write(1,&alpha,1);
}

void ft_print_alphabet(void)
{
  char alpha;
  alpha = 'z';
  while (alpha >= 'a')
  {
    ft_putchar(alpha);
    alpha--;
  }
}
