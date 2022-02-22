#include <stdio.h>

int main(int argc, const char* argv[])
{

    int n;
    //double media = 0;

    puts("inserisci il numero di giorni in cui sono stati presenti gli stand: ");
    scanf("%d", &n);

    int voto_max = 0;
    unsigned int count_g = 1;

    while (count_g <= n) 
    {

        int voto = 0;
        int tot_voto = 0;
        unsigned int count_voto = 0;
        //double media = 0;

        while(voto != -1)
        {

            count_voto++;
            tot_voto += voto;
            puts("insrisci il voto (da 0 a 100)");
            scanf("%d", &voto);
            
            if (voto > voto_max) voto_max = voto;       
        }
        
        double media = 0;

        if(voto = -1)
        {
            tot_voto += 1;
            count_voto -= 1; 
        }
        
        media = tot_voto / count_voto;

        printf("\n%s%d\t%s%lf\n", "il giorno: ", count_g, "la media dei voti era: ", media);

        count_g++;

    }
    
    printf("\n%s%d\n", "il voto massimo conseguito nel periodo è: ", voto_max);

    return 0;
}