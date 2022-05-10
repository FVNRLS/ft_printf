#include <stdio.h>
#include <stdlib.h>

/*

	#   adds a "0X/x" prefix for %X/%x

	-	A minus sign `-' which specifies left adjustment of the output in the indicated
		field;
		A '-' overrides a `0' if both are used;

	+	A `+' character specifying that there should always be a sign placed before the
		number when using signed formats.
		A '+' overrides a space if both are used;

	' '	A space specifying that a blank should be left before a positive number for a
		signed format.

	0   A zero `0' character indicating that zero-padding should be used instead of
		blank-padding.  
		
	.	Precision:
		An optional period, '.', followed by an optional digit string giving a precision which
		specifies the number of digits to appear after the decimal point, 
		If the digit string is missing, the precision is treated as zero;

	123456789	
		Field Width (!!!):
             An optional digit string specifying a field width; if the output string has fewer bytes
             than the field width it will be blank-padded on the left (or right, if the left-adjustment
             indicator has been given).
			 To make up the field width (note that a leading zero is a flag, 
			 but an embedded zero is part of a field width);
*/

int	main(void)
{	
	////////
	printf("\n\n\n\n\n\n\n---------------------- 		NON-DIGIT FORMAT SPECS 		----------------------\n\n");
	////////
	printf("\n********************** 		CHAR TEST		**********************\n");
	printf("\nblank-padding with field width 10\n");
	printf("----------------------------------------------------------------------\n");
	printf("%10c", '@');
	printf("\n----------------------------------------------------------------------\n");
	printf("\n'-' format modifier with field width 300\n");
	printf("----------------------------------------------------------------------\n");
	printf("%-300c", '@');
	printf("----------------------------------------------------------------------\n");
	printf("\n");

	////////
	printf("\n********************** 		STRING TEST		**********************\n");
	printf("\nblank-padding with field width 10\n");
	printf("----------------------------------------------------------------------\n");
	printf("%10s", "HELLO!");
	printf("\n----------------------------------------------------------------------\n");
	printf("\n'-' format modifier with field width 300\n");
	printf("----------------------------------------------------------------------\n");
	printf("%-300s", "HELLO!");
	printf("----------------------------------------------------------------------\n");
	printf("\n");

	////////
	printf("\n**********************		PERCENT SIGN TEST	**********************\n");
	printf("\nzero-padding with field width 10\n");
	printf("----------------------------------------------------------------------\n");
	printf("%010%");
	printf("\n----------------------------------------------------------------------\n");
	printf("\nblank-padding with field width 10\n");
	printf("----------------------------------------------------------------------\n");
	printf("%10%");
	printf("\n----------------------------------------------------------------------\n");
	printf("\n'-' format modifier with field width 300\n");
	printf("----------------------------------------------------------------------\n");
	printf("%-300%");
	printf("----------------------------------------------------------------------\n");
	printf("\n");

	////////
	printf("\n\n********************** 		%%p TEST		**********************\n");
	int	*ptr;

	*ptr = 42;
	printf("\n----------------------------------------------------------------------\n");
	printf("\nblank-padding with field width 20 -> the first 10 are not printed!\n");
	printf("----------------------------------------------------------------------\n");
	printf("%20p", ptr);
	printf("\n----------------------------------------------------------------------\n");
	printf("\n'-' format modifier with field width 300\n");
	printf("----------------------------------------------------------------------\n");
	printf("%-300p", ptr);
	printf("\n----------------------------------------------------------------------\n");
	printf("\n");
	////////


	printf("\n\n\n\n\n\n\n---------------------- 		DIGIT FORMAT SPECS 		----------------------\n\n");
	////////
	printf("\n********************** 		%%d and %%i TEST		**********************\n");
	printf("\nzero-padding with field width 10\n");
	printf("----------------------------------------------------------------------\n");
	printf("%010d", 5);
	printf("\n----------------------------------------------------------------------\n");
	printf("\nblank-padding with field width 10\n");
	printf("----------------------------------------------------------------------\n");
	printf("%10d", 5);
	printf("\n----------------------------------------------------------------------\n");
	printf("\n'-' format modifier with field width 300\n");
	printf("----------------------------------------------------------------------\n");
	printf("%-300d", 5);
	printf("\n----------------------------------------------------------------------\n");
	printf("\n'+' format modifier\n");
	printf("----------------------------------------------------------------------\n");
	printf("%+d", -5);
	printf("\n----------------------------------------------------------------------\n");
	printf("\n' ' format modifier\n");
	printf("----------------------------------------------------------------------\n");
	printf("% d", 5);
	printf("\n----------------------------------------------------------------------\n");
	printf("\n'.' format modifier\n");
	printf("----------------------------------------------------------------------\n");
	printf("%.10d", 5);
	printf("\n----------------------------------------------------------------------\n");
	printf("\n");

	////////
	printf("\n\n********************** 		%%u TEST		**********************\n");
	printf("\nzero-padding with field width 10\n");
	printf("----------------------------------------------------------------------\n");
	printf("%010u", 5);
	printf("\n----------------------------------------------------------------------\n");
	printf("\nblank-padding with field width 10\n");
	printf("----------------------------------------------------------------------\n");
	printf("%10u", 5);
	printf("\n----------------------------------------------------------------------\n");
	printf("\n'-' format modifier with field width 300\n");
	printf("----------------------------------------------------------------------\n");
	printf("%-300u", 5);
	printf("\n----------------------------------------------------------------------\n");
	printf("\n'.' format modifier\n");
	printf("----------------------------------------------------------------------\n");
	printf("%.10u", 5);
	printf("\n----------------------------------------------------------------------\n");
	printf("\n");

	////////
	printf("\n\n********************** 		%%x and %%X TEST		**********************\n");
	printf("\nzero-padding with field width 10\n");
	printf("----------------------------------------------------------------------\n");
	printf("%010x", 0x124ABC);
	printf("\n----------------------------------------------------------------------\n");
	printf("\nblank-padding with field width 10\n");
	printf("----------------------------------------------------------------------\n");
	printf("%10x", 0x124ABC);
	printf("\n----------------------------------------------------------------------\n");
	printf("\n'-' format modifier with field width 300\n");
	printf("----------------------------------------------------------------------\n");
	printf("%-300x", 0x124ABC);
	printf("\n----------------------------------------------------------------------\n");
	printf("\n'.' format modifier\n");
	printf("----------------------------------------------------------------------\n");
	printf("%.10x", 0x124ABC);
	printf("\n");
	printf("%.10X", 0x124ABC);	
	printf("\n----------------------------------------------------------------------\n");
	printf("\n");
	printf("\n'#' format modifier\n");
	printf("----------------------------------------------------------------------\n");
	printf("%#x", 0x124ABC);
	printf("\n");
	printf("%#X", 0x124ABC);
	printf("\n----------------------------------------------------------------------\n");
	printf("\n");




	return (0);
}