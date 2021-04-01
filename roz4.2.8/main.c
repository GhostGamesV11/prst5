#include <stdio.h>
#include <stdlib.h>

void przepisanie(unsigned int,int *,int *,double *);
void pokaz1(unsigned int,int *);
void pokaz2(unsigned int,double *);

int main()
{
    unsigned int n=3;
    int tab1[]={4,5,6};
    int tab2[]={1,2,3};
    double tab3[]={0,0,0,0,0,0};
    pokaz1(n,&tab1);
    pokaz1(n,&tab2);
    pokaz2(n,&tab3);
    przepisanie(n,&tab1,&tab2,&tab3);
    pokaz1(n,&tab1);
    pokaz1(n,&tab2);
    pokaz2(n,&tab3);
    return 0;
}

void przepisanie(unsigned int n,int *tab1,int *tab2,double *tab3)
{
//a
    for(int i=0;i<n;i++)
        tab3[i]=tab1[i];
    for(int i=n,j=0;i<2*n;i++,j++)
        tab3[i]=tab2[j];;
}

void pokaz1(unsigned int n,int*tab)
{
    for(int i=0;i<n;i++)
        printf("%d ",tab[i]);
    printf("\n");
}

void pokaz2(unsigned int n,double *tab)
{
    for(int i=0;i<2*n;i++)
        printf("%.1f ",tab[i]);
    printf("\n");
}
