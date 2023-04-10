C - argc, argv


Tasks


[0. It ain't wht they call you, it's what you answer to](0-whatsmyname.c)

write a program that prints its name, followed by a new line.
if you rename the program, it will print the new name, without having to compile it again
you should not remove the path before the name of the program

[1. Silence is argument carried out by other means](1-args.c)

write a program that prints the number of arguments passed into it.
your program should print a number, followed by a new line

[2. The best argument against democracy is a five-minute conversation with the average voter](2-args.c)

write a program that prints all arguments it receives.
all arguments should be printed, including the first one
only print one argument per line, ending with a new line

[3. Neither irony nor sarcasm is argument](3-mul.c)

write a program that multiplies two numbers.
your program should print the result of the multiplication, followed by a new line
you can assume that the two numbers and result of the multiplication can be stored in an integer
if the program does not receive two arguments, your prograam should print error, followed by a new line, and return 1

[4. infinity and beyond](4-add.c)

write a program that adds positive numbers.
print the result, followed by a new line
if no number is passed to the program, print 0, followed by a new line
if one of the number contains symbols that are not digits, print Error, followed by a new line, and return 1
you can assume that numbers and the addition of all the numbers can be stored in an int

[5. Minimal number of coins for change](100-change.c)

write a program that prints the minimum number of coins to make change for an amount of money.
usage: ./change cents
where cents is the amount of cents you need to give back
if the number of arguments passed to your program is not exactly 1, print Error, followed by new line, and return 1
you should use atoi to parse the parameter passed to your program
if the number passed as the argument is negative, print 0, followed by a new line
you can use an unlimited number of coins of values 25, 10, 5, 2 and 1 cent
