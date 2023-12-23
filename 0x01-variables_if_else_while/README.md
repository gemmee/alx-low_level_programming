# 0x00.C - Hello, World


## Requirements

## `General`
- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall` `-Werror` `-Wextra` `-pedantic` `-std=gnu89`
- All your files should end with a new line
- A `README.md` file, at the root of the folderof this project, containing a description of the project
- There should be no errors and no warnings during compilation
- You are not allowed to use `system`
- Your code should use the `Betty` style. It will be checked using `betty-style.pl` and `betty-doc.pl`



# Mandatory tasks

### [0-positive_or_negative.c](./0-positive_or_negative.c)

This program will assign a random number to the variable n each time it is executed. Complete the source code in order to print whether the number stored in the variable n is positive or negative.

- You can find the source code [here](https://github.com/alx-tools/0x01.c/blob/master/0-positive_or_negative_c)
- The variable n will store a different value every time you will run this program
- You don’t have to understand what `rand`, `srand`, `RAND_MAX` do. Please do not touch this code
- The output of the program should be:
    * The number, followed by
         * if the number is greater than 0: `is positive`
         * if the number is 0: `is zero`
         * if the number is less than 0: `is negative`
    * followed by a new line



### [1-last_digit.c](./1-last_digit.c)


This program will assign a random number to the variable n each time it is executed. Complete the source code in order to print the last digit of the number stored in the variable n.

* You can find the source code [here](https://github.com/alx-tools/0x01.c/blob/master/1-last_digit_c)
* The variable n will store a different value every time you run this program
* You don’t have to understand what [rand](https://www.gnu.org/software/libc/manual/html_node/ISO-Random.html), srand, and RAND_MAX do. Please do not touch this code
* The output of the program should be:
     * The string `Last digit of`, followed by
     * n, followed by
     * the string `is`, followed by
         * if the last digit of n is greater than 5: the string `and is greater than 5`
         * if the last digit of n is 0: the string `and is 0`
         * if the last digit of n is less than 6 and not 0: the string and `is less than 6 and not 0`
     * followed by a new line

### [2-print_alphabet](./2-print_alphabet.c)

Write a program that prints the alphabet in lowercase, followed by a new line.

+ You can only use the _putchar_
+ All your code should be in the _main_ function
+ You can only use _putchar_ twice in your code

### [3-print_alphabets](/3-print_alphabets)


Write a program that prints the alphabet in lowercase, and then in uppercase, followed by a new line.

- You can only use the _putchar_ function (every other function (_printf_, _puts_, etc…) is forbidden)
- All your code should be in the _main_ function
- You can only use _putchar_ three times in your code

```
gamachu@ubuntu:~/alx/allp/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-print_alphabet.c -o 2-print_alphabet
gamachu@ubuntu:~/alx/allp/0x01$ ./2-print_alphabet 
abcdefghijklmnopqrstuvwxyz
gamachu@ubuntu:~/alx/allp/0x01$
```


### [4-print_alphabt.c](./4-print_alphabt.c)

Write a program that prints the alphabet in lowercase, followed by a new line.

- Print all the letters except _q_ and _e_
- You can only use the _putchar_ function (every other function (_printf_, _puts_, etc…) is forbidden)
- All your code should be in the _main_ function
- You can only use _putchar_ twice in your code

```
gamachu@ubuntu:~/alx/allp/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-print_alphabt.c -o 4-print_alphabt
gamachu@ubuntu:~/alx/allp/0x01$ ./4-print_alphabt 
abcdfghijklmnoprstuvwxyz
gamachu@ubuntu:~/alx/allp/0x01$ ./4-print_alphabt | grep [eq]
gamachu@ubuntu:~/alx/allp/0x01$
```
 
### [5-print_numbers.c](./5-print_numbers.c)

Write a program that prints all single digit numbers of base 10 starting from 0, followed by a new line.

- All your code should be in the _main_ function


### [6-print_numberz.c](./6-print_numberz.c)

Write a program that prints all single digit numbers of base 10 starting from 0, followed by a new line.

- You are not allowed to use any variable of type _char_
- You can only use the _putchar_ function (every other function (_printf_, _puts_, etc…) is forbidden)
- You can only use _putchar_ **twice** in your code
- All your code should be in the _main_ function


```
gamachu@ubuntu:~/alx/allp/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 6-print_numberz.c -o 6-print_numberz
gamachu@ubuntu:~/alx/allp/0x01$ ./6-print_numberz
0123456789
gamachu@ubuntu:~/alx/allp/0x01$
```

### [7-print_tebahpla.c](7-print_tebahpla.c)

Write a program that prints the lowercase alphabet in reverse, followed by a new line.

- You can only use the _putchar_ function (every other function (_printf_, _puts_, etc…) is forbidden)
- All your code should be in the main function
- You can only use _putchar_ **twice** in your code

### [8-print_base16.c](8-print_base16.c)

Write a program that prints all the numbers of base 16 in lowercase, followed by a new line.

- You can only use the _putchar_ function (every other function (_printf_, _puts_, etc…) is forbidden)
- All your code should be in the _main_ function
- You can only use _putchar_ __three__ times in your code

```
gamachu@ubuntu:~/alx/allp/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 8-print_base16.c -o 8-print_base16
gamachu@ubuntu:~/alx/allp/0x01$ ./8-print_base16
0123456789abcdef
gamachu@ubuntu:~/alx/allp/0x01$
```


### [9-print_comb.c](9-print_comb.c)

Write a program that prints all possible combinations of single-digit numbers.

- Numbers must be separated by `,`, followed by a space
- Numbers should be printed in ascending order
- You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
- All your code should be in the main function
- You can only use putchar four times maximum in your code
- You are not allowed to use any variable of type char

```
gamachu@ubuntu:~/alx/allp/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 9-print_comb.c -o 9-print_comb
gamachu@ubuntu:~/alx/allp/0x01$ ./9-print_comb | cat -e
0, 1, 2, 3, 4, 5, 6, 7, 8, 9$
gamachu@ubuntu:~/alx/allp/0x01$ 
```

## Optional tasks (**advanced**)


### [100-print_comb3.c](./100-print_comb3.c)

Write a program that prints all possible different combinations of two digits.

- Numbers must be separated by `,`, followed by a space
- The two digits must be different
- `01` and `10` are considered the same combination of the two digits 0 and 1
- Print only the smallest combination of two digits
- Numbers should be printed in ascending order, with two digits
- You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
- You can only use putchar five times maximum in your code
- You are not allowed to use any variable of type char
- All your code should be in the main function

```
gamachu@ubuntu:~/alx/allp/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-print_comb3.c -o 100-print_comb3
gamachu@ubuntu:~/alx/allp/0x01$ ./100-print_comb3
01, 02, 03, 04, 05, 06, 07, 08, 09, 12, 13, 14, 15, 16, 17, 18, 19, 23, 24, 25, 26, 27, 28, 29, 34, 35, 36, 37, 38, 39, 45, 46, 47, 48, 49, 56, 57, 58, 59, 67, 68, 69, 78, 79, 89
gamachu@ubuntu:~/alx/allp/0x01$ 
```


### [101-print_comb4.c](./101-print_comb4.c)

Write a program that prints all possible different combinations of three digits.

- Numbers must be separated by `,`, followed by a space
- The three digits must be different
- `012`, `120`, `102`, `021`, `201`, `210` are considered the same combination of the three digits 0, 1 and 2
- Print only the smallest combination of three digits
- Numbers should be printed in ascending order, with three digits
- You can only use the `putchar` function (every other function (printf, puts, etc…) is forbidden)
- You can only use `putchar` six times maximum in your code
- You are not allowed to use any variable of type `char`
- All your code should be in the `main` function

### [102-print_comb5.c](102-print_comb5.c)

Write a program that prints all possible combinations of two two-digit numbers.

- The numbers should range from `0` to `99`
- The two numbers should be separated by a space
- All numbers should be printed with two digits. `1` should be printed as `01`
- The combination of numbers must be separated by comma, followed by a space
- The combinations of numbers should be printed in ascending order
- `00` `01` and `01` `00` are considered as the same combination of the numbers 0 and 1
- You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
- You can only use putchar eight times maximum in your code
- You are not allowed to use any variable of type char
- All your code should be in the main function

--------------------------------------------------
## Resources

### man or help
+ `man 2 time`
+ `man putchar`
+ `man 3 rand`
+ `man ascii`
+ `man grep`
+ `man cat`


### Lectures I found helpful
+ Learning to Program in C by [Jonathan Engelsma](https://www.youtube.com/playlist?list=PLkB3phqR3X40reMCBYSoNUPbDvM4kybMs)
+ C programming by [Stanford University](https://www.youtube.com/playlist?list=PLjn3WmBeabPOUzxcCkzk4jYMGRZMZ6ylF)
+ C Programming Series by [Mike Shah](https://www.youtube.com/playlist?list=PLvv0ScY6vfd8M-Mi_Vyrg7KgISTW3Sklt)
+ C Programming by [Neso Academy](https://www.youtube.com/playlist?list=PLBlnK6fEyqRggZZgYpPMUxdY1CYkZtARR)
+ C Programming Series by [Caleb Curry](https://www.youtube.com/playlist?list=PL_c9BZzLwBRKKqOc9TJz1pP0ASrxLMtp2)
+ Programming in C by [Jenny's Lectures](https://www.youtube.com/playlist?list=PLdo5W4Nhv31a8UcMN9-35ghv8qyFWD9_S)


--------------------------------------------

**Author**: Gamachu AD
