/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarba-v <dbarba-v@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 19:36:44 by dbarba-v          #+#    #+#             */
/*   Updated: 2024/11/20 19:36:44 by dbarba-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
• Create a function that returns 1 if the string given as a parameter contains only
alphabetical characters, and 0 if it contains any other character.
• Here’s how it should be prototyped :
int ft_str_is_alpha(char *str);
• It should return 1 if str is empty.
*/

int ft_str(char *str)
{
    int counter;

    counter = 0;
    if (str[counter] == '\0')
    {
        return (1);
    }
    while (str[counter] != '\0')
    {
        if ((str[counter] > 'a' && str[counter] < 'z') || \
            (str[counter] > 'A' && str[counter] < 'Z'))
            {
                counter++;
            }
        else
        {
            return (0);
        }
    }
    return (1);
}