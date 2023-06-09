0x0A. C - Argc, argv

Resources To be updated once I know how to attach documnets

Tasks
- 1-args.c - A program that prints its name, followed by a new line
    - If you rename the program, it will print the new name, without having to compile it again.
    - You should not remove the path before the name of the program.
    - Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-whatsmyname.c -o mynameis`
- 2-args.c - A program that prints the number of arguments passed into it.
    - Your program should print a number, followed by a new line.
    - Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-args.c -o nargs`
- 3-mul.c - A program that multiplies two numbers.
    - Your program should print the result of the multiplication, followed by a new line.
    - You can assume that the two numbers and result of the multiplication can be stored in an integer.
    - If the program does not receive two arguments, your program should print `Error`, followed by a new line, and return `1`.
    - Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-mul.c -o mul`
- 4-ad.c - A program that adds positive numbers
    - Print the result, followed by a new line.
    - If no number is passed to the program, print 0, followed by a new line.
    - If one of the number contains symbols that are not digits, print `Error`, followed by a new line, and return `1`.
    - You can assume that numbers and the addition of all the numbers can be stored in an `int`.
    - Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-add.c -o add`
- 100-change.c - A program that prints the minimum number of coins to make change for an amount of money.
    - Usage: `./change cents`
    - Where `cents` is the amount of cents you need to give back.
    - if the number of arguments passed to your program is not exactly `1`, print `Error`, followed by a new line, and return `1`.
    - You should use `atoi` to parse the parameter passed to your program.
    - If the number passed as the argument is negative, print `0`, followed by a new line.
    - You can use an unlimited number of coins of values 25, 10, 5, 2, and 1 cent.
    - Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-change.c -o change`



