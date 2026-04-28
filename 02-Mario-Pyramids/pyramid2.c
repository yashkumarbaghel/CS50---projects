#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // ask user for height
    int height;
    do
    {
      height = get_int("Height? ");
    }
     while ( height > 8 || height < 1);

    // print pyramid of that height

    for ( int i = 0; i < height; i++ )
    {
         for ( int j = 1; j < height - i; j++ )
         {
            printf(" ");
         }
         for ( int k = 0; k <= i; k++ )
         {
            printf("#");
         }
         printf(" ");
        for ( int k = 0; k <= i; k++ )
         {
            printf("#");
         } printf("\n");
    }
}
