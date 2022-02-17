/* 
 * proviamo a risolvere il primo esercizio dell'esame.
 */

#include <stdio.h>
#include <assert.h>
#define NDEBUG

int main (int argc, const char * argv[])
{
    int n;
    int m;

        scanf("%d%d", &n, &m);

    int out = 0;
    int i = 0;
    int j  = 2;

    while ((-n) < i && i < (n))
    {
        assert((-n) < i && i < (n));
            j = 0;
    
    
    
    
        while (j < m)
        {
            out = out + n;
            j = j + 2;
        
        
        
        
        
        }
        assert(j > m);
            i = m - n;
    }



        printf("%d, %d", out, n + m + i);


    return 0;

}
