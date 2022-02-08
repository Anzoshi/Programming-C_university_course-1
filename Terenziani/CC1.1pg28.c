/*
Scrivere un programma che prenda in input tre vettori e dia in output il risultato di tutti quelli che hanno superato i test, ovvero che abbiano preso più o uguale a 60 come voto.
*/

#include <stdio.h>

int main (int argc, const char * argv[])

{
	const int corsi = 3;
	const int stud = 10;
	int voto;
	unsigned int passed = 0;
	
		puts("questo è il numero toatale degli studenti passati dei tre corsi:");
		
		for (unsigned int count_corso = 0; count_corso < corsi; count_corso++)
		{
			for (unsigned int count_stud = 0; count_stud < stud; count_stud++)
			{	
				//unsigned int passed = 0;
				
					scanf("%d", &voto);
					
					if(60 < voto)
						passed++;	
			}
		
		
		}
		
		puts("");
		
		printf("%s\t%d", "questi sono gli studenti passati", passed);
		
	return 0;
}