#include "libft.h"


int not_sorted(MX * mat, int n)
{
    int min_max = 1;
    int max_min =  1;
    for (int i = 0; i < mat->m - 1; ++i)
    {
        if (mat->arr[n][i] < mat->arr[n][i + 1])
            max_min = 0;
        if (mat->arr[n][i] > mat->arr[n][i + 1])
            min_max = 0;
        if (!mat->arr[n][i])
            return (1);
    }
    if (max_min && !min_max || min_max && !max_min)
        return(0);
    return (1);
}

void N_and_M(MX * mat)
{
    system("sh header.sh");
    char str[20] = "-1";
    mat->n = -1;
    mat->m = -1;
    while (mat->n <= 0)
    {
        printf("input number N: ");
        color(2);
        scanf("%s", str);
        mat->n = atoi(str);
        if (mat->n <= 0)
            printf("error N\n");
        color(1);
    }
    while (mat->m <= 0)
    {
        printf("input number M: ");
        color(2);
        scanf("%s", str);
        mat->m = atoi(str);
        if (mat->m <= 0)
            printf("error M\n");
        color(1);
    }
    sleep(1);
    system("clear");
}

void create_arr(MX *mat)
{
    if (!(mat->arr = (int**)malloc(sizeof(int*) * mat->n)))
        return;
    for (int i = 0; i < mat->n; ++i)
        if (!(mat->arr[i] = (int*)malloc( sizeof(int) *  (mat->m * 2) )))
            return;
}

void push_random(MX * mat)
{
    for(int i = 0; i < mat->n; ++i)
        for (int j = 0; j < mat->m; ++j)
            mat->arr[i][j] = rand() % 8  + 1;
}

void change(MX * mat)
{
    for (int i = 0; i < mat->n; ++i)
    {
        int count;
        if (not_sorted(mat, i))
        {
            for (int c = mat->m -1 ; c >= 0; --c)
            {
                count = c;
                for (int k = 0; k < mat->m; ++k)
                {
                    mat->arr[i][count + 1] = mat->arr[i][count];
                    mat->arr[i][count] = 0;
                    print(mat);
                    ++count;
                }
                int ii = i;
                while (ii != 0 && mat->arr[ii - 1][count] == 0)
                {
                    mat->arr[ii - 1][count] = mat->arr[ii][count];
                    mat->arr[ii][count] = 0;
                    print(mat);
                    --ii;
                }
            }
        }
        else
        {
            for (int x = 0; x <= mat->m; ++x)
            {
                int ii = i;
                while (ii != 0 && mat->arr[ii - 1][x] == 0)
                {
                    mat->arr[ii - 1][x] = mat->arr[ii][x];
                    mat->arr[ii][x] = 0;
                    print(mat);
                    --ii;
                }
            }
        }
    }
}


void ft_free(MX * mat)
{
    for (int i = 0; i < mat->n; ++i)
        free(mat->arr[i]);
    free(mat->arr);
    free(mat);
}


void ex22()
{
    info();
    MX *mat = (MX*)malloc(sizeof(MX));
    N_and_M(mat);
    create_arr(mat);
    push_random(mat);
    print(mat);
    sleep(1);
    change(mat);
    ft_free(mat);
}

