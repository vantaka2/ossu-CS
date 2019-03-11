#include <cs50.h>
#include <stdio.h>

void repeat (char input, int count)
{
    for (int i=0; i!=count; i++)
    {
        printf("%c",input);
    }
}


int main(void)
{   
    int height;
    do {
        height = get_int("Height: ");
    } while ( height < 1 || height  > 8 );
    
    int cnt = 1;
    while (cnt <= height)
    {
        repeat(' ',height-cnt);
        repeat('#',cnt);
        printf("  ");
        repeat('#',cnt);
        printf("\n");
        cnt ++;
    }
}

