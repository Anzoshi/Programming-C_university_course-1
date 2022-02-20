#include <stdio.h>

void initVett (int vett[], unsigned int size);
void riempiVett (int vett[], unsigned int size );
void calcVett (const int vett1[], const int vett2[], int vett3[], unsigned int size);
void printVett (const int vett[], unsigned int size);

int main (void)
{
    unsigned int size = 10;
    int vett1[size];
    int vett2[size];
    int vett3[size];

    initVett (vett1, size);
    initVett (vett2, size);

    riempiVett (vett1, size);
    riempiVett (vett2, size);

    calcVett (vett1, vett2, vett3, size);

    printVett(vett3, size);
    

    return 0;
}

void initVett (int vett[], unsigned int size )
{
    for (size_t count = 0; count < size; count++)
        {
            vett[count] = 0;
        }
        
    return;
}

void riempiVett (int vett[], unsigned int size )
{
    for (size_t count = 1; count < size; count++)
    {
        vett[count] = vett[count] + vett[count - 1] + 2;
        printf("\n%s%d", "test1: ", vett[count]);

        if(count == size -2)
            vett[count] = -1;
    }
    


    return;
}

void calcVett (const int vett1[], const int vett2[], int vett3[], unsigned int size )
{
    //calcola la differenza fra l'elemento  v1 e l'elemento v2, se l'elemento v1 e maggiore o uguale a quello di v2.
    //calola la somma fra l'elemento v1 e l'elemento v2, altrimenti.

    unsigned int count1 = 0;
    unsigned int count2 = 0;
    unsigned int count3 = 0;

    if(vett1[count1] != -1 || vett2[count2] != -1)
    {
        while (vett1[count1] != -1 || vett2[count2] != -1)
        {
            if (vett1[count1] >= vett2[count2])
                vett3[count3] = vett1[count1] - vett2[count2];

            else
                vett3[count3] = vett1[count1] + vett2[count2];
         
         count1++;
         count2++;
         count3++;


        }
    }

    if (vett1[count1] == -1 || vett2[count2] == -1)
        vett3[count3] = -1;
    
    return;
}

void printVett (const int vett[], unsigned int size )
{
    puts("\nvettore3 = ");

    int count = 0;

    while (vett[count] != -1)
    {
        printf("%d\t", vett[count]);
        count++;
    }
    return;
}