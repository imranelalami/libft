/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-alam <iel-alam@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 20:54:07 by iel-alam          #+#    #+#             */
/*   Updated: 2024/11/05 21:27:59 by iel-alam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*x;
	unsigned char	cc;

	cc = (unsigned char)c;
	x = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		x[i] = cc;
		i++;
	}
	return (b);
}

int main()
{
    int arr[4] = {0, 0, 0, 0};
    
    ft_memset(arr, 1, sizeof(int));
    
    ft_memset(arr + 1, 3, sizeof(int));
    
    ft_memset(arr + 2, 3, sizeof(int));
    
    ft_memset(arr + 3, 7, sizeof(int));
    
    printf("Array elements:\n");
    for (int i = 0; i < 4; i++)
        printf("arr[%d] = %d\n", i, arr[i]);
        
    return (0);
}

/*int main()
{
	int arr[4] = {0,0,0,0};
	ft_memset(arr,1,sizeof(arr));
	ft_memset(arr,3,sizeof(arr));
	ft_memset(arr,3,sizeof(arr));
	ft_memset(arr,7,sizeof(arr));
	for (int i = 0; i < sizeof(int); i++)
	{
		printf("%d\n", arr[i]);
	}
}*/