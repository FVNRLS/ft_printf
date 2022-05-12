/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_mandatory.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmazurit <rmazurit@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 12:54:44 by rmazurit          #+#    #+#             */
/*   Updated: 2022/05/12 17:14:56 by rmazurit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "testing_header.h"
# include <stdio.h>
# include <limits.h>

int main(void)
{

	/* CHAR TEST WITH %%c */
	int ret1;
	int ret2;
	char ch1 = '@';
	char ch2 = '&';

	printf("\nCHAR TEST WITH %%c:\n");
	ret1 = ft_printf("%c$, %c, THIS IS A PLAIN TEXT WITHOUT ANY FORMAT SPECIFIERS!\n", ch1, ch2);
	ret2 = printf("%c$, %c, THIS IS A PLAIN TEXT WITHOUT ANY FORMAT SPECIFIERS!\n", ch1, ch2);
	printf("Here the return of ft_printf: 	%d\n", ret1);
	printf("Here the return of printf: 	%d\n", ret2);


	/* STRING TEST WITH %%s */
	char str1[] = "This is the first format specifier#&.';?/!";
	char str2[] = "This is the second format specifier!";

	printf("\nSTRING TEST WITH %%s:\n");
	ret1 = ft_printf("%s, %s, THIS IS A PLAIN TEXT WITHOUT ANY FORMAT SPECIFIERS!\n", str1, str2);
	ret2 = printf("%s, %s, THIS IS A PLAIN TEXT WITHOUT ANY FORMAT SPECIFIERS!\n", str1, str2);
	printf("Here the return of ft_printf: 	%d\n", ret1);
	printf("Here the return of printf: 	%d\n", ret2);


	/* POINTER TEST WITH %%p*/
	int i = -2147483648;
	int j = 2147483647;
	int l = 0;
	int	*ptr1;
	int	*ptr2;
	int	*ptr3;
	int	*ptr4;

	ptr1 = &i;
	ptr2 = &j;
	ptr3 = &l;
	ptr4 = NULL;

	printf("\nPOINTER TEST WITH %%p:\n");
	ret1 = ft_printf("%p, %p, %p %p THIS IS A PLAIN TEXT WITHOUT ANY FORMAT SPECIFIERS!\n", ptr1, ptr2, ptr3, ptr4);
	ret2 = printf("%p, %p, %p %p THIS IS A PLAIN TEXT WITHOUT ANY FORMAT SPECIFIERS!\n", ptr1, ptr2, ptr3, ptr4);
	printf("Here the return of ft_printf: 	%d\n", ret1);
	printf("Here the return of printf: 	%d\n", ret2);


	/* DECIMAL (BASE 10) NUMBER TEST WITH %d*/
	i = -2147483648;
	j = 2147483647;
	l = 0;

	printf("\nDECIMAL (BASE 10) NUMBER TEST WITH  %%d:\n");
	ret1 = ft_printf("%d, %d, %d THIS IS A PLAIN TEXT WITHOUT ANY FORMAT SPECIFIERS!\n", i, j, l);
	ret2 = printf("%d, %d, %d THIS IS A PLAIN TEXT WITHOUT ANY FORMAT SPECIFIERS!\n", i, j, l);
	printf("Here the return of ft_printf: 	%d\n", ret1);
	printf("Here the return of printf: 	%d\n", ret2);


	/* INTEGER IN BASE 10 TEST WITH %i*/
	i = -2147483648;
	j = 2147483647;
	l = 0;

	printf("\nINTEGER IN BASE 10 TEST WITH %%i:\n");
	ret1 = ft_printf("%i, %i, %i THIS IS A PLAIN TEXT WITHOUT ANY FORMAT SPECIFIERS!\n", i, j, l);
	ret2 = printf("%i, %i, %i THIS IS A PLAIN TEXT WITHOUT ANY FORMAT SPECIFIERS!\n", i, j, l);
	printf("Here the return of ft_printf: 	%d\n", ret1);
	printf("Here the return of printf: 	%d\n", ret2);


	/* UNSIGNED DECIMAL (BASE 10) TEST WITH %u*/
	unsigned int k;
	
	i = -2147483648;
	j = 0;
	k = 4294967295;

	printf("\nUNSIGNED DECIMAL (BASE 10) TEST WITH %%u:\n");
	ret1 = ft_printf("%u, %u, %u THIS IS A PLAIN TEXT WITHOUT ANY FORMAT SPECIFIERS!\n", i, j, k);
	ret2 = printf("%u, %u, %u THIS IS A PLAIN TEXT WITHOUT ANY FORMAT SPECIFIERS!\n", i, j, k);
	printf("Here the return of ft_printf: 	%d\n", ret1);
	printf("Here the return of printf: 	%d\n", ret2);


	/* HEXADECIMAL (BASE 16) LOWERCASE TEST WITH %x */
	i = -2147483648; //-2147483648
	j = 0;
	k = 42949627; //4294967295

	printf("\nHEXADECIMAL (BASE 16) LOWERCASE TEST WITH %%x\n");
	ret1 = ft_printf("%x%x%x THIS IS A PLAIN TEXT WITHOUT ANY FORMAT SPECIFIERS!\n", i, j, k);
	ret2 = printf("%x%x%x THIS IS A PLAIN TEXT WITHOUT ANY FORMAT SPECIFIERS!\n", i, j, k);
	printf("Here the return of ft_printf: 	%d\n", ret1);
	printf("Here the return of printf: 	%d\n", ret2);


	/* HEXADECIMAL (BASE 16) UPPERCASE TEST WITH %X */
	printf("\nHEXADECIMAL (BASE 16) UPPERCASE TEST WITH %%X\n");
	ret1 = ft_printf("%X %X %X THIS IS A PLAIN TEXT WITHOUT ANY FORMAT SPECIFIERS!\n", i, j, k);
	ret2 = printf("%X %X %X THIS IS A PLAIN TEXT WITHOUT ANY FORMAT SPECIFIERS!\n", i, j, k);
	printf("Here the return of ft_printf: 	%d\n", ret1);
	printf("Here the return of printf: 	%d\n", ret2);


	/* TEST WITH % SIGN */
	printf("\nTEST WITH %% SIGN\n");
	ret1 = ft_printf("%%%%, %%, %% THIS IS A PLAIN TEXT WITHOUT ANY FORMAT SPECIFIERS!\n");
	ret2 = printf("%%%%, %%, %% THIS IS A PLAIN TEXT WITHOUT ANY FORMAT SPECIFIERS!\n");
	printf("Here the return of ft_printf: 	%d\n", ret1);
	printf("Here the return of printf: 	%d\n", ret2);
	
	
	// /**********************************************************************************/
	// /**********************************************************************************/
	// 								/* ADDITIONAL TESTS*/
	// printf("\n------------ADDITIONAL TESTS------------\n");
	
	// printf("\n\n------------CHAR TESTS------------\n");
	// printf("\n------------ TEST 1 ------------\n");
	// ret1 = ft_printf("1, 2, 3, -d test, testing, 0.4s sound, 1, 2, 3xp, sound, -*dtest");
	// printf("\n");
	// ret2 = printf("1, 2, 3, -d test, testing, 0.4s sound, 1, 2, 3xp, sound, -*dtest");
	// printf("\n");
	// printf("Here the return of ft_printf: 	%d\n", ret1);
	// printf("Here the return of printf: 	%d\n", ret2);
	
	// printf("\n------------ TEST 2 ------------\n");
	// ret1 = ft_printf("%c", 'a');
	// write(1, "\n", 1);
	// ret2 = printf("%c", 'a');
	// printf("\nHere the return of ft_printf: 	%d\n", ret1);
	// printf("Here the return of printf: 	%d\n", ret2);
	
	// printf("\n------------ TEST 3 ------------\n");
	// ret1 = ft_printf("%c%c%c*", '\0', '1', 1);
	// write(1, "\n", 1);
	// ret2 = printf("%c%c%c*", '\0', '1', 1);
	// printf("\nHere the return of ft_printf: 	%d\n", ret1);
	// printf("Here the return of printf: 	%d\n", ret2);
	
	// printf("\n------------ TEST 4 ------------\n");
	// ret1 = ft_printf("%c small string", 'a');
	// write(1, "\n", 1);
	// ret2 = printf("%c small string", 'a');
	// printf("\nHere the return of ft_printf: 	%d\n", ret1);
	// printf("Here the return of printf: 	%d\n", ret2);

	// printf("\n------------ TEST 5 ------------\n");
	// ret1 = ft_printf("%c small string", 'a');
	// write(1, "\n", 1);
	// ret2 = printf("%c small string", 'a');
	// printf("\nHere the return of ft_printf: 	%d\n", ret1);
	// printf("Here the return of printf: 	%d\n", ret2);

	// printf("\n------------ TEST 6 ------------\n");
	// ret1 = ft_printf("the char is: %c", 'a');
	// write(1, "\n", 1);
	// ret2 = printf("the char is: %c", 'a');
	// printf("\nHere the return of ft_printf: 	%d\n", ret1);
	// printf("Here the return of printf: 	%d\n", ret2);

	// printf("\n------------ TEST 7 ------------\n");
	// ret1 = ft_printf("the char is: %c", '\0');
	// write(1, "\n", 1);
	// ret2 = printf("the char is: %c", '\0');
	// printf("\nHere the return of ft_printf: 	%d\n", ret1);
	// printf("Here the return of printf: 	%d\n", ret2);

	// printf("\n------------ TEST 7 ------------\n");
	// ret1 = ft_printf("n%cs", 'a');
	// write(1, "\n", 1);
	// ret2 = printf("n%cs", 'a');
	// printf("\nHere the return of ft_printf: 	%d\n", ret1);
	// printf("Here the return of printf: 	%d\n", ret2);

	// printf("\n------------ TEST 8 ------------\n");
	// ret1 = ft_printf("%c%c%c%c%c", 'a', 'i', 'u', 'e', 'o');
	// write(1, "\n", 1);
	// ret2 = printf("%c%c%c%c%c", 'a', 'i', 'u', 'e', 'o');
	// printf("\nHere the return of ft_printf: 	%d\n", ret1);
	// printf("Here the return of printf: 	%d\n", ret2);

	// printf("\n------------ TEST 9 ------------\n");
	// ret1 = ft_printf("l%cl%cl%cl%cl%c", 'a', 'i', 'u', 'e', 'o');
	// write(1, "\n", 1);
	// ret2 = printf("l%cl%cl%cl%cl%c", 'a', 'i', 'u', 'e', 'o');
	// printf("\nHere the return of ft_printf: 	%d\n", ret1);
	// printf("Here the return of printf: 	%d\n", ret2);

	// printf("\n------------ TEST 10 ------------\n");
	// ret1 = ft_printf("l%cl%cl%cl%cl%c", '\0', '\0', '\0', 'e', '\0');
	// write(1, "\n", 1);
	// ret2 = printf("l%cl%cl%cl%cl%c", '\0', '\0', '\0', 'e', '\0');
	// printf("\nHere the return of ft_printf: 	%d\n", ret1);
	// printf("Here the return of printf: 	%d\n", ret2);

	// printf("\n\n------------STRING TESTS------------\n");
	// printf("\n------------ TEST 11 ------------\n");
	// ret1 = ft_printf("%s", "");
	// printf("\n");
	// ret2 = printf("%s", "");
	// printf("\n");
	// printf("Here the return of ft_printf: 	%d\n", ret1);
	// printf("Here the return of printf: 	%d\n", ret2);
	
	// printf("\n------------ TEST 12 ------------\n");
	// ret1 = ft_printf("this is a %s", "test");
	// printf("\n");
	// ret2 = printf("this is a %s", "test");
	// printf("\n");
	// printf("Here the return of ft_printf: 	%d\n", ret1);
	// printf("Here the return of printf: 	%d\n", ret2);

	// printf("\n------------ TEST 13 ------------\n");
	// ret1 = ft_printf("this is 1 %s with %s %s", "test", "multiple", "strings");
	// printf("\n");
	// ret2 = printf("this is 1 %s with %s %s", "test", "multiple", "strings");
	// printf("\n");
	// printf("Here the return of ft_printf: 	%d\n", ret1);
	// printf("Here the return of printf: 	%d\n", ret2);

	// printf("\n------------ TEST 14 ------------\n");
	// ret1 = ft_printf("%s%s%s%s", "This ", "is", " an ugly ", "test");
	// printf("\n");
	// ret2 = printf("%s%s%s%s", "This ", "is", " an ugly ", "test");
	// printf("\n");
	// printf("Here the return of ft_printf: 	%d\n", ret1);
	// printf("Here the return of printf: 	%d\n", ret2);
	
	// printf("\n------------ TEST 15 ------------\n");
	// ret1 = ft_printf("%s", "This is a rather simple test.");
	// printf("\n");
	// ret2 = printf("%s", "This is a rather simple test.");
	// printf("\n");
	// printf("Here the return of ft_printf: 	%d\n", ret1);
	// printf("Here the return of printf: 	%d\n", ret2);
	
	// printf("\n------------ TEST 16 ------------\n");
	// ret1 = ft_printf("%s", "-2");
	// printf("\n");
	// ret2 = ft_printf("%s", "-2");
	// printf("\n");
	// printf("Here the return of ft_printf: 	%d\n", ret1);
	// printf("Here the return of printf: 	%d\n", ret2);
		
	// printf("\n------------ TEST 17 ------------\n");
	// ret1 = ft_printf("%s", "-24");
	// printf("\n");
	// ret2 = printf("%s", "-24");
	// printf("\n");
	// printf("Here the return of ft_printf: 	%d\n", ret1);
	// printf("Here the return of printf: 	%d\n", ret2);

	// printf("\n------------ TEST 18 ------------\n");
	// ret1 = ft_printf("%s", "-stop");
	// printf("\n");
	// ret2 = printf("%s", "-stop");
	// printf("\n");
	// printf("Here the return of ft_printf: 	%d\n", ret1);
	// printf("Here the return of printf: 	%d\n", ret2);

	// printf("\n------------ TEST 19 ------------\n");
	// ret1 = ft_printf("%s", "-0003");
	// printf("\n");
	// ret2 = printf("%s", "-0003");
	// printf("\n");
	// printf("Here the return of ft_printf: 	%d\n", ret1);
	// printf("Here the return of printf: 	%d\n", ret2);

	// printf("\n------------ TEST 20 ------------\n");
	// ret1 = ft_printf("%s", "0x42");
	// printf("\n");
	// ret2 = printf("%s", "0x42");
	// printf("\n");
	// printf("Here the return of ft_printf: 	%d\n", ret1);
	// printf("Here the return of printf: 	%d\n", ret2);

	// printf("\n------------ TEST 21 ------------\n");
	// ret1 = ft_printf("%s", "0x0000042");
	// printf("\n");
	// ret2 = printf("%s", "0x0000042");
	// printf("\n");
	// printf("Here the return of ft_printf: 	%d\n", ret1);
	// printf("Here the return of printf: 	%d\n", ret2);

	// printf("\n------------ TEST 22 ------------\n");
	// ret1 = ft_printf("some naugty tests: %s", "0000%");
	// printf("\n");
	// ret2 = printf("some naugty tests: %s", "0000%");
	// printf("\n");
	// printf("Here the return of ft_printf: 	%d\n", ret1);
	// printf("Here the return of printf: 	%d\n", ret2);

	// printf("\n------------ TEST 23 ------------\n");
	// ret1 = ft_printf("some naugty tests: %s", "    %");
	// printf("\n");
	// ret2 = printf("some naugty tests: %s", "    %");
	// printf("\n");
	// printf("Here the return of ft_printf: 	%d\n", ret1);
	// printf("Here the return of printf: 	%d\n", ret2);

	// printf("\n------------ TEST 24 ------------\n");
	// ret1 = ft_printf("some naugty tests: %s", "%000");
	// printf("\n");
	// ret2 = printf("some naugty tests: %s", "%000");
	// printf("\n");
	// printf("Here the return of ft_printf: 	%d\n", ret1);
	// printf("Here the return of printf: 	%d\n", ret2);

	// printf("\n------------ TEST 25 ------------\n");
	// ret1 = ft_printf("%s", "bea thought but bea forgot the loop that the chars cause she was floaty during the amsterdam siren call. she got me by surprise you probably read my mind that look in your eyes and judging by your own cries you probably read my mind this is a really long string and if you see this you must look at your return values!kthxbai this must have more than 127 chars by now isnt it ok 4242 4 life 1337 code everyday to the moon!");
	// printf("\n");
	// ret2 = printf("%s", "bea thought but bea forgot the loop that the chars cause she was floaty during the amsterdam siren call. she got me by surprise you probably read my mind that look in your eyes and judging by your own cries you probably read my mind this is a really long string and if you see this you must look at your return values!kthxbai this must have more than 127 chars by now isnt it ok 4242 4 life 1337 code everyday to the moon!");
	// printf("\n");
	// printf("Here the return of ft_printf: 	%d\n", ret1);
	// printf("Here the return of printf: 	%d\n", ret2);

	// printf("\n------------ TEST 28 (SEGFAULT //handle SIGABRT ERROR)------------\n");
	// char *null_str = NULL;
	
	// ret1 = ft_printf("%s", null_str);
	// printf("\n");
	// ret2 = printf("%s", null_str);
	// printf("\n");
	// printf("Here the return of ft_printf: 	%d\n", ret1);
	// printf("Here the return of printf: 	%d\n", ret2);

	// printf("\n------------ TEST 29 (SEGFAULT //handle SIGABRT ERROR)------------\n");	
	// ret1 = ft_printf("%s everywhere", null_str);
	// printf("\n");
	// ret2 = printf("%s everywhere", null_str);
	// printf("\n");
	// printf("Here the return of ft_printf: 	%d\n", ret1);
	// printf("Here the return of printf: 	%d\n", ret2);
	
	// printf("\n------------ TEST 30 (SEGFAULT //handle SIGABRT ERROR)------------\n");	
	// ret1 = ft_printf("everywhere %s", null_str);
	// printf("\n");
	// ret2 = printf("everywhere %s", null_str);
	// printf("\n");
	// printf("Here the return of ft_printf: 	%d\n", ret1);
	// printf("Here the return of printf: 	%d\n", ret2);
	
	// printf("\n------------ TEST 31 ------------\n");	
	// ret1 = ft_printf("%s", "h");
	// printf("\n");
	// ret2 = printf("%s", "h");
	// printf("\n");
	// printf("Here the return of ft_printf: 	%d\n", ret1);
	// printf("Here the return of printf: 	%d\n", ret2);
	
	// printf("\n------------ TEST 32 ------------\n");	
	// ret1 = ft_printf("t%st%s", "a", "u");
	// printf("\n");
	// ret2 = printf("t%st%s", "a", "u");
	// printf("\n");
	// printf("Here the return of ft_printf: 	%d\n", ret1);
	// printf("Here the return of printf: 	%d\n", ret2);
	
	// printf("\n------------ TEST 33 ------------\n");	
	// ret1 = ft_printf("%s%s%s%s%s%s", "a", "i", "u", "e", "o", "l");
	// printf("\n");
	// ret2 = printf("%s%s%s%s%s%s", "a", "i", "u", "e", "o", "l");
	// printf("\n");
	// printf("Here the return of ft_printf: 	%d\n", ret1);
	// printf("Here the return of printf: 	%d\n", ret2);
	
	// printf("\n------------ TEST 34 ------------\n");
	// int test = 42;
	
	// ret1 = ft_printf("%p", &test);
	// printf("\n");
	// ret2 = ft_printf("%p", &test);
	// printf("\n");
	// printf("Here the return of ft_printf: 	%d\n", ret1);
	// printf("Here the return of printf: 	%d\n", ret2);
	
	// printf("\n------------ TEST 35 ------------\n");	
	// ret1 = ft_printf("%p is a virtual memory address", &test);
	// printf("\n");
	// ret2 = printf("%p is a virtual memory address", &test);
	// printf("\n");
	// printf("Here the return of ft_printf: 	%d\n", ret1);
	// printf("Here the return of printf: 	%d\n", ret2);

	// printf("\n------------ TEST 36 ------------\n");	
	// ret1 = ft_printf("The address of the answer is %p", &test);
	// printf("\n");
	// ret2 = printf("The address of the answer is %p", &test);
	// printf("\n");
	// printf("Here the return of ft_printf: 	%d\n", ret1);
	// printf("Here the return of printf: 	%d\n", ret2);
	
	// printf("\n------------ TEST 37 ------------\n");	
	// ret1 = ft_printf("The address is %p, so what?", &test);
	// printf("\n");
	// ret2 = printf("The address is %p, so what?", &test);
	// printf("\n");
	// printf("Here the return of ft_printf: 	%d\n", ret1);
	// printf("Here the return of printf: 	%d\n", ret2);
	
	// printf("\n------------ TEST 38 ------------\n");
	// int *ptr = &test;	
	
	// ret1 = ft_printf("A pointer at %p points to %p", &test, &ptr);
	// printf("\n");
	// ret2 = printf("A pointer at %p points to %p", &test, &ptr);
	// printf("\n");
	// printf("Here the return of ft_printf: 	%d\n", ret1);
	// printf("Here the return of printf: 	%d\n", ret2);
	
	// printf("\n------------ TEST 39 (handle SIGABRT ERROR)------------\n");	//TODO: SIGABRT!!!!
	// ret1 = ft_printf("This %p is a very strange address", (void *)(long int)test);
	// printf("\n");
	// ret2= printf("This %p is a very strange address", (void *)(long int)test);
	// printf("\n");
	// printf("Here the return of ft_printf: 	%d\n", ret1);
	// printf("Here the return of printf: 	%d\n", ret2);
	
	// printf("\n------------ TEST 40 (HEAP POINTER)------------\n");
	// char *mallocked = malloc(2);
	
	// ret1 = ft_printf("This %p is an address from the heap", mallocked); 
	// free(mallocked);
	// printf("\n");
	// mallocked = malloc(2);
	// ret2 = printf("This %p is an address from the heap", mallocked); 
	// free(mallocked);
	// printf("\n");
	// printf("Here the return of ft_printf: 	%d\n", ret1);
	// printf("Here the return of printf: 	%d\n", ret2);
	
	// printf("\n------------ TEST 41 (handle SIGABRT ERROR)------------\n");	//TODO: SIGABRT!!!!
	// ret1 = ft_printf("%p", NULL);
	// printf("\n");
	// ret2 = printf("%p", NULL);
	// printf("\n");
	// printf("Here the return of ft_printf: 	%d\n", ret1);
	// printf("Here the return of printf: 	%d\n", ret2);
	
	// printf("\n------------ TEST 42 (handle SIGABRT ERROR)------------\n");	//TODO: SIGABRT!!!!
	// ret1 = ft_printf("The NULL macro represents the %p address", NULL);
	// printf("\n");
	// ret2 = printf("The NULL macro represents the %p address", NULL);
	// printf("\n");
	// printf("Here the return of ft_printf: 	%d\n", ret1);
	// printf("Here the return of printf: 	%d\n", ret2);
	
	// printf("\n------------ TEST 43 (handle SIGABRT ERROR)------------\n");	//TODO: Wrong output!!!!
	// ret1 = ft_printf("This %p is even stranger", (void *)-1);
	// printf("\n");
	// ret2 = ft_printf("This %p is even stranger", (void *)-1);
	// printf("\n");
	// printf("Here the return of ft_printf: 	%d\n", ret1);
	// printf("Here the return of printf: 	%d\n", ret2);
	
	// printf("\n\n------------DECIMAL TEST with %%d and %%i------------\n");
	// printf("\n------------ TEST 44 ------------\n");
	// ret1 = ft_printf("%d", 0);
	// printf("\n");
	// ret2 = printf("%d", 0);
	// printf("\n");
	// printf("Here the return of ft_printf: 	%d\n", ret1);
	// printf("Here the return of printf: 	%d\n", ret2);

	// printf("\n------------ TEST 45 ------------\n");
	// ret1 = ft_printf("%d", 10);
	// printf("\n");
	// ret2 = printf("%d", 10);
	// printf("\n");
	// printf("Here the return of ft_printf: 	%d\n", ret1);
	// printf("Here the return of printf: 	%d\n", ret2);
	
	// printf("\n------------ TEST 46 ------------\n");
	// ret1 = ft_printf("%d, %d", 10, 20);
	// printf("\n");
	// ret2 = printf("%d, %d", 10, 20);
	// printf("\n");
	// printf("Here the return of ft_printf: 	%d\n", ret1);
	// printf("Here the return of printf: 	%d\n", ret2);

	// printf("\n------------ TEST 47 ------------\n");
	// ret1 = ft_printf("%d%d%d%d", 10, 20, 30, 5);
	// printf("\n");
	// ret2 = printf("%d%d%d%d", 10, 20, 30, 5);
	// printf("\n");
	// printf("Here the return of ft_printf: 	%d\n", ret1);
	// printf("Here the return of printf: 	%d\n", ret2);

	// printf("\n------------ TEST 48 ------------\n");
	// ret1 = ft_printf("%d %d", 2147483647, (int)-2147483648);
	// printf("\n");
	// ret2 = printf("%d %d", 2147483647, (int)-2147483648);
	// printf("\n");
	// printf("Here the return of ft_printf: 	%d\n", ret1);
	// printf("Here the return of printf: 	%d\n", ret2);

	// printf("\n------------ TEST 49 ------------\n");
	// ret1 = ft_printf("42 - 84 is %d", -42);
	// printf("\n");
	// ret2 = printf("42 - 84 is %d", -42);
	// printf("\n");
	// printf("Here the return of ft_printf: 	%d\n", ret1);
	// printf("Here the return of printf: 	%d\n", ret2);

	// printf("\n------------ TEST 50 ------------\n");
	// ret1 = ft_printf("%d C is the lowest temperature in the universe", -273);
	// printf("\n");
	// ret2 = printf("%d C is the lowest temperature in the universe", -273);
	// printf("\n");
	// printf("Here the return of ft_printf: 	%d\n", ret1);
	// printf("Here the return of printf: 	%d\n", ret2);
	
	// printf("\n------------ TEST 51 ------------\n");
	// ret1 = ft_printf("%dxC is the lowest temperature in the universe", -273);
	// printf("\n");
	// ret2 = printf("%dxC is the lowest temperature in the universe", -273);
	// printf("\n");
	// printf("Here the return of ft_printf: 	%d\n", ret1);
	// printf("Here the return of printf: 	%d\n", ret2);

	// printf("\n------------ TEST 52 ------------\n");
	// ret1 = ft_printf("%dsC is the lowest temperature in the universe", -273);
	// printf("\n");
	// ret2 = printf("%dsC is the lowest temperature in the universe", -273);
	// printf("\n");
	// printf("Here the return of ft_printf: 	%d\n", ret1);
	// printf("Here the return of printf: 	%d\n", ret2);
	
	// printf("\n------------ TEST 53 ------------\n");
	// ret1 = ft_printf("%dpC is the lowest temperature in the universe", -273);
	// printf("\n");
	// ret2 = printf("%dpC is the lowest temperature in the universe", -273);
	// printf("\n");
	// printf("Here the return of ft_printf: 	%d\n", ret1);
	// printf("Here the return of printf: 	%d\n", ret2);
	
	// printf("\n------------ TEST 54 ------------\n");
	// ret1 = ft_printf("%i", 0);
	// printf("\n");
	// ret2 = printf("%i", 0);
	// printf("\n");
	// printf("Here the return of ft_printf: 	%d\n", ret1);
	// printf("Here the return of printf: 	%d\n", ret2);
	
	// printf("\n------------ TEST 55 ------------\n");
	// ret1 = ft_printf("%i", 10);
	// printf("\n");
	// ret2 = printf("%i", 10);
	// printf("\n");
	// printf("Here the return of ft_printf: 	%d\n", ret1);
	// printf("Here the return of printf: 	%d\n", ret2);
	
	// printf("\n------------ TEST 56 ------------\n");
	// ret1 = ft_printf("%i, %i", 10, 23);
	// printf("\n");
	// ret2 = printf("%i, %i", 10, 23);
	// printf("\n");
	// printf("Here the return of ft_printf: 	%d\n", ret1);
	// printf("Here the return of printf: 	%d\n", ret2);
	
	// printf("\n------------ TEST 57 ------------\n");
	// ret1 = ft_printf("%i%i%i%i%i%i%i", 10, 23, -2, 37, 200, -9999, 977779);
	// printf("\n");
	// ret2 = printf("%i%i%i%i%i%i%i", 10, 23, -2, 37, 200, -9999, 977779);
	// printf("\n");
	// printf("Here the return of ft_printf: 	%d\n", ret1);
	// printf("Here the return of printf: 	%d\n", ret2);
	
	// printf("\n------------ TEST 58 ------------\n");
	// ret1 = ft_printf("%i %i", 2147483647, (int)-2147483648);
	// printf("\n");
	// ret2 = printf("%i %i", 2147483647, (int)-2147483648);
	// printf("\n");
	// printf("Here the return of ft_printf: 	%d\n", ret1);
	// printf("Here the return of printf: 	%d\n", ret2);
		
	// printf("\n------------ TEST 59 ------------\n");
	// ret1 = ft_printf("%iq%i", 21447, -21648);
	// printf("\n");
	// ret2 = printf("%iq%i", 21447, -21648);
	// printf("\n");
	// printf("Here the return of ft_printf: 	%d\n", ret1);
	// printf("Here the return of printf: 	%d\n", ret2);
	
	// printf("\n\n------------UNSIGNED INT TEST with %%u ------------\n");
	// printf("\n------------ TEST 60 ------------\n");
	// ret1 = ft_printf("%u", 42);
	// printf("\n");
	// ret2 = printf("%u", 42);
	// printf("\n");
	// printf("Here the return of ft_printf: 	%d\n", ret1);
	// printf("Here the return of printf: 	%d\n", ret2);
	
	// printf("\n------------ TEST 61 ------------\n");
	// ret1 = ft_printf("%u", 0);
	// printf("\n");
	// ret2 = printf("%u", 0);
	// printf("\n");
	// printf("Here the return of ft_printf: 	%d\n", ret1);
	// printf("Here the return of printf: 	%d\n", ret2);
	
	// printf("\n------------ TEST 62 ------------\n");
	// ret1 = ft_printf("%u", 2147483647);
	// printf("\n");
	// ret2 = printf("%u", 2147483647);
	// printf("\n");
	// printf("Here the return of ft_printf: 	%d\n", ret1);
	// printf("Here the return of printf: 	%d\n", ret2);
	
	// printf("\n------------ TEST 63 ------------\n");
	// ret1 = ft_printf("%u", (unsigned int)2147483648);
	// printf("\n");
	// ret2 = printf("%u", (unsigned int)2147483648);
	// printf("\n");
	// printf("Here the return of ft_printf: 	%d\n", ret1);
	// printf("Here the return of printf: 	%d\n", ret2);
	
	// printf("\n------------ TEST 64 ------------\n");
	// ret1 = ft_printf("%u", (unsigned int)3147983649);
	// printf("\n");
	// ret2 = printf("%u", (unsigned int)3147983649);
	// printf("\n");
	// printf("Here the return of ft_printf: 	%d\n", ret1);
	// printf("Here the return of printf: 	%d\n", ret2);
	
	// printf("\n------------ TEST 65 ------------\n");
	// ret1 = ft_printf("%u", (unsigned int)4294967295);
	// printf("\n");
	// ret2 = printf("%u", (unsigned int)4294967295);
	// printf("\n");
	// printf("Here the return of ft_printf: 	%d\n", ret1);
	// printf("Here the return of printf: 	%d\n", ret2);

	// printf("\n------------ TEST 66 ------------\n");
	// ret1 = ft_printf("%u to the power of %u is %u", 2, 32, (unsigned int)4294967295);
	// printf("\n");
	// ret2 = printf("%u to the power of %u is %u", 2, 32, (unsigned int)4294967295);
	// printf("\n");
	// printf("Here the return of ft_printf: 	%d\n", ret1);
	// printf("Here the return of printf: 	%d\n", ret2);

	// printf("\n------------ TEST 67 ------------\n");
	// ret1 = ft_printf("%u %u %u %u", (unsigned int)429896724, 0, 32, (unsigned int)4294967295);
	// printf("\n");
	// ret2 = printf("%u %u %u %u", (unsigned int)429896724, 0, 32, (unsigned int)4294967295);
	// printf("\n");
	// printf("Here the return of ft_printf: 	%d\n", ret1);
	// printf("Here the return of printf: 	%d\n", ret2);

	// printf("\n\n------------LOWERCASE HEX TEST with %%x ------------\n");
	// printf("\n------------ TEST 68 ------------\n");
	// ret1 = ft_printf("%x", 0);
	// printf("\n");
	// ret2 = printf("%x", 0);
	// printf("\n");
	// printf("Here the return of ft_printf: 	%d\n", ret1);
	// printf("Here the return of printf: 	%d\n", ret2);

	// printf("\n------------ TEST 69 ------------\n");
	// ret1 = ft_printf("%x", 1);
	// printf("\n");
	// ret2 = printf("%x", 1);
	// printf("\n");
	// printf("Here the return of ft_printf: 	%d\n", ret1);
	// printf("Here the return of printf: 	%d\n", ret2);
	
	// printf("\n------------ TEST 70 ------------\n");
	// ret1 = ft_printf("%x", 10);
	// printf("\n");
	// ret2 = printf("%x", 10);
	// printf("\n");
	// printf("Here the return of ft_printf: 	%d\n", ret1);
	// printf("Here the return of printf: 	%d\n", ret2);

	// printf("\n------------ TEST 71 ------------\n");
	// ret1 = ft_printf("%x", 16);
	// printf("\n");
	// ret2 = printf("%x", 16);
	// printf("\n");
	// printf("Here the return of ft_printf: 	%d\n", ret1);
	// printf("Here the return of printf: 	%d\n", ret2);
	
	// printf("\n------------ TEST 72 ------------\n");
	// ret1 = ft_printf("%x", 160);
	// printf("\n");
	// ret2 = printf("%x", 160);
	// printf("\n");
	// printf("Here the return of ft_printf: 	%d\n", ret1);
	// printf("Here the return of printf: 	%d\n", ret2);

	// printf("\n------------ TEST 73 ------------\n");
	// ret1 = ft_printf("%x", 255);
	// printf("\n");
	// ret2 = printf("%x", 255);
	// printf("\n");
	// printf("Here the return of ft_printf: 	%d\n", ret1);
	// printf("Here the return of printf: 	%d\n", ret2);

	// printf("\n------------ TEST 74 ------------\n");
	// ret1 = ft_printf("%x", 256);
	// printf("\n");
	// ret2 = printf("%x", 256);
	// printf("\n");
	// printf("Here the return of ft_printf: 	%d\n", ret1);
	// printf("Here the return of printf: 	%d\n", ret2);

	// printf("\n------------ TEST 75 ------------\n");
	// ret1 = ft_printf("%x", 3735929054u);
	// printf("\n");
	// ret2 = printf("%x", 3735929054u);
	// printf("\n");
	// printf("Here the return of ft_printf: 	%d\n", ret1);
	// printf("Here the return of printf: 	%d\n", ret2);

	// printf("\n------------ TEST 76 ------------\n");
	// ret1 = ft_printf("the password is %x", 3735929054u);
	// printf("\n");
	// ret2 = printf("the password is %x", 3735929054u);
	// printf("\n");
	// printf("Here the return of ft_printf: 	%d\n", ret1);
	// printf("Here the return of printf: 	%d\n", ret2);
	
	// printf("\n------------ TEST 77 ------------\n");
	// ret1 = ft_printf("%x is the definitive answer", 66u);
	// printf("\n");
	// ret2 = printf("%x is the definitive answer", 66u);
	// printf("\n");
	// printf("Here the return of ft_printf: 	%d\n", ret1);
	// printf("Here the return of printf: 	%d\n", ret2);

	// printf("\n------------ TEST 78 ------------\n");
	// ret1 = ft_printf("this is the real number: %x", -1u);
	// printf("\n");
	// ret2 = printf("this is the real number: %x", -1u);
	// printf("\n");
	// printf("Here the return of ft_printf: 	%d\n", ret1);
	// printf("Here the return of printf: 	%d\n", ret2);

	// printf("\n\n------------UPPERCASE HEX TEST  with %%X ------------\n");
	// printf("\n------------ TEST 79 ------------\n");
	// ret1 = ft_printf("%X", 0);
	// printf("\n");
	// ret2 = printf("%X", 0);
	// printf("\n");
	// printf("Here the return of ft_printf: 	%d\n", ret1);
	// printf("Here the return of printf: 	%d\n", ret2);

	// printf("\n------------ TEST 80 ------------\n");
	// ret1 = ft_printf("%X", 1);
	// printf("\n");
	// ret2 = printf("%X", 1);
	// printf("\n");
	// printf("Here the return of ft_printf: 	%d\n", ret1);
	// printf("Here the return of printf: 	%d\n", ret2);

	// printf("\n------------ TEST 82 ------------\n");
	// ret1 = ft_printf("%X", 10);
	// printf("\n");
	// ret2 = printf("%X", 10);
	// printf("\n");
	// printf("Here the return of ft_printf: 	%d\n", ret1);
	// printf("Here the return of printf: 	%d\n", ret2);


	// printf("\n------------ TEST 83 ------------\n");
	// ret1 = ft_printf("%X", 16);
	// printf("\n");
	// ret2 = printf("%X", 16);
	// printf("\n");
	// printf("Here the return of ft_printf: 	%d\n", ret1);
	// printf("Here the return of printf: 	%d\n", ret2);
	
	// printf("\n------------ TEST 84 ------------\n");
	// ret1 = ft_printf("%X", 160);
	// printf("\n");
	// ret2 = printf("%X", 160);
	// printf("\n");
	// printf("Here the return of ft_printf: 	%d\n", ret1);
	// printf("Here the return of printf: 	%d\n", ret2);

	// printf("\n------------ TEST 85 ------------\n");
	// ret1 = ft_printf("%X", 255);
	// printf("\n");
	// ret2 = printf("%X", 255);
	// printf("\n");
	// printf("Here the return of ft_printf: 	%d\n", ret1);
	// printf("Here the return of printf: 	%d\n", ret2);

	// printf("\n------------ TEST 86 ------------\n");
	// ret1 = ft_printf("%X", 256);
	// printf("\n");
	// ret2 = printf("%X", 256);
	// printf("\n");
	// printf("Here the return of ft_printf: 	%d\n", ret1);
	// printf("Here the return of printf: 	%d\n", ret2);

	// printf("\n------------ TEST 87 ------------\n");
	// ret1 = ft_printf("%X", 3735929054u);
	// printf("\n");
	// ret2 = printf("%X", 3735929054u);
	// printf("\n");
	// printf("Here the return of ft_printf: 	%d\n", ret1);
	// printf("Here the return of printf: 	%d\n", ret2);

	// printf("\n------------ TEST 88 ------------\n");
	// ret1 = ft_printf("the password is %X", 3735929054u);
	// printf("\n");
	// ret2 = printf("the password is %X", 3735929054u);
	// printf("\n");
	// printf("Here the return of ft_printf: 	%d\n", ret1);
	// printf("Here the return of printf: 	%d\n", ret2);
	
	// printf("\n------------ TEST 89 ------------\n");
	// ret1 = ft_printf("%X is the definitive answer", 66u);
	// printf("\n");
	// ret2 = printf("%X is the definitive answer", 66u);
	// printf("\n");
	// printf("Here the return of ft_printf: 	%d\n", ret1);
	// printf("Here the return of printf: 	%d\n", ret2);

	// printf("\n------------ TEST 90 ------------\n");
	// ret1 = ft_printf("this is the real number: %X", -1u);
	// printf("\n");
	// ret2 = printf("this is the real number: %X", -1u);
	// printf("\n");
	// printf("Here the return of ft_printf: 	%d\n", ret1);
	// printf("Here the return of printf: 	%d\n", ret2);

	// printf("\n\n------------PERCENT TEST with %% SIGN ------------\n");
	// printf("\n------------ TEST 91 ------------\n");
	// ret1 = ft_printf("%%");
	// printf("\n");
	// ret2 = printf("%%");
	// printf("\n");
	// printf("Here the return of ft_printf: 	%d\n", ret1);
	// printf("Here the return of printf: 	%d\n", ret2);

	// printf("\n------------ TEST 92 ------------\n");
	// ret1 = ft_printf("100%%");
	// printf("\n");
	// ret2 = printf("100%%");
	// printf("\n");
	// printf("Here the return of ft_printf: 	%d\n", ret1);
	// printf("Here the return of printf: 	%d\n", ret2);

	// printf("\n------------ TEST 93 ------------\n");
	// ret1 = ft_printf("%%p is how you print a pointer in printf");
	// printf("\n");
	// ret2 = printf("%%p is how you print a pointer in printf");
	// printf("\n");
	// printf("Here the return of ft_printf: 	%d\n", ret1);
	// printf("Here the return of printf: 	%d\n", ret2);

	// printf("\n------------ TEST 94 ------------\n");
	// ret1 = ft_printf("the '%%%%' is used to print a %% in printf");
	// printf("\n");
	// ret2 = printf("the '%%%%' is used to print a %% in printf");
	// printf("\n");
	// printf("Here the return of ft_printf: 	%d\n", ret1);
	// printf("Here the return of printf: 	%d\n", ret2);

	// printf("\n------------ TEST 95 ------------\n");
	// ret1 = ft_printf("%%%%%%%%%%%%%%%%");
	// printf("\n");
	// ret2 = printf("%%%%%%%%%%%%%%%%");
	// printf("\n");
	// printf("Here the return of ft_printf: 	%d\n", ret1);
	// printf("Here the return of printf: 	%d\n", ret2);

	// printf("\n------------ TEST 96 ------------\n");
	// ret1 = ft_printf("%%c%%s%%p%%d%%i%%u%%x%%X%%");
	// printf("\n");
	// ret2 = printf("%%c%%s%%p%%d%%i%%u%%x%%X%%");
	// printf("\n");
	// printf("Here the return of ft_printf: 	%d\n", ret1);
	// printf("Here the return of printf: 	%d\n", ret2);

	// printf("\n\n------------ MIXED TEST ------------\n");
	// printf("\n------------ TEST 97 ------------\n"); //TODO:   97.KO (Wrong output) (Wrong return) ??
	// ret1 = ft_printf("%c - %s - %p %d - %i - %u - %x %X %%", 'a', "test", (void *)0xdeadc0de, 20, -20, -1, -1, 200000000);
	// printf("\n");
	// ret2 = printf("%c - %s - %p %d - %i - %u - %x %X %%", 'a', "test", (void *)0xdeadc0de, 20, -20, -1, -1, 200000000);
	// printf("\n");
	// printf("Here the return of ft_printf: 	%d\n", ret1);
	// printf("Here the return of printf: 	%d\n", ret2);

	// printf("\n------------ TEST 98 ------------\n"); //TODO: wrong output
	// ret1 = ft_printf("%c - %s - %p %d - %i - %u - %x %X %%", '\0', "test", (void *)-1, 20, -20, -1, -1, 200000000);
	// printf("\n");
	// ret2 = printf("%c - %s - %p %d - %i - %u - %x %X %%", '\0', "test", (void *)-1, 20, -20, -1, -1, 200000000);
	// printf("\n");
	// printf("Here the return of ft_printf: 	%d\n", ret1);
	// printf("Here the return of printf: 	%d\n", ret2);

	// printf("\n------------ TEST 99 ------------\n"); //TODO: SIGABRT!
	// ret1 = ft_printf("%c - %s - %p %d - %i - %u - %x %X %%", 'c', "", (void *)-1, 20, -20, -1, -1, 200000000);
	// printf("\n");
	// ret2 = printf("%c - %s - %p %d - %i - %u - %x %X %%", 'c', "", (void *)-1, 20, -20, -1, -1, 200000000);
	// printf("\n");
	// printf("Here the return of ft_printf: 	%d\n", ret1);
	// printf("Here the return of printf: 	%d\n", ret2);

	// printf("\n------------ TEST 100 ------------\n"); //TODO: SIGABRT!
	// ret1 = ft_printf("%i - %s - %p %d - %c - %u - %x %X %%", 20, "", (void *)-1, '\0', -20, -1, -1, 200000000);
	// printf("\n");
	// ret2 = printf("%i - %s - %p %d - %c - %u - %x %X %%", 20, "", (void *)-1, '\0', -20, -1, -1, 200000000);
	// printf("\n");
	// printf("Here the return of ft_printf: 	%d\n", ret1);
	// printf("Here the return of printf: 	%d\n", ret2);

	// printf("\n------------ TEST 101 ------------\n");
	// ret1 = ft_printf("%c - %s - %p %d - %i - %u - %x %X %%", 'b', null_str, NULL, 20, -20, -1, -1, 200000000);
	// printf("\n");
	// ret2 = printf("%c - %s - %p %d - %i - %u - %x %X %%", 'b', null_str, NULL, 20, -20, -1, -1, 200000000);
	// printf("\n");
	// printf("Here the return of ft_printf: 	%d\n", ret1);
	// printf("Here the return of printf: 	%d\n", ret2);

	// printf("\n------------ TEST 102 ------------\n");
	// ret1 = ft_printf("%c %s - %p - %d - %i %u - %x - %X %%", '\0', null_str, (void *)0xdeadc0de, 0, (int)-2147483648, -1, -1, 200000000);
	// printf("\n");
	// ret2 = printf("%c %s - %p - %d - %i %u - %x - %X %%", '\0', null_str, (void *)0xdeadc0de, 0, (int)-2147483648, -1, -1, 200000000);
	// printf("\n");
	// printf("Here the return of ft_printf: 	%d\n", ret1);
	// printf("Here the return of printf: 	%d\n", ret2);

	// printf("\n\n------------ GAVINFIELDER TESTS ------------\n");
	// printf("\n\n------------ CHAR TESTS with %%c------------\n");
	// printf("\n------------ TEST 1: c_allprintable_width ------------\n");
	// ret1 = ft_printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",' ','!','"','#','$','%','&','\'','(',')','*','+',',','-','.','/','0','1','2','3','4','5','6','7','8','9',':',';','<','=','>','?','@','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','[','\\',']','^','_','`','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','{','|','}','~','');
	// printf("\n");
	// ret2 = printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",' ','!','"','#','$','%','&','\'','(',')','*','+',',','-','.','/','0','1','2','3','4','5','6','7','8','9',':',';','<','=','>','?','@','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','[','\\',']','^','_','`','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','{','|','}','~','');
	// printf("\n");
	// printf("Here the return of ft_printf: 	%d\n", ret1);
	// printf("Here the return of printf: 	%d\n", ret2);

	// printf("\n------------ TEST 2: p_basic ------------\n");
	// static char	a01;
	// static unsigned char a02;
	// static short a03;
	// static unsigned short a04;
	// static int a05;
	// static unsigned int a06;
	// static long a07;
	// static unsigned long a08;
	// static long long a09;
	// static unsigned long long a10;
	// static char *a11;
	// static void *a12;
	// ret1 = ft_printf("%p%p%p%p%p%p%p%p%p%p%p%p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	// printf("\n");
	// ret2 = printf("%p%p%p%p%p%p%p%p%p%p%p%p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	// printf("\n");
	// printf("Here the return of ft_printf: 	%d\n", ret1);
	// printf("Here the return of printf: 	%d\n", ret2);

	// printf("\n\n------------TRIPOULE POINTER TEST------------\n");
	// printf("\n------------ TEST 1 ------------\n");
	// ret1 = ft_printf(" %p ", (void *) -1);
	// printf("\n");
	// ret2 = printf(" %p ", (void *) -1);
	// printf("\n");
	// printf("Here the return of ft_printf: 	%d\n", ret1);
	// printf("Here the return of printf: 	%d\n", ret2);
	
	// printf("\n------------ TEST 2 ------------\n");
	// ret1 = ft_printf(" %p ", (void *) 1);
	// printf("\n");
	// ret2 = printf(" %p ", (void *) 1);
	// printf("\n");
	// printf("Here the return of ft_printf: 	%d\n", ret1);
	// printf("Here the return of printf: 	%d\n", ret2);

	// printf("\n------------ TEST 3 ------------\n");
	// ret1 = ft_printf(" %p ",(void *) 15);
	// printf("\n");
	// ret2 = printf(" %p ",(void *) 15);
	// printf("\n");
	// printf("Here the return of ft_printf: 	%d\n", ret1);
	// printf("Here the return of printf: 	%d\n", ret2);

	// printf("\n------------ TEST 4 ------------\n");
	// ret1 = ft_printf(" %p %p ", (void *) LONG_MIN, (void *) LONG_MAX);
	// printf("\n");
	// ret2 = printf(" %p %p ", (void *) LONG_MIN, (void *) LONG_MAX);
	// printf("\n");
	// printf("Here the return of ft_printf: 	%d\n", ret1);
	// printf("Here the return of printf: 	%d\n", ret2);

	// printf("\n------------ TEST 6 ------------\n");
	// ret1 = ft_printf(" %p %p ", (void *) INT_MIN, (void *) INT_MAX);
	// printf("\n");
	// ret2 = printf(" %p %p ", (void *) INT_MIN, (void *) INT_MAX);
	// printf("\n");
	// printf("Here the return of ft_printf: 	%d\n", ret1);
	// printf("Here the return of printf: 	%d\n", ret2);

	// printf("\n------------ TEST 7 ------------\n");
	// ret1 = ft_printf(" %p %p ", (void *) ULONG_MAX, (void *) -ULONG_MAX);
	// printf("\n");
	// ret2 = printf(" %p %p ", (void *) ULONG_MAX, (void *) -ULONG_MAX);
	// printf("\n");
	// printf("Here the return of ft_printf: 	%d\n", ret1);
	// printf("Here the return of printf: 	%d\n", ret2);

	// printf("\n------------ TEST 8 ------------\n");
	// ret1 = ft_printf(" %p %p ", 0, 0);
	// printf("\n");
	// ret2 = printf(" %p %p ", NULL, NULL	);
	// printf("\n");
	// printf("Here the return of ft_printf: 	%d\n", ret1);
	// printf("Here the return of printf: 	%d\n", ret2);


	// printf("\n------------ HEXADECIMAL INPUT TEST ------------\n");
	// ret1 = ft_printf(" %x %X ", 10, 10);
	// printf("\n");
	// ret2 = printf(" %x %X ", 10, 10);
	// printf("\n");
	// printf("Here the return of ft_printf: 	%d\n", ret1);
	// printf("Here the return of printf: 	%d\n", ret2);
	return (0);
}
