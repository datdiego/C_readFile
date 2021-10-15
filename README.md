# C_readFile
Simple code to read file from compiler, two methods utilized.


## Using command line arguments

The command line arguments are handled using main() function arguments where argc refers to the number of arguments passed, and argv[] is a pointer array which points to each argument passed to the program.

The name of the variable argc stands for "argument count"; argc contains the number of arguments passed to the program. The name of the variable argv stands for "argument vector". A vector is a one-dimensional array, and argv is a one-dimensional array of strings. Each string is one of the arguments that was passed to the program.[[1](https://www.gnu.org/software/libc/manual/html_node/Program-Arguments.html)]

For example, the command line

`gcc -o myprog myprog.c`

would result in the following values internal to GCC:

```
 argc: 4
 argv[0]: gcc
 argv[1]: -o
 argv[2]: myprog
 argv[3]: myprog.c
```

As you can see, the first argument (argv[0]) is the name by which the program was called, in this case gcc. Thus, there will always be at least one argument to a program, and argc will always be at least 1.[[2](http://crasseux.com/books/ctutorial/argc-and-argv.html)]

### readFile_arg.c

This file utilizes the following arguments post compilation before running the program and then prints each line of the file.
This ocde does have a constraint for a `MAX_LINE_SIZE = 256` which can be updated or modified if needed.

To compile and execute the code do the following:

`gcc readFile_arg.c -o readFile_arg`

After compilation, instruct the program to read the next argument as the file to be read.

`readFile_arg inputFile.txt`

This should print the file read by the program.


## Using SCANF

This is the simplest method, in which the program asks the user to input the filename after prompt.

The program then opens said file, however this pogram only opens one file at a time.

Both `C` files can be modified to read several files if needed.

### readFile_scanf.c

This program prompts the user to input the file to open and read.
