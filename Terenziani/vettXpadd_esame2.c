/*
Dato un intero x, dati due vettori con tappo A e B di dimensione n (considerati "x-padded" fino alla fine del più lungo), definire in c una funzione che restituisca il valore
massimo della differenza: elemento di A - elemneto di B in poszione corrsipondente. Si descrivano gli invarianti di ciclo e si discuta la complessità della funzione.
*/

#include <stdio.h>
#define SIZE 10

void calcMax (int vett1[], int vett2[], const int x);

int main(void)
{
   
    const int x = 3;
    int vett1[SIZE] = {6, 2, 5, 10, -1, 0, 0, 0, 0, 0};
    int vett2[SIZE] = {0, 8, 2, -1, 0, 0, 0, 0, 0, 10};

    calcMax(vett1, vett2, x);



    return 0;
}

void calcMax(int vett1[], int vett2[], const int x)
{
    int risultato = 0;
    unsigned int count = 0;
    int hold = 0;

    if(count <= SIZE)
    {
        while(vett1[count] != -1 && vett2[count] != -1)
        {
            hold = vett1[count] - vett2[count];
        
            if (hold > risultato)
             {
                risultato = hold;
             }

            count++;
            while(vett1[count] == -1)
            {
                vett1[count] = x;

                while(vett2[count] == -1)
                {
                    vett2[count] = x;
                }
            }
        }
    }

    printf("\n%s%d\n", "il massimo delle sottrazione dei tue vettori pervepito è: ", risultato);

    return;
}