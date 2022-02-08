/*
Crea un vettore con interi inseriti da tastiera e chiudilo prima della fine della dimensione con -1 
*/

#include <stdio.h>

int loadVett(int vett[], unsigned int size);

int main (int argc, const char * argv[])

{
	unsigned int size;
	int a[size];
	int ris;
	
	
		puts("inserisci la dimesnione di un vettore e chiudilo prima che essa arrivi alla fine con -1:");
		scanf("%u", &size);
		
		ris = loadVett(a, size);
		
		puts("");
		puts("ritorna:");
		printf("%d", ris);
		
		puts("");
		puts("questo è il vettore riempito:" );
		
		
		for(size_t count = 0; count <= size - 1; count++)
		{
		 	printf("%d\t", a[count]);
		 	
		 	if ( -1 == a[count])
		 		return 0;
		}
		
		/*puts("");
		puts("ritorna:");
		printf("%d", ris); */
		

}

int loadVett (int vett [], unsigned int size)

{
	int ok = 0;
	size_t count = 0;
	int num;
	vett[count] = 0;
	
	
		while ( (num != -1) && (count <= size - 1))
		{
		
			
			puts("inserisci un numero:");
			scanf("%d", &num);
			
			vett[count] = num;
			count++;
			
		}
	
		puts("");
	
		if(-1 != num)
		{
			puts("error");
			ok = 1;

		}	

			return ok;
}