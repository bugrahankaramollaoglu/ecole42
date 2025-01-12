/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaramol <bkaramol@42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 17:27:49 by bkaramol          #+#    #+#             */
/*   Updated: 2023/10/01 13:17:01 by bkaramol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *new_content)
{
	t_list *new_node;

	new_node = malloc(sizeof(t_list));
	if (!new_node)
		return (0);
	new_node->content = new_content;
	new_node->next = NULL;
	return (new_node);
}

/* ------------------------------------------ */

int main()
{
	t_list *head = NULL;
	t_list *second = NULL;
	t_list *new = NULL;

	head = ft_lstnew("bir");
	second = ft_lstnew("iki");
	new = ft_lstnew("yeni");

	head->next = second;
	second->next = new;

	free(head);
	free(second);
	free(new);

	return 0;
}
