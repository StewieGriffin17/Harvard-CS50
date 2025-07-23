// without using cs50.h library

#include <stdio.h>

int main(void)
{
    long long card;
    
    int sum_of_evens = 0, sum_of_odd = 0, digits = 0, number = 0, number2 = 0;
    
    // Get card number from user (must be positive)
    do 
    {
        printf("Number: ");
        scanf("%lld", &card);
    }
    while (card < 0);
    
    long long temp = card;
    
    while (temp > 0)
    {
        // Increase digit count
        digits++;
        
        // Store the previous digit
        number2 = number;
        
        // Get current last digit
        number = temp % 10;

        // Even position from the right (2nd, 4th, ...)
        if (digits % 2 == 0)
        {
            int multiply = number * 2;
            sum_of_evens += (multiply / 10) + (multiply % 10);
        }
        else
        {
            sum_of_odd += number;
        }
        
        // Remove the last digit
        temp /= 10;
    }
    
    int firstn = number * 10 + number2;
    
    // Luhn's algorithm check
    if ((sum_of_evens + sum_of_odd) % 10 == 0)
    {
        if ((digits == 13 || digits == 16) && number == 4)
        {
            printf("VISA\n");
        } 
        else if (digits == 15 && (firstn == 34 || firstn == 37))
        {
            printf("AMEX\n");
        } 
        else if (digits == 16 && firstn >= 51 && firstn <= 55)
        {
            printf("MASTERCARD\n");
        } 
        else
        {
            printf("INVALID\n");
        }
    }
    else 
    {
        printf("INVALID\n");
    }

    return 0;
}
