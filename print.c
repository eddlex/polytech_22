
#include "libft.h"

void sh()
{
    system("sh header.sh");
    color(0);
}


void info()
{
    sh();
    color(1);
    printf("Տրված N×M չափողականու թյամբ ուղղանկյուն մատրիցը, որի տարրերը ամբ ողջ թվեր են, արտածել\n");
    printf("տեսատիպի էկր անի վրա: Կազմել ծրագիր, որը կձևավորի նոր մատրից, տեղափոխելով այնտեղ տրված\n");
    printf("մատրիցի այն տողերը, որոնք չեն կարգավորված ըստ արժեքների աճման կամ նվազման: Նոր մատրիցի\n");
    printf("ձևավորումը ցուցադրել դանդաղեցված ռեժիմում՝ առաջին մատրիցի կողքին: Տեղափոխվող տողերը\n");
    printf("տրված մատրիցից հեռացնել:\n\n");
    color(2);
    printf("press any button ...");
    getchar();
    system("clear");
}

void color (int flag)
{
	if (flag == 0)
		printf("\033[0m"); //reset
	else if (flag == 2)
		printf("\033[1;31m"); //red
	else if (flag == 1)
		printf("\033[0;32m");
	else if (flag == 3) //green
		printf("\033[0;32m");

}


void print(MX *mat)
{
    system("clear");

    sh();
    for (int i =  0; i < mat->n; ++i)
    {
        if (not_sorted(mat, i))
            color(2);
        else
            color(3);


        for (int j = 0; j < mat->m * 2; ++j)
        {
            if (mat->m == j)
            {
                color(2);
                printf("   ");
            }
            if(mat->arr[i][j])
                printf(" %4d ", mat->arr[i][j]);
            else
                printf(" [?]  ");
        }
        printf("\n");
        color(1);
    }
    usleep(170000);
}





