/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaramol <bkaramol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 16:56:13 by bkaramol          #+#    #+#             */
/*   Updated: 2022/10/12 16:56:16 by bkaramol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main()
{
    char a = 'a';
    char b = 'B';

    while (b <= 'Z')
    {
        write(1, &a, 1);
        write(1, &b, 1);
        // 2şer 2şer arttırıyoruz
        a += 2;
        b += 2;
    }
    write(1, "\n", 1);
    return 0;
}