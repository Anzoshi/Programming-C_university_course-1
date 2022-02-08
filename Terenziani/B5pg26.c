/*
Scrivere un programma che prenda in input un voto, e ne stampi la corrispettiva in lettera finale, che verrà riportata nella verifica.
*/

#include <stdio.h>

int main (int argc, const char * argv[])

{
	unsigned int voto;
	
		puts("insrisci il voto (esso deve essere un numero da 0 a 100)");
		scanf("%u", &voto);
		
		if (90 <= voto)
			printf("%s\t%c", "Questa è la tua valutazione:", 'A');
		
		else if (80 <= voto && voto < 90)
			printf("%s\t%c", "Questa è la tua valutazione:", 'B');
			
		else if (70 <= voto && 80 > voto )
			printf("%s\t%c", "Questa è la tua valutazione:", 'C');
			
		else if (60 <= voto && 70 > voto )
			printf("%s\t%c", "Questa è la tua valutazione:", 'D');
		
		else if (60 > voto)
			printf("%s\t%c", "Questa è la tua valutazione:", 'F');
			
	return 0;
}