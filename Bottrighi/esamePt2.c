//  main.c
//  riempiMat
//
//  Created by Omar Zoubi on 18/02/22.
//

#include <stdio.h>

void stampaMat (int mat[][3], int size, unsigned int* x, unsigned int* y, char nomefile[]);

int main(int argc, const char * argv[]) {
    
    int size = 10;
    int mat[size][3];
    unsigned int x = 0;
    unsigned int y = 0;
    unsigned int* ptRx = &x;
    unsigned int* ptRy = &y;
    char nomefile[] = "matrice.txt";
    
    for(size_t C = 0; C < size; C++)
    {
        for(size_t R = 0; R < 3; ++R)
        {
            mat[C][R] = 0;
        }
    }
        
        
    for (size_t count = 0; count < size; ++count)
    {
        puts("");
        for (size_t countIn = 0; countIn < 3; ++countIn)
        {
            printf("%d\t", mat[count][countIn]);
        }
    }
    puts("");
    puts("seconda prova");
    
    for (size_t c = 0; c < size; c++)
    {
        for (size_t r = 0; r < 3; ++r)
        {
            mat[c][r] += 1;
            printf("%d\t", mat[c][r]);
            if(size - 1 == c && 3-1 == r)
                mat[c][r] = 0;
        }
        puts("");
    }
    stampaMat(mat, size, ptRx, ptRy, nomefile);
    
    puts("il minimo è:");
    printf("%d,%d\n", x, y);
    return 0;
}

void stampaMat(int mat[][3], int size, unsigned int* x, unsigned int* y, char nomefile[])
{
    int min = mat[0][0];
    
    for (size_t C = 0; C < size; C++)
    {
        for(size_t R = 0; R < 3; ++R)
        {
            if (mat[C][R] < min)
            {
                min = mat[C][R];
            *x = (unsigned int) C;
            *y = (unsigned int) R;
            }
        }
    }
   FILE* f;
        
   f = fopen(nomefile, "w+");
    
   if(f == NULL)
       puts("error");
    
       fprintf(f, "%c", '[');
        
        for(size_t C = 0; C < size; C++){
            
            
            for (size_t R = 0; R < 3; R++) {
                fprintf(f, "%d", mat[C][R]);

                if(C == size - 1 && R == 2)
                {
                    fprintf(f,"%c", ']');
                    return;
                }
                 fprintf(f, "%c", '*');
               }

            fprintf(f,"\n");
        }
    
    fclose(f);
    
    return;
}