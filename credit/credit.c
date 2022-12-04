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
        checkcard(credit);
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

    //sums digits not multiplied by 2
    while (credit1 > 0)
    {
        //gets last digit
        digit1 = credit1 % 10;
        //reduces credit car number by 2 digits
        credit1 /= 100;
        if(digit1*2 >= 10)
        {
            digit1 = ((digit1) / 10) + ((digit1) % 10);
            sum1 += digit1;
        }
        else
        {
        sum1 += (digit1);
        }
        printf("digit1: %d\n", digit1);
        printf("sum1: %d\n", sum1);
    }

    //reduces credit car number by 1 digit
    credit2 /= 10;

    //sums digits multiplied by 2
    while (credit2 > 0)
    {
        //gets last digit
        digit = credit2 % 10;
        //reduces credit car number by 2 digits
        credit2 /= 100;
        if(digit*2 >= 10)
        {
            digit = ((digit*2) / 10) + ((digit*2) % 10);
            sum += digit;
        }
        else
        {
        sum += (digit * 2);
        }
        printf("digit: %d\n", digit);
        printf("sum: %d\n", sum);
    }

    //sums the two values
    sumall = sum + sum1;
    printf("sumall: %d\n",sumall);

    //verifies credit card validity
    if(sumall%10==0)
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
    //gets first two digits from credit card number
    while(credit >= 100)
    {
        credit/=10;
    }

    //for VISA cards - gets first digit only
    if(credit / 10 == 4)
    {
        credit/=10;
    }

    //verifies credit card type
    switch(credit)
    {
        case 4:
            printf("VISA\n");
            break;

        case 34:
        case 37:
            printf("AMEX\n");
            break;

        case 51:
        case 52:
        case 53:
        case 54:
        case 55:
            printf("MASTERCARD\n");
            break;

    }

    return 0;
}