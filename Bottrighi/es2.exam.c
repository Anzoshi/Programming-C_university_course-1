/*

*/

#include <stdio.h>
#define C 10

void riempiMat ( int mat[][C], unsigned int r );
void stampaMat (const int mat [][C], unsigned int r);
void minimo (const int mat[][C], unsigned int r);
void file (const int mat[][C], unsigned int r);

int main (int argc, const char * argv[])

{
	unsigned int r = 10;
	 int mat[r][C];
	
		puts("inserisci i valori per riempire la matrice: ");		
		riempiMat(mat, r);
		
		puts("matrice completa stampata: ");
		stampaMat(mat, r);
		
		puts("questo è il minimo: ");
		minimo(mat, r);
		
		file(mat, r);
	return 0;
}

void riempiMat ( int mat[][C], unsigned int r)

{
	for (size_t countI = 0; countI < r; countI++)
	
	{
		puts("");
		
		for (size_t countJ = 0; countJ < C; ++countJ)
		
		{	
			printf("%s%d, %d: \n", "inserisci il valore posizione: ", countI, countJ);
			mat[countI][countJ] = countI + countJ;
			printf("%d\n", mat[countI][countJ]);
			//printf("%s%d, %d\n%d", "posizione: ", countI, countJ, mat[r][C]);	
			
		}
	
	}
	return;
} 
void stampaMat (const int mat[][C], unsigned int r)

{
		for (size_t countI = 0; countI < r; countI++)
	
	{
		puts("");
		
		for (size_t countJ = 0; countJ < C; ++countJ)
		
		{	
			printf("%s%d, %d\n%d\n", "posizione: ", countI, countJ, mat[countI][countJ]);	
			
		}

	}

	return;
}

void minimo (const int mat[][C], unsigned int r)

{	
	
	int min = mat[0][0];
	unsigned int posR = 0;
	unsigned int posC = 0;
	
		for (size_t countI = 0; countI < r; countI++)
	
	{
		puts("");
		
		for (size_t countJ = 0; countJ < C; ++countJ)
		
		{	
			if (mat[countI][countJ] <= min)
			{	
				min = mat[countI][countJ];
				posR = countI;
				posC = countJ;	
			}	
			
		}

	}

 
	printf("%s%u, %u\n", "la posizione del minimo è: ", posR, posC) ;
	
	return;
}

void file (const int mat[][C], unsigned int r)

{
	FILE* f;
	
	f = fopen ("matrix", "w+");
	
	fprintf (f,"%s", "[" );
	
	if (f == NULL)
	{	
		puts("error");
		return;
	}	
		printf("[");
		for (size_t countI = 0; countI < r; countI++)
	
		{
		
		
			for (size_t countJ = 0; countJ < C; ++countJ)
		
			{	
				printf("%d", mat[countI][countJ]);
				
			
				if((mat[countI][countJ] != mat[0][0]) && (mat[countI][countJ] != mat[r][C]))
				{
					printf("*");
					fprintf(f, "%s", "*");	
				}
				else if (mat[countI][countJ] == mat[r][C])
				{
					return;
				}
					
				fprintf (f, "%d", mat[countI][countJ]);	
				
				
			}

		}
		
	
	
	fprintf (f, "%s", "]");	
	
	
	
	fclose(f);

	return;
}