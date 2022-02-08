/*
Parametro di input del vettore e della sua dimensione.
In questo caso parliamo di visita incondizionata di un vettore.
si tratta semplicemente di stampare un vettore.
*/

#include <stdio.h>

void riempiVett (int vett[], unsigned int size);
void printVett (int vett[], unsigned int size);

int main (int argc, const char * argv[])

{	
	unsigned int size = 10;
	int vett[size];

	riempiVett (vett, size);
	
	printVett (vett, size);




	return 0;
}

void riempiVett (int vett[], unsigned int size )

{	
	size_t count = 0;
	int num;
		

		puts("inserisci valori e  -1 per terminare l'inserimento");
		
		while ((-1 != num) && (size > count))
		
		{
			puts("inserisci valori (- 1 per terminare):");
			scanf("%d", &num);
			
			
			vett[count] = num;
			++count;
		
		}
	
	
	
	
	return;
}

void printVett (int vett[], unsigned int size)

{
	puts("questo è il vettore che è stato inserito");
	
	for(size_t count = 0; size - 1 >= count; count++)
	{
		printf("%s%u\n", "posizione ", count);
		printf("%d\n", vett[count]);
			
			if (-1 == vett[count])
		
		
				return;
	
	}

}