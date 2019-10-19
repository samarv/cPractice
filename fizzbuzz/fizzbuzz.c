#include <stdio.h>

/*
    Your fizzbuzz implementation should initialize a counter, then
    iterate n times. If the ith iteration is divisible by 3, print
    "Fizz". If it's divisible by 5, print "Buzz". If it's divisible
    by both 3 and 5, print "FizzBuzz". Increment the counter variable
    every time that nothing gets printed and return the counter.
    Don't forget to include newlines '\n' in your printf statements!
*/
int fizzbuzz(int n)
{

    int j;

    for (int i = 0; i < n; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            printf("fizzBuzz %d \n", i);
        }
        else if (i % 5 == 0)
        {
            printf("Buzz %d \n", i);
        }
        else if (i % 3 == 0)
        {
            printf("fizz %d \n", i);
        }
        else
        {
            j = j + 1;
        }
    }

    return j;
}

#ifndef TESTING
int main(void)
{
    printf("%d \n", fizzbuzz(3));

    return 0;
}
#endif
