#include <stdio.h>
#include <assert.h>

void riempiVett (int vett[], unsigned const int size );
void compVett (int vett1[], int vett2[], unsigned const int size );
void printVett(int vett[], unsigned const int size);

int main (int argc, const char * argv[])
{
    unsigned const int size = 10;
    int vett1[size];
    int vett2[size];

riempiVett(vett1, size);
puts("");
riempiVett(vett2, size);

compVett(vett1, vett2, size);
puts("this is the final vett result");
printVett(vett1, size);

    return 0;
}
void riempiVett (int vett[], unsigned const int size)
{
    for (size_t count = 0; count < size; count++)
    {
        assert(count < size);

        int n;
        puts ("inserisci un numero per il primo vettore, -1 per teminare");
        scanf("%d", &n);

        if(n != -1)
        {
            assert(n != -1);

            vett[count] = n;
            assert(vett[count] == n);
        }
        else
        {  
          vett[count] = -1;
          assert(vett[count] == -1);
          return;
        }

    }

    return;
}
/*void riempiVett (int vett[], unsigned const int size)
{
    for (size_t count = 0; count < size; count++)
    {
        assert(count < size);

        int n;
        puts ("inserisci un numero per il primo vettore, -1 per teminare");
        scanf("%d", &n);

        if(n != -1)
        {
            assert(n != -1);
            vett[count] = n;
        }
        else
        {  
          vett[count] = 0;
          assert(vett[count] == 0);
        }

    }

    return;
} */
void compVett (int vett1[], int vett2[], unsigned const int size)
{
    int count = 0;

    while(vett1[count] != -1 && vett2[count] != -1)
    {
        assert(vett1[count] != -1);
        assert(vett2[count] != -1);

        if(vett1[count] < vett2[count])
        {
            assert(vett1[count] < vett2[count]);

            int control = vett1[count] * vett2[count];
            vett1[count] = vett1[count] * vett2[count];
            assert(vett1[count] == control);
        }
        else if (vett1[count] == vett2[count])
        {
            assert(vett1[count] == vett2[count]);

            vett1[count + 1] = -1;
            assert(vett1[count + 1] == -1);
        }

        count++;
    }

    while(vett1[count] == -1)
    {
        assert(vett1[count] == -1);

       while (vett2[count] != -1)
        {
            assert(vett2[count] != -1);

                vett1[count] = vett2[count];
                assert(vett1[count] == vett2[count]);
                count++;
        }
        
        return;
    }

}
void printVett (int vett[], unsigned const int size)
{
    for (size_t count = 0; count < size; ++count)
    {
        assert(count < size);
        
        puts("");
        printf("%d ", vett[count]);
    }
    return;
}