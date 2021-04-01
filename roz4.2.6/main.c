#include <stdio.h>
#include <stdlib.h>

void przepisanie(unsigned int,int *,int *);
void pokaz(unsigned int,int *);

int main()
{
    unsigned int n=3;
    int tab1[] = {4,5,6};
    int tab2[] = {1,2,3};
    pokaz(n,&tab1);
    pokaz(n,&tab2);
    przepisz(n,&tab1,&tab2);
    pokaz(n,&tab1);
    pokaz(n,&tab2);
    return 0;
}

void przepisanie(unsigned int n,int *tab1,int *tab2)
{
//a
    //for(int i=0;i<n;i++)
        //tab2[i] = tab1[i];
//b
    for(int j=n-1,i=0;j>=0;j--,i++)
        tab2[i]=tab1[j];
}

void pokaz(unsigned int n,int *tab)
{
    for(int i=0;i<n;i++)
        printf("%d ",tab[i]);
    printf("\n");
}
