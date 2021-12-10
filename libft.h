#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>  // —> printf()
# include <stdlib.h> // —> malloc()
# include <unistd.h> // —> sleep() || usleep()

typedef struct	cube //}
{					 //} —> Հայտարարում է MX տիպի struct որը պարունակում է՝
	int n;           //} —> n տողերի քանակ,
	int m;           //} —> m սյուների քանակ,
	int	**arr;       //} —> arr ցուցիչի ցուցիչ։
}	MX;              //}

void	sh();                           //—> Տպում է header.sh file_ի պարունակությունը և գույնը reset է անում:
void	color (int flag);				//—> Փոխում է console_ի գույնը ըստ flag_ի։
void	print(MX *mat);                 //—> Տպում է matrix_ը։
void	info();                         //—> Տպում է խնդրի պահանջը։
void	ex22(); 					    //—> 22 համարի վարժության ֆունկցիա։
void	ft_free(MX *mat);               //—> Մաքրում է դինամիկ հիշողությունը։
void	change(MX *mat);                //—> Անիմացիայի համար պատասխանատու ֆունկցիա։
void	create_arr(MX *mat);            //—> Ստեղծում է matrix:
void	push_random(MX *mat);           //—> Ռանդոմ տարբերակով էլեմենտներ է ավելացնում matrix_ի մեջ:
void	N_and_M(MX *mat);               //—> Ստուգում է N_ի և M_ի ճիշտ լինելու պայմանը  [N > 1; M > 2];
int		not_sorted(MX *mat, int n);     //—> Եթե տողը սորտավորված է վերադարցնում է 1 հակառակ դեպքում 0:
#endif
