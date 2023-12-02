/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_printf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 07:45:04 by nrobinso          #+#    #+#             */
/*   Updated: 2023/12/02 15:39:05 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>
#include <stdio.h>

int main (void)
{
	int a = -2147483648;
	int b = 2147483647;
	int x = 1234;
	int vsize = 0;
	int fsize = 0;
	unsigned int u = 4294967295;
	unsigned int uz = 0;
	char c = 65;
	char str[] = "";
	char *ptr = NULL;

//	ptr = &c;
	

	printf("\n========== mixed variables  ============\n");

	fsize = ft_printf("\n%clist%d %%old  %u %s list%d\n",c, b, u, str, a);
	   vsize = printf("\n%clist%d %%new  %u %s list%d\n",c, b, u, str, a);
	printf("\nvrai_size = %d", vsize);
	printf("\nfaux_size = %d", fsize);

	printf("\n========== mixed variables  ============\n");


	printf("\n========== ints pos et neg ============\n");
	
	vsize = printf("\nVrai : %d +'a'text %d",a,b);
	printf("   vrai_size = %d\n", vsize);
	fsize = ft_printf("\nFaux : %d +'a'text %d",a,b);
	printf("   faux_size = %d\n", fsize);

	ft_printf("\n========== ints pos et neg ============\n");
	

	
	printf("\n========== no variables just a string  ============\n");

	fsize = ft_printf("\n\f123456789\n");
	vsize = printf("\n\f123456789\n");
	printf("\nvrai_size = %d\n", vsize);
	printf("\nfaux_size = %d\n", fsize);

	printf("\n========== no variables just a string  ============\n");


	printf("\n========== null string  ============\n");


	fsize = ft_printf("%s",(char *)ptr);
	vsize = printf("%s", (char *)ptr);
	printf("\nvrai_size = %d", vsize);
	printf("\nfaux_size = %d", fsize);

	printf("\n========== null string  ============\n");


	printf("\n========== max %%%% string  ============\n");

	   printf("\n%%%%%%%%%%%%%%%%%d",c);
	ft_printf("\n%%%%%%%%%%%%%%%%%d",c);

	printf("\n========== max %%%% string  ============\n");


	fsize = ft_printf("%s", str);
	vsize = printf("%s",str);
	printf("\nvrai_size = %d\n", vsize);
	printf("\nfaux_size = %d\n", fsize);

	fsize = ft_printf("\n%u\n",u);
	vsize = printf("\n%u\n",u);
	printf("\nvrai_unsigned size = %d\n", vsize);
	printf("\nfaux_unsigned size = %d\n", fsize);

	fsize = ft_printf("\nfaux : %u\n",uz);
	vsize = printf("\nVrai : %u\n",uz);
	printf("\nvrai_size = %d\n", vsize);
	printf("\nfaux_size = %d\n", fsize);

	fsize = ft_printf("\nfaux : %s\n","This is a string");
	vsize = printf("\nVrai : %s\n","This is a string");
	printf("\nvrai_size = %d\n", vsize);
	printf("\nfaux_size = %d\n", fsize);

	printf("\n========== empty  string  ============\n");

	fsize = ft_printf("\nfaux : %s\n","");
	vsize = printf("\nVrai : %s\n","");
	printf("\nvrai_size = %d\n", vsize);
	printf("\nfaux_size = %d\n", fsize);

	printf("\n========== empty string  ============\n");



	printf("\n================ hex x  ============\n");

	fsize = ft_printf("\nHex llx faux : %x\n", 2047);
	vsize = printf("\nHex llx Vrai : %x\n", 2047);
	printf("\nvrai_size = %d\n", vsize);
	printf("\nfaux_size = %d\n", fsize);


	printf("\n================ hex x  ============\n");

	printf("\n================ hex X Capitals  ============\n");

	fsize = ft_printf("\nHex faux : %X\n", x);
	vsize = printf("\nHex Vrai : %X\n", x);
	printf("\nvrai_size = %d\n", vsize);
	printf("\nfaux_size = %d\n", fsize);


	printf("\n================ hex X  ============\n");

	printf("\n============= ptr pointer address  ============\n");

	fsize = ft_printf("faux %p\n", ptr);
	vsize = printf("vrai %p\n", ptr);
	printf("\nvrai_size = %d\n", vsize);
	printf("\nfaux_size = %d\n", fsize);

	printf("\n============= ptr pointer address  ============\n");

	printf("\n============= NULL pointer address  ============\n");



	fsize = ft_printf("faux %p\n", (void *)0);
	vsize = printf("vrai %p\n", (void *)0);
	printf("\nvrai_size = %d\n", vsize);
	printf("\nfaux_size = %d\n", fsize);




	printf("\n============= NULL pointer address  ============\n");


	return (0);
}
