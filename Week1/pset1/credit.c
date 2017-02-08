#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int count = 0;
    int first = 0;
    int second = 0;
    long cc_number;
    long thirteen = 0;
    long fourteen = 0;
    long fifteen = 0;
    long sixteen = 0;
    
    do
    {
        printf("Number: ");
        cc_number = get_long_long();
    }
    while(cc_number<0);
    
    while(cc_number)
    {
        if(count % 2 == 0)
        {
            first += cc_number % 10;
        }
        else
        {
            if((cc_number % 10)*2<9)
            {
                second += (cc_number % 10)*2;
            }
            else
            {
                second += ((cc_number % 10)*2) % 10;
                second += ((cc_number % 10)*2)/10;
            }
        }
        count++;
        if(count == 13)
        {
            thirteen = cc_number % 10;
        }
        if(count == 14)
        {
            fourteen = cc_number % 10;
        }
        if(count == 15)
        {
            fifteen = cc_number % 10;
        }
        if(count == 16)
        {
            sixteen = cc_number % 10;
        }
        cc_number /= 10;
    }
    
    if((first+second) % 10 == 0)
    {
        
        if((count == 13 && thirteen == 4) || (count == 16  && sixteen == 4))
            {
                printf("VISA\n");
            }
            
        else if(count == 15 && fifteen == 3 && ( fourteen == 4 || fourteen == 7))
            {
                printf("AMEX\n");
            }
            
        else if(count == 16 && sixteen == 5 && (fifteen == 1 || fifteen == 2 || fifteen == 3 || fifteen == 4 || fifteen == 5))
            {
               printf("MASTERCARD\n");
            }
    }
    else
    {
        printf("INVALID\n");
    }
    
}