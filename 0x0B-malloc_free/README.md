# 0x0B-malloc_free

## Resources

> Read or watch:

+ [Dynamic memory allocation in C](https://www.youtube.com/watch?v=xDVC3wKjS64)
+ C dynamic memory allocation [Wikipedia](https://en.wikipedia.org/wiki/C_dynamic_memory_allocation)

+ [malloc vs calloc vs realloc in C](https://data-flair.training/blogs/malloc-vs-calloc-vs-realloc-in-c/)

> man or help:

+ malloc
+ free

## After these project, you should know:

+ The difference between automatic and dynamic allocation
+ What is malloc and free and how to use them
+ Why and when use malloc
+ How to use `valgrind` to check for memory leak

---
## Quiz questions

##### Question #0
> How many bytes will this statement allocate?
```
malloc(sizeof(int) * 10)
```
- [x] 40
- [ ] 10
- [ ] 32

##### Question #1
> How many bytes will this statement allocate?
```
malloc(sizeof(char) * 10)
```
- [x] 10
- [ ] 40
- [ ] 20

##### Question #2
> How many bytes will this statement allocate?
```
malloc(sizeof(int) * 4)
```
- [ ] 4
- [x] 16
- [ ] 32
- [ ] 8

##### Question #3
> How many bytes will this statement allocate?
```
malloc((sizeof(char) * 10) + 1)
```
- [ ] 20
- [ ] 1
- [ ] 21
- [x] 11
- [ ] 10

##### Question #4
> How many bytes will this statement allocate?
```
malloc(10)
```
- [ ] 2
- [ ] 4
- [ ] 40
- [x] 10

##### Questionn #5
> How many bytes will this statement allocate?
```
malloc(sizeof(unsigned int) * 2)
```
- [ ] 2
- [x] 8
- [ ] 4

##### Question #6
> What is Valgrind?

- [ ] A container service
- [ ] It's a new step when I compile with gcc
- [ ] It's a program to test a C program in a specific environment
- [x] It's a program to validate memory allocation

---
## Tasks

0. `Float like a butterfly, sting like a bee` - Muhammad Ali

Write a function that creates an array of chars, and initializes it with a specific char.
  + Prototype: `char *create_array(unsigned int size, char c);`

1. `The (wo)man who has no imagination has no wings` - Muhammad Ali

Write a function that returns to a newly allocated space in memory, which contains a copy of the string given as a parameter.
  + Prototype: `char *_strdup(char *str);`
FYI: The standard library provides a similar function: `strdup`. Run `man strdup` to learn more.

2. `He who is not courageous enough to take risks will accomplish nothing in life` - Muhammad Ali

Write a function that concatenates two strings.
  + Prototype: `char *str_concat(char *s1, char *s2);`

3. `If you even dream of beating me you'd better wake up and apologize` - Muhammad Ali

Write a function that returns a pointer to a 2D array of integers.
  + Prototype: `int **alloc_grid(int width, int height);`

4. `It's not bragging if you can back it up` - Muhammad Ali

Write a function that frees a 2D grid previously created by your `alloc_grid` function.
  + Prototype: `void free_grid(int **grid, int height);`

5. `It isn't the mountains ahead to climb that wear you out; it's the pebble in your shoe` - Muhammad Ali

Write a function that concatenates all the arguments of your program.
  + Prototype: `char *argstostr(int ac, char **av);`
  + Returns `NULL` if `ac == 0` or `av == NULL`
  + Returns a pointer to a new string, or `NULL` if it fails.
  + Each argument should be followed by a `\n` in the new string

6. `I will show you how great I am` - Muhammad Ali

Write a function that splits a string into words.
  + Prototype: `char **strtow(char *str);`
  + The function returns a pointer to an array of strings(words)
  + Each element of this array should contain a single word, null-terminated
  + The last element of the returned array should be `NULL`
  + Words are separated by spaces
  + Returns `NULL` if `str == NULL` or `str == ""`
  + If your function fails, it should return `NULL`

---
`By`: Gamachu AD
