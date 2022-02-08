/*
Visita di un vettore con condizione e accumulatore
*/

#include <stdio.h>

void riempiVett (int vett[], unsigned int size );
void printVett (int vett[], unsigned int size);
unsigned int sumDue (int vett[], unsigned int size);


int main (int argc, const char * argv[])

{
	
	unsigned int size = 10;
	int vett[size];
	int accum;

		riempiVett (vett, size);
	
		printVett (vett, size);
		
		accum = sumDue (vett, size);
		printf("%s%d", "accumulatore: ", accum);





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

unsigned int sumDue (int vett[], unsigned int size)

{	unsigned int count = 0;
	unsigned int accum = 0;
		
		if ( -1 == vett[0])
		return 0;
		
		else if (-1 == vett[1] )
		return 0;
		
		else
			count = 2;
		
		while (-1 != vett[count] && size > count)
		
		{	
			
				if (vett[count - 1] + vett[count - 2] == vett[count])
				{
					accum++;
				}
			++count;
		}

	return accum;
}



















