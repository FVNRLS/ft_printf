# ft_printf
The function mimics the basic behavior of the C function printf().

**Mandatory part:**

ft_printf() function handles the following format specifiers:  
- %c Prints a single character. 
- %s Prints a string (as defined in the C convention). 
- %p The void * pointer argument must be printed in hexadecimal format. 
- %d Prints a decimal number (base 10). 
- %i Prints an integer in base 10. 
- %u Prints an unsigned decimal number (base 10). 
- %x Prints a number in hexadecimal (base 16) lowercase format. 
- %X Prints a number in hexadecimal (base 16) uppercase format. 
- %% Prints a percent sign.

**Bonus part:**

Following format modifiers are handled:
- '#'				hash-sign before %x or %X. 
- ' ' (space)		space before signed decimal numbers.
- '+' 				plus-sign before decimal numbers.
- '-'				left-adjustment of printed output.
- '0123456789'		initial right-padding of printed output.
- '0'				zero-padding of printed output.
- '.'				precise output.

**Combinations and exceptions for flags (format modifiers) and :**

A *format specifier* follows this prototype:

%[flags][width][.precision][length]specifier

**Combos to handle with format specifiers:**

Non-digit —> VALID FLAGS:

**%c:**

*flag '0' results in undefined behavior with 'c' conversion specifier*

*flag ‘ . ’ used with 'c' conversion specifier, resulting in undefined behavior*

*flag '#' results in undefined behavior with 'c' conversion specifier*

*flag '+' results in undefined behavior with 'c' conversion specifier*

*flag ' ' results in undefined behavior with 'c' conversion specifier*

- [x]  Field Width (123456789) → right padding with 1 whitespace. Number of whitespaces stands after the % sign!
- [x]  ‘ - ’

**%%:**

*flag ‘ . ’ used with 'c' conversion specifier, resulting in undefined behavior*

*flag '#' results in undefined behavior with 'c' conversion specifier*

*flag '+' results in undefined behavior with 'c' conversion specifier*

*flag ' ' results in undefined behavior with 'c' conversion specifier*

- [x]  0-padding
- [x]  Field Width (123456789)
- [x]  ‘ - ’

**%s:**

*flag '0' results in undefined behavior with 's' conversion specifier*

*flag '#' results in undefined behavior with 's' conversion specifier*

*flag '+' results in undefined behavior with 's' conversion specifier*

*flag ' ' results in undefined behavior with 's' conversion specifier*

- [x]  Field Width (123456789)
- [x]  ‘ - ’
- [x]  ‘ . ’
if %.s or %0s, then string will not be printed → the number after . is the number of chars to be printed

**%p:**

*flag '0' results in undefined behavior with 'p' conversion specifier*

*flag ‘ . ’ used with 'p' conversion specifier, resulting in undefined behavior*

*flag '#' results in undefined behavior with 'p' conversion specifier*

*flag '+' results in undefined behavior with 'p' conversion specifier*

*flag '  ' results in undefined behavior with 'p' conversion specifier*

- [x]  Field Width (123456789) → PADDING STARTS FROM 11 (so the str_len is calculated in), all numbers from 1 to 11 cause no padding!
- [x]  ‘ - ’

**%x / %X:**

*flag '+' results in undefined behavior with 'x' conversion specifier*

*flag '  ' results in undefined behavior with 'x' conversion specifier*

- [x]  0-padding
- [x]  Field Width (123456789)
- [x]  ‘-’ sign
    - 0-padding is ignored
    - *Field Width → whitespaces are printed after the format spec. the form spec. stays left-adjusted*
- [x]  ‘ . ’ sign
    - *puts 0 before the number (eg. if %.10d , then it will be 9 zeros and then the number) / if no number specified, then precision is 0*
- [x]  ‘ #’ sign

Digit:

**%d and %i:**

*flag '#' results in undefined behavior with 'd' conversion specifier*

- [x]  0-padding
- [x]  Field Width (123456789) (blank padding)
- [x]  ‘-’ sign
    - 0-padding is ignored
    - *Field Width → whitespaces are printed after the format spec. the form spec. stays left-adjusted*
- [x]  ‘+’ sign
    - *'+' overrides a space if both are used;*
- [x]  ‘  ’ sign
    - *puts a blank line before the signed number*
- [x]  ‘ . ’ sign
    - *puts 0 before the number (eg. if %.10d , then it will be 9 zeros and then the number) / if no number specified, then precision is 0*

**%u:**

*flag '+' results in undefined behavior with 'u' conversion specifier*

*flag '  ' results in undefined behavior with 'u' conversion specifier*

*flag '#' results in undefined behavior with 'u' conversion specifier*

- [ ]  0-padding
- [ ]  Field Width (123456789)
- [ ]  ‘-’ sign
    - 0-padding is ignored
    - *Field Width → whitespaces are printed after the format spec. the form spec. stays left-adjusted*
- [ ]  ‘ . ’ sign
    - *puts 0 before the number (eg. if %.10d , then it will be 9 zeros and then the number) / if no number specified, then precision is 0*