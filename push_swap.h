/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhorta-c <jhorta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 18:28:53 by jhorta-c          #+#    #+#             */
/*   Updated: 2024/03/19 19:57:20 by jhorta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "libft/libft.h"
#include <unistd.h>
#include <stdlib.h>
#include "print_f/ft_printf.h"
#include <stdbool.h>
#include <limits.h>

typedef struct  s_stack
{
    long    nbr;
    long    index;
    int     push_cost;
    bool    above_mediun;
    bool    cheapest;
    struct s_stack *target;
    struct s_stack *next;
    struct s_stack *prev;
} t_stack;


// Handle errors 

// stack initialization

// Nodes initialialization

// Algorithm

// Commands

// Stack utils

#endif