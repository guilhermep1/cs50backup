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
    long credit2 = credit;
    long credit1 = credit;
    int digit;
    int digit1;
    int sum = 0;
    int sum1 = 0;
    int sumall;

    while (credit1 > 0)
    {
        //gets last digit
        digit1 = credit1 % 10;
        //reduces credit car number by 2 digits
        credit1 /= 100;
        printf("card1: %ld\n",credit1);
        if(digit1*2 >= 10)
        {
            digit1 = ((digit1*2) / 10) + ((digit1*2) % 10);
            sum1 += digit1;
        }
        else
        {
        sum1 += (digit1 * 2);
        }
        printf("sum1: %d\n",sum1);
    }

    //reduces credit car number by 1 digit
    credit2 /= 10;
    while (credit2 > 0)
    {
        //gets last digit
        digit = credit2 % 10;
        //reduces credit car number by 2 digits
        credit2 /= 100;
        printf("card: %ld\n",credit2);
        if(digit*2 >= 10)
        {
            digit = ((digit*2) / 10) + ((digit*2) % 10);
            sum += digit;
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