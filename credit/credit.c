#include <cs50.h>
#include <stdio.h>

bool checksum(long credit);
int checkcard(long credit);

int main(void)
{
    bool validity;
    long credit;

    do
    {
        credit = get_long("Number: ");
        validity = checksum(credit);
    }
    while(credit<1);

    if(validity == true)
    {
        printf("VALID\n");
    }
    else
    {
        printf("INVALID\n");
    }
}

//Checksum function
bool checksum(long credit)
{
    int digit;
    int sum = 0;
    //reduces credit car number by 1 digit
    credit /= 10;
    while (credit > 0)
    {
        //gets last digit
        digit = credit % 10;
        //reduces credit car number by 2 digits
        credit /= 100;
        printf("card: %ld\n",credit);
        if(digit >= 10){
            digit = (digit / 10) + (digit % 10);
            sum+=
            printf("resultado dessa bosta: %d", digit);
        }
        else
        {
        sum += (digit * 2);
        }
        printf("sum: %d\n",sum);
    }
    printf("%d\n",sum);
    if(sum%10==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int checkcard(long credit)
{
    int digits;
    //gets first two digits from credit card number
    while(credit>=100)
    {
        credit/=10;
        printf("%ld\n", credit);
    }
    return 0;
}