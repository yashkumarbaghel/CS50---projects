// headers
#include <stdio.h>
#include <cs50.h>

// functions
void space(int space);
void width( int width );
void width1( int width );

// main
int main(void)
{
    // ask user for height
int height = get_int("height = ");

    // print pyramid of that height
for ( int  i = 1; i <= height; i++ )
{
    space(height - i);
    width(i);
    printf(" ");
    width1(i);
}
}

// print #
void width( int width )
{
    for ( int i = 0; i < width; i ++ )
{
    printf("#");
}
}

// print space
void space(int space)
{
for( int i = 0; i < space; i++ )
{
    printf(" ");
}
}

// print # and change line
 void width1( int width )
{
    for ( int i = 0; i < width; i ++ )
{
    printf("#");
} printf("\n");
}
