# 0x05. C-Pointers, arrays and strings

> A pointer is a variable which contains a memory address. A pointer is simply the address of a piece of data in memory. A pointer variable is a variable that stores the address of that piece of data. Like any other variable it needs to be declared. General form is:
`var_type *var;`

+ The `*` tells that the variable `var` is a pointer that points to a var\_type.
+ The value of var will be a memory address holding a value of type var\_type

`int *ptr;`

> In this example, `ptr` is the name of the variable, of type “pointer to an integer”. Anything that is on the left of the last * before the name of the variable will give you the type that the pointer points to.

`/* ptr2 is a pointer to a char */`

`char *ptr2`

> Because a pointer is like any other variable, the computer will also reserve the right amount of memory for it to store its value. On most 64 bits machines, the size of pointers is 8 bytes.

> To get the address where a pointer is stored, you can use the same technique as for any other variable: use the & operator.

> The real power of pointers is that they can manipulate values stored at the memory address they point to. This is called dereferencing. To do this, you can use the dereference operator `*`.

> Note that * has a different meaning depending on the context (declaring vs dereferencing pointers).

- at declaration, it is used to declare a variable of type pointer to something. Example: `int *n`;
-  when used inside the code it is used to dereference pointers. Example `*n = 98`;

**Arrays vs Pointers**
> In C, an array is NOT a pointer, the variables we declare as arrays do not hold a memory address.

When we declare an array, we use a name to refer to it, but it is only a name. Array names are identifiers that identify the entire array object. They are not pointers to anything. That is why we can not change the value of a 'variable’ which is an array.

But, you can still use the name of the array in your code, and its value will be… the address of the first element of the array. Wait… WAT?

```
gamachu@ubuntu:~$ cat main.c
#include <stdio.h>

/**
 * main - An array is not a pointer, but...
 *
 * Return: Always 0.
 */
int main(void)
{
   int a[98]; /* array */

   printf("a: %p\n", a);
   printf("&a[0]: %p\n", &a[0]);
   return (0);
}
gamachu@ubuntu:~$ gcc main.c -o a && ./a
a: 0x7fffc211caa0
&a[0]: 0x7fffc211caa0
```

> So what is happening here? If arrays are not pointers, why is it that the value of an array is the address of the first element of the same array. Isn’t this the definition of a pointer: “a variable which contains the address”? Well… YES, this is a pointer, but the variable a (the array) is NOT. This is why:

When the name of an array is used in an expression, the array type gets automatically implicitly converted to pointer-to-element type in almost all contexts (this is often referred to as “array type decay”). The resultant pointer is a completely independent temporary value, that is the address of the first element of the array.

```
ubuntu@ip-172-31-63-244:~/julien$ cat 17-main.c
#include <stdio.h>
void f(int *a);

/**
 * main - Illustrating the array type decay
 *
 * Return: Always 0.
 */
int main(void)
{
   int *p;
   int t[10];

   p = t; /* This works because of the auto implicit conversion to (int *) */
   printf("t: %p\n", t);
   printf("&t[0]: %p\n", &t[0]);
   printf("p: %p\n", p);
   f(t);
   return (0);
}

/**
 * f - prints the value of a pointer of type int
 * @a: address of an integer we need to print
 *
 * Return: Nothing.
 */
void f(int *a)
{
   printf("a: %p\n", a);
   return;
}
ubuntu@ip-172-31-63-244:~/julien$ gcc 17-main.c && ./a.out
t: 0x7ffd553e7380
&t[0]: 0x7ffd553e7380
p: 0x7ffd553e7380
a: 0x7ffd553e7380
```

> There are two exceptions to this: when the array name is an operand of `sizeof` or unary `&` (address-of), the name of the array then refers to the array object itself.

**sizeof**
> In the context of sizeof, the name of the array refers to the array object itself (composed of all its elements). Thus, sizeof an array will give you the amount of memory space used by all its elements.

