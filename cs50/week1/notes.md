# Week 1 Notes

## Binary
-Get alphabet, colors, images from sequences of integers

## algorithems
- time to solve vs. size of problem -> O complexity 
- abstrction if you use high level programming

## C

/# include <stdio.h>
int main(void)
{
    printf("hello,world\n");
}

Functions - printf(  )
variable - 
int counter = 0;
type name value

counter = counter + 1;  
same as -> counter += 1;
same as -> counter ++ ;

if (x < y)
{
    printf("x is less then y \n")
}
else
{
    print("x is not less than y\n")
}

Loop: 

while (true) -- Forever
{
    printf("hello, world\n")
}

for (int i = 0; i < 50 ; i++)
{
    printf("hello, world\n");
}

do - while (does the loop action then checks condition)
##user input

string answer = get_string("what's our name?\n");
printf("hello, %s", answer);


#compiler 
source code -> machine code

for c -> $clang filename.c

Name output file
clang -o hello hello.c

-automate the process to compile the code
make hello 

-- Do not use floats for comparison since they are not accurate; 

|| = or



# Unix commands
ls - list all files
cd - change directory
. - name of the current directory
.. - name of the parent directory 
pwd - print working directory 
~ - home directory
cp - copy file (cp file_to_copy new_file)
cp - r dir1 dir3  - copy entire directory (dir1) to new folder

rm - remove 
rm -rf   - remove an entire directory 

mv - move from source to destination (can rename)