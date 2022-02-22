
// its not intended to work, so it won't work, its just an exercise.

#include <stdio.h>
#include <assert.h>

int main(int argc, const char * argv[]) 
{
        int n;
        int m;

            puts("Inserisci due numeri: ");
            scanf("%d%d", &n, &m);

           int out = 0;
           int i = 0;
           int j = 2;
            
            while (-n < i && i < n)
            {
                assert( -n < i);
                assert(i < n);

                j = 0;

                while(j < m)
                {
                    assert(j < m);
                    out = out + n;
                    j = j + 2;
                }

                assert(j >= m);
                i = m - n;

            }

            printf("%d\t%d", out, n + m + i);


    return 0;
}
