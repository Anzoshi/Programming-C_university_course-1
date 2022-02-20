#include <stdio.h>

int main(int argc, const char* argv[])

{
    int n;
    int voto_max = 0;
    int voto;
    int stud;
    int voto_suff = 0;
    int corso = 0;
    int count_stud = 0;

        puts("inserisci il numero di corsi: ");
        scanf("%d", &n);

        for (size_t count_corsi = 1; count_corsi <= n; ++count_corsi)
        {

            while (voto != -1)
            {
                puts("inserisci voto: ");
                scanf("%d", &voto);

                count_stud += 1;

                if(voto > voto_max)
                {
                    voto_max = voto;
                    stud = count_stud;
                }
                if(voto >= 60)
                {
                    voto_suff+= 1;
                }
            }
                corso = count_corsi;
                printf("\n%s%d\t%s%d\t%s%d\n", "corso numero: ", corso, "studente numero: ", stud, "voto maggiore del corso: ", voto_max);

                voto = 0;
                voto_max = 0;
                count_stud = 0;
        }

    printf("\n%d\n", voto_suff);


    return 0;
}