```
gamachu@ubuntu:~$ cat 14-main.c
#include <stdio.h>

/**
 * main - printing the sizeof an array 
 *
 * Return: Always 0.
 */
int main(void)
{
   int array[10];

   printf("sizeof array: %lu\n", sizeof(array));
   return (0);  
}
gamachu@ubuntu:~$ gcc -Wall -Werror -Wextra -pedantic -o sizeofarray 14-main.c && ./sizeofarray
sizeof array: 40  
```
**&**
In the context of &, the name of the array refers to the array object itself (composed of all its elements). So the address-of the array name will give you the address of the whole array, which is the same as the address of its first element.
```
gamachu@ubuntu:~$ cat 18-main.c
#include <stdio.h>

/**
 * main - prints the address of an array
 *
 * Return: Always 0.
 */
int main(void)
{
   char b[98];

   printf("b: %p\n", b);
   printf("&b: %p\n", &b);
   return (0);
}
gamachu@ubuntu:~$ gcc 18-main.c && ./a.out
b: 0x7fff6130ef60
&b: 0x7fff6130ef60
```

As a consequence, the value of b is the same as the value of &b. But they do not have the same type:

+ `b`: in this context, general rule applies, so using b will be evaluated as the address of the first element of the array. Thus, `b` is of type `char *`
+ `&b`: in this context (one of the two exceptions to the general rule), b will be evaluated as the array object itself. so b is of type `char[98]` - an array of 98 characters - and then &b is of type `char (*)[98]`, a pointer to an array of 98 characters.

This is important because when we will manipulate those two pointers, they will behave differently, since the size of their type is different:

+ `sizeof b` is `98` (see above)
+ `sizeof &b` is `8`, (if you are using a regular 64 bits machine) (see below)

```
gamachu@ubuntu:~$ cat 19-main.c
#include <stdio.h>

/**
 * main - prints the size of an array and the address of an array
 *
 * Return: Always 0.
 */
int main(void)
{
   char b[98];

   printf("b: %p\n", b);
   printf("&b: %p\n", &b);
   printf("sizeof(b): %lu\n", sizeof(b));
   printf("sizeof(&b): %lu\n", sizeof(&b));
   return (0);
}
gamachu@ubuntu:~$ gcc 19-main.c && ./a.out
b: 0x7ffe0b9c62f0
&b: 0x7ffe0b9c62f0
sizeof(b): 98
sizeof(&b): 8
```

**Pointers Arithmetic**
Another way to access different elements of an array, is to use this other notation: *(var + x), where var is the name of an array, and x is the (x+1)th element (starting counting elements at 0 of course) of this array. For instance if we declare:

int i[10];  
then, when we will use i in the code, i[5] will be the same as *(i + 5). We already knew that i is evaluated as a pointer to the first element of the array, since i is an array. But now, we also know that i + 5 will be evaluated as a pointer to the 6th element of the array i.

```
gamachu@ubuntu:~$ cat 10-main.c
#include <stdio.h>

/**
 \* main - illustrates pointers arithmetic
 \*
 \* Return: Always 0.
 \*/
int main(void)
{
   int a[5];

   *a = 98; /* same as *(a + 0) */
   *(a + 1) = 198;
   *(a + 2) = 298;
   *(a + 3) = 398;
   *(a + 4) = 498;
   printf("Value of a[0]: %d\n", *a);
   printf("Value of a[1]: %d\n", *(a + 1));
   printf("Value of a[2]: %d\n", *(a + 2));
   printf("Value of a[3]: %d\n", *(a + 3));
   printf("Value of a[4]: %d\n", *(a + 4));
   printf("----------------\n");
   printf("Value of 'a' (also address of a[0]): %p\n", a);
   printf("Address of 'a[1]': %p\n", (a + 1));
   printf("Address of 'a[1]': %p\n", &(*(a + 1)));
   return (0);
}
gamachu@ubuntu:~$ gcc 10-main.c -o array && ./array
Value of a[0]: 98
Value of a[1]: 198
Value of a[2]: 298
Value of a[3]: 398
Value of a[4]: 498
----------------
Value of 'a' (also address of a[0]): 0x7ffff8f19240
Address of 'a[1]': 0x7ffff8f19244
Address of 'a[1]': 0x7ffff8f19244
```

