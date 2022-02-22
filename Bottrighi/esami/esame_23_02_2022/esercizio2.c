#include <stdio.h>
#include <assert.h>

unsigned const int r = 10;
unsigned const int c = 10;

void riempiMat ( int mat[r][c]);
void minimo (const int mat[r][c], char nomefile[], unsigned int* x, unsigned int* y);

int main(int argc, const char * argv[])
{
     int mat[r][c];
    char nomefile[] = "esame.matrix.txt";
    unsigned int x = 0;
    unsigned int y = 0;
    unsigned int* ptRx = &x;
    assert(ptRx != NULL);

    unsigned int* ptRy = &y;
    assert(ptRy != NULL);

    riempiMat(mat);

    minimo(mat, nomefile, ptRx, ptRy); // u can call pointers even just typing &x, &y. There is no need to declare other pointers in the main.

    return 0;
}
void riempiMat(int mat[r][c])
{
    for(size_t count_r = 0; count_r < r; count_r++)
    {
        assert(count_r < r);

        for (size_t count_c = 0; count_c < c; count_c++)
        {
            assert(count_c < c);

            mat[count_r][count_c] = 0;
            assert(mat[count_r][count_c] == 0);
        }

    }
    for(size_t count_r = 0; count_r < r; count_r++)
    {
        assert(count_r < r);
        

        for(size_t count_c = 0; count_c < c; count_c++)
        {
            assert(count_c < c);

            mat[count_r][count_c] = count_r * 2 - count_c;
            assert(mat[count_r][count_c] == count_r * 2 - count_c);
        }
    }
    return;
}
void minimo (const int mat[r][c], char nomefile[], unsigned int* x, unsigned int* y)
{
    int min = 0;

    FILE* f;
    f = fopen(nomefile, "w+");
    assert(f != NULL);

    fprintf(f, "%c", '[');

    for(size_t count_r = 0; count_r < r; count_r++)
    {
        assert(count_r < r);

        fprintf(f, "\n");

        for(size_t count_c = 0; count_c < c; count_c++)
        {
            assert(count_c < c);
            
            fprintf(f, "%d", mat[count_r][count_c]);

            if((count_r != 0 || count_c != 0) && (count_r != r - 1 || count_c != c - 1))
            {
                assert(count_r != 0 || count_c != 0);
                assert(count_r != r - 1 || count_c != c - 1);

                fprintf(f, "%c", '*');
            }
          /*  if(count_r == r - 1 && count_c == c - 1);
            {
                assert(count_r == r - 1);
                assert(count_c == c - 1);

                fprintf(f, "%c", ']');
            } */ // strange abort here ask for more information
            if(mat[count_r][count_c] < min)
            {
               assert(mat[count_r][count_c] < min);

               min = mat[count_r][count_c];
               *x = count_r;
               *y = count_c;

            }
        }
    }
    
    fprintf(f,"%c", ']');

    printf("\n%s\t%u%s%u\t", "le coordinate del minimo sono: ", *x, ", ", *y);

    fclose(f);

    return;
}