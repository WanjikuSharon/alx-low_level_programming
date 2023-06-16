0x0C. C - More malloc, free

Learning Objectives

General

 - How to use the exit function
 - What are the functions calloc and realloc from the standard library and how to use them

Requirements

 - All files are created and compiled on Ubuntu 14.04.4 LTS on gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
 - All files are linted for syntax and style with Betty

Tasks

- 
 - Write a function that allocates memory using malloc.
Prototype: void *malloc_checked(unsigned int b);
Returns a pointer to the allocated memory
if malloc fails, the malloc_checked function should cause normal process termination with a status value of 98
