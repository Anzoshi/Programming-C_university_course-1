#include <stdio.h>

int main (void)
{

	//int i = 10;
	int vett[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	FILE* f;
	
		f = fopen ("alex.txt", "w+");
		
			if (f == NULL)
			{
				puts("error");
				return 1;
			
			}
		
		for (size_t count; count < 10; count++)
		{
		
			fprintf(f, "%d", vett[count]);
			
		}
			
			puts("completato");
		
		
		
		
		
		
		
		
		
			
		fclose(f);
	
	return 0;
}