/* 
Scrivere un programma che chieda quanti valori verranno introdotti
dalla tastiera, li chieda tutti e ne stampi la somma e la media.
*/////////////////////////////

#include <stdio.h>

void sumMedia (unsigned int val);

int main (int argc, const char * argv[] )
{
    unsigned int val;

    puts ("Insert the number of values, that u wanna insert: ");
    scanf("%u", &val);

    sumMedia (val);


    return 0;
}
void sumMedia (unsigned int val)
{
    int numbers;
    int sum = 0;

    for (size_t count = 0; count < val; count++)
    {
        puts ("insert numbers to sum together: ");
        scanf ("%d", &numbers);
        sum += numbers;

    }

    printf("\n%s%d\n", "questa è la somma: ", sum);
    printf("\n%s%lf\n", "this is the avarage: ", (double) sum / val);
    

    return;
}