#ifndef __LIBFT__H__
#define __LIBFT__H__

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct  cube
{
    int n;
    int m;
    int **arr;
} MX;

void sh();
void color (int flag);
void print(MX *mat);
void info();

void ex22();
void ft_free(MX * mat);
void change(MX * mat);
void create_arr(MX *mat);
void push_random(MX * mat);
void N_and_M(MX * mat);
int not_sorted(MX * mat, int n);
#endif
