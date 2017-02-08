#include <cs50.h>
#include <stdio.h>

void pyramid(int height);
void spaces(int height, int row);
void blocks(int row);

int main(void)
{
    int height;
    do
    {
        printf("Height: ");
        height = get_int();
    }
    while(height<0 || height>23);
    
    pyramid(height);
}



void pyramid(int height)
{
    for(int i = 0; i < height; i++ ){
        spaces(height, i);
        blocks(i);
        printf("  ");
        blocks(i);
        printf("\n");
    }
}

void spaces(int height, int row){
    
    for(int i=0; i < height-row-1; i++){
            printf(" ");
        }
}

void blocks(int row){
    for(int y=0; y < row+1; y++){
            printf("#");
        }
}