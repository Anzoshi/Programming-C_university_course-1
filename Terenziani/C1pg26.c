/*
Scrivere un programma che conti quante persone hanno superato gli esami, che i fermi solo quando incontri un valore sentinella, o tappo.
*/

#include <stdio.h>

unsigned int passed (int voto);

int main (int argc, const char * argv[])

{
	int voto;
	int res;
	
		puts("inserisci un voto,e inserisci alla fine -1 per terminare il programma e processare i dati");
		//scanf("%d", &voto);
		
		res = passed(voto);
		//scanf("%d", &voto);
		
		printf("%s\t%d", "questi sono quelli che sono passati:", res);
		

	return 0; 
}

unsigned int passed (int voto)

{
	unsigned int count = 0;
	
		while (-1 != voto) // invariante di ciclo: voto che ad ogni ciclo count è sempre il numero dgli studenti che hanno passato l'esame da count a count - 1.
		{
			scanf("%d", &voto);
			
			if(60 <= voto)
				count++;
			
		}
	
	return count; // complessità O(voto).
}