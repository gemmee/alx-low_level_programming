# 0x0A-argc\_argv

## Resources
> Read or Watch:

+ [Arguments to main](https://publications.gbdirect.co.uk//c_book/chapter10/arguments_to_main.html)
+ [argc and argv](http://crasseux.com/books/ctutorial/argc-and-argv.html)
+ [What does argc and argv mean?](https://www.youtube.com/watch?v=aP1ijjeZc24)
+ How to use `__attribute__((unused))` or `(void)` to compile functions with unused variables or parameters

## Quiz questions
1. What is `argv[0]`
- [ ] NULL
- [ ] The first command line argument
- [x] The program name
- [ ] It does not always exist

2. In the following command, what is `argv[2]`?
```$ ./argv My School is fun```
- [ ] My School
- [ ] fun
- [ ] NULL
- [x] School
- [ ] is
- [ ] My School is fun
- [ ] is fun
- [ ] My
- [ ] ./argv

3. What is `argv`?
- [ ] An array containing the program compilation flags
- [x] An array of size `argc`
- [x] An array containing the program command line arguments

> **Question #3**

In the following command, what is `argv[2]`?
```$ ./argv "My School is fun"```
- [ ] My School
- [ ] fun
- [x] NULL
- [ ] School
- [ ] is
- [ ] My School is fun
- [ ] is fun
- [ ] My
- [ ] ./argv

> **Question #4**

In the following command, what is `argv[2]`?
```$ ./argv "My School" "is fun"```
- [ ] My School
- [ ] fun
- [ ] NULL
- [ ] School
- [ ] is
- [ ] My School is fun
- [x] is fun
- [ ] My
- [ ] ./argv

> **Question #5**

What is `argv[argc]`?
- [ ] The program name
- [x] NULL
- [ ] The first command line argument
- [ ] The last command line argument
- [ ] It does not always exist

> **Question #6**

What is `argc`?
- [x] The number of command line arguments
- [x] The size of the `argv` array
- [ ] The length of the first command line argument
- [ ] A flag set to 1 when command line arguments are present

## Tasks
0. `It ain't what they call you, it's what you answer to`
WAP that prints its name, followed by a new line.

1. `Silence is argument carried out by other means`
WAP that prints the number of arguments passed into it, followed by a new line.

2. `The best argument against democracy is a five-minute conversation with the average voter`
WAP that prints all arguments it receives.

3. `Neither irony nor sarcasm is argument`
WAP that multiplies two numbers passed as an argumentand prints the product, followed by a new line.
If the program does not receive two arguments, print `Error`, followed by a new line.

4. `To infinity and beyond`
WAP that adds positive numbers and prints the result, followed by a new line. 

5. `Minimal Number of Coins for Change`
WAP that prints the minimum number of coins to make for an amount of money.
+ Usage: `./change cents`
+ where `cents` is the amount of cents you need to give back
+ You can use an unlimited number of coins of values 25, 10, 5, 2, and 1 cent
+ You should use `atoi` to parse the parameter passed to your program
+ if the number of arguments passed to your program is not exactly 1, print `Error`, followed by a new line, and return `1`
+ if the number passed as the argument is negative, print `0`, followed by a new line


---
`By`: Gamachu AD