But wait a second, if the value of a is `0x7ffff8f19240`, how come `a + 1 == 0x7ffff8f19244` and not `0x7ffff8f19241`?
This is the pointers arithmetic. The computer knows that a points to an integer. The computer also knows that the size of an integer in memory is sizeof(int) bytes - in this case 4 bytes - and concludes that the next element of this type will be stored 4 bytes later in memory.

If this works for arrays, which are evaluated as pointers in this context, this means that this arithmetic also works for “regular” pointers.

```
gamachu@ubuntu:~$ cat main.c
#include <stdio.h>

/**
 * main - pointers arithmetic
 *
 * Return: Always 0.
 */
int main(void)
{
   int *p;
   int a[2];
   int n;

   p = &n;
   printf("p = &n;\np: %p\n", p);
   printf("p + 1: %p\n", p + 1);
   printf("p + 2: %p\n", p + 2);
   printf("p + 10: %p\n", p + 10);
   /* possible since a is evaluated */
   /* as an int * in this context */
   p = a;
   printf("p = a;\np: %p\np + 1: %p\n", p, p + 1);
   return (0);
}
gamachu@ubuntu:~$ gcc main.c && ./a.out
p = &n;
p: 0x7ffd90a8cd2c
p + 1: 0x7ffd90a8cd30
p + 2: 0x7ffd90a8cd34
p + 10: 0x7ffd90a8cd54
p = a;
p: 0x7ffd90a8cd30
p + 1: 0x7ffd90a8cd34
```

**Strings**
> Of course, we can also create an array of chars. It would work exactly the same way.

```
gamachu@ubuntu:~$ cat 12-main.c
#include <stdio.h>

/**
 * main - Creates an array of chars and prints it
 *
 * Return: Always 0.
 */
int main(void)
{
   char a[6];

   *a = 'S';
   *(a + 1) = 'c';
   *(a + 2) = 'h';
   a[3] = 'o';
   *(a + 4) = 'o';
   a[5] = 'l';
   printf("%c%c%c%c%c%c\n", a[0], a[1], a[2], a[3],
              a[4], a[5]);
   return (0);
}
gamachu@ubuntu:~$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -o achar 12-main.c && ./achar
School
gamachu@ubuntu:~$
```

> That would be one way to store strings, but this is not very efficient. If we wanted to store a very long text, imagine how much time would we spend storing each character of the string in our array!
Fortunately, we can also use text in double quotes ".

`char a[7] = "School";`

You probably noticed that in this example, we used an array of 7 characters to store a string of 6 characters. This is because in C, strings end with the char '\0' (ascii value = 0).

In the above example, note that this statement will actually copy the string “School” into the variable a. Strings also have values in C: the address of their first character in memory:

```
gamachu@ubuntu:~$ cat 13-main.c && gcc 13-main.c && ./a.out
#include <stdio.h>

/**
 * main - Prints the value of a string
 *
 * Return: Always 0.
 */
int main(void)
{
   char a[7] = "School";

   printf("%s\n", a);
   printf("Value of the last char of a: %d\n", a[9]);
   printf("Value of a: %p\n", a);
   printf("Value of \"School\": %p\n", "School");
   return (0);
}
School
Value of the last char of a: 0
Value of a: 0x7ffe1a23cc50
Value of "School": 0x400749
``` 

> Since every string in C ends with a '\0' we do not need to know their size to use them. By knowing the address of the first character of strings (with a pointer to a char), C functions can easily print them using a loop, one character at a time, until they hit the character '\0'.


## Resources
+ Read `Memory Layout` from [aticleworld.com](https://aticleworld.com/memory-layout-of-c-program/)
+ Read `C Strings` from [tutorialspoint.com](https://www.tutorialspoint.com/cprogramming/c_strings.htm)
+ Read `C Pointers` from [tutorialspoint.com](https://aticleworld.com/memory-layout-of-c-program/)
