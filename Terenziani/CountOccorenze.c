/*
Scrivere un programma che conti le occorrenze nell'array.
*/

#include <stdio.h>

void riempiVett (int vett[], unsigned int size );
unsigned int trovaOcc (int vett[], int size, int key);


int main (int argc, const char * argv[])

{	
	const unsigned int size = 10;
	int vett[size];
	int key;
	int ris;
	
		riempiVett(vett, size);
	
		puts("");
	
		puts("inserisci la chiave da cercare:");
		scanf("%d", &key);
		
		puts("");
		
		ris = trovaOcc (vett, size, key);
		printf("%s%d", "queste sono le occorenze trovate: ", ris); 
		
		

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
unsigned int trovaOcc (int vett[], int size, int key)

{	
	unsigned int count = 0;
	unsigned int countOcc = 0;
	
		while (-1 != vett[count] && size > count)
		{
				if (key == vett[count])
				{	
					countOcc++;
				}
			++count;
			
			
		
		}



	return countOcc;
}

































