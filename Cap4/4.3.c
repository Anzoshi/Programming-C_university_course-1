/*
Scrivere programma..
*/

#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

void bubbleSort (unsigned int vett[]);
size_t binarySearch (unsigned int vett [], unsigned int key, size_t low, size_t high );

int main (int argc, const char * argv[])
{
	unsigned int a[SIZE] = {1, 3, 2, 8, 9, 4, 3, 2, 7, 10};
	unsigned int key;
	
	puts("questo è l'array prima delle modifiche");
	
	
	for(size_t count = 0; count < SIZE; count++)
	{
		printf("%u\t", a[count]);
	}

	bubbleSort(a);
	
	puts("");
	puts("questo è il vettore ordinato: ");
	
	for (size_t count = 0; count < SIZE; count += 1)
	
	{
		printf("%u\t", a[count]);
	}
	
	puts("");
	puts("inserisci la chiave da trovare: ");
	scanf("%d", &key);
	
	size_t keyReport = binarySearch(a, key, 0, SIZE - 1);
	
	puts("");
	printf("%s\t%u\t%s\t%d", "questa è la posizione della chiave trovata", keyReport, "mentre questa è la chiave inserita", key);



	return 0;
}
void bubbleSort (unsigned int vett[])

{
	for(size_t countOut = 0; countOut < SIZE; countOut++)
	{
		for (size_t count = 0; count < SIZE; ++count)
		{
			if (vett[count] > vett[count + 1])
			{
				unsigned int hold = vett[count];
				vett[count] = vett[count + 1];
				vett[count + 1] = hold;
			}
		}
	}

	return;
}

size_t binarySearch (unsigned int vett [], unsigned int key, size_t low, size_t high )

{
	while (low <= high)
	
	{
		size_t mid = (high + low) / 2;
		
		if (key == vett[mid])
		
			return mid;
			
		else if (key < vett[mid])
			high = mid - 1;
			
		else
		
		low = mid + 1;
	}
	
	puts("non esiste la chiave cercata");
	exit(0);
	
	
}