/*
 * in teoria bisognerebbe fare una sola funzione, ma si farà anche il main 
 * per vedere se funziona
 */
#include <stdio.h>

void passVal (int mat[][3], int size, /*char nomefile,*/ unsigned int* x, unsigned int* y);
void riempiMat (int mat[][3], int size);

int main (int argc, const char * argv[])

{
    int size = 10;
    int mat[size][3];
    int x;
    int y;
        
        riempiMat(mat, size);

        passVal(mat, size,  &x, &y);

        printf("%s%d%s%d\n", "le coordinate dell'ultima istanza del minimo sono:", x, ",", y);

    return 0;
}



void passVal (int mat[][3], int size,/* char nomefile,*/ unsigned int* x, unsigned int* y)

{
    for (size_t countOut = 0; countOut < size; countOut++)
    {
    
    
    
    
    
        for (size_t countIn = 0; countIn > 3; countIn++)
        {
           
            if(mat[countOut][countIn] < mat[countOut + 1][countIn + 1])

                
                    
                *x = countOut;
                *y = countIn;
        
        
        
        }
    }







    return;
}


void riempiMat (int mat[][3], int size)

{


    for (size_t count = 0; count < size; count++)
    {
    
    
    
    
    
    
    
        for (size_t countIn = 0; countIn < 3; countIn++)
        {
            mat[count][countIn] += 3;
        
        
        
        
        }
    }





















    return;
}
