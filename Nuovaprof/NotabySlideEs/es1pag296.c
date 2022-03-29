//Scrivere un programma che calcoli la media (frazionaria) di 100 valori
//interi introdotti da tastiera
////////////////////////////////////////////////////////////////
// so I will not going straight forward with that hundreds numbers but I
// will write a program that does the average only with numbers insert
// in that moment by the user of course not greater than 100 so for me
// is more simple to verify ;)
////////////////////////////////////////////////////////////////

#include <stdio.h>

int takeNum (unsigned int sum, int* ptRnNum);
void avarage (unsigned int sum, unsigned int nNum);

int main (void) 
{
    unsigned int sum = 0;
    int nNum = 0;
    int* ptRnNum = &nNum;

    sum = takeNum(sum, &nNum);
    avarage(sum, nNum);


    return 0;
}

int takeNum (unsigned int sum, int* ptRnNum)
{
    int num = 0;

    while (*ptRnNum <= 100)
    {
        puts("inserisci un numero (insert -1 to exit): ");
        scanf("%d", &num);

        sum += num;
        *ptRnNum+= 1; //if i put ++ he does the cycle only for 4 times. Why??

        if (num == -1)
        {
            sum++;
            *ptRnNum -= 1;
            return sum;

        }

    }


    return sum;
}
void avarage (unsigned int sum, unsigned int nNum)
{
    printf("\n%s%lf","The avarage is: ", (double) sum/nNum);


    return;
}