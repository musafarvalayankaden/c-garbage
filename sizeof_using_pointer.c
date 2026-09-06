#include<stdio.h>
int main()
{
char *c=0;
int *i=0;
float *f=0;
double *d=0;

c++;
i++;
f++;
d++;

printf("sizeof char>> %d\n",c);
printf("sizeof int>> %d\n",i);
printf("sizeof float>> %d\n",f);
printf("sizeof double>> %d\n",d);


return 0;
}
