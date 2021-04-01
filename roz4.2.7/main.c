#include <stdio.h>
#include <stdlib.h>

void przepisanie(unsigned int,int *,int *,int *);
void pokaz(unsigned int,int *);

int main()
{
    unsigned int n=3;
    int tab1[]={4,5,6};
    int tab2[]={1,2,3};
    int tab3[]={7,8,9};
    pokaz(n,&tab1);
    pokaz(n,&tab2);
    pokaz(n,&tab3);
    przypisanie(n,&tab1,&tab2,&tab3);
    pokaz(n,&tab1);
    pokaz(n,&tab2);
    pokaz(n,&tab3);

    return 0;
}

void przepisanie(unsigned int n,int *tab1,int *tab2,int *tab3)
{
//a
    //for(int i=0;i<n;i++)
        //tab3[i]=tab1[i]+tab2[i];
//b
    //for(int i=0;i<n;i++)
        //if(tab1[i]>tab2[i])
            //tab3[i]=tab1[i];
        //else
            //tab3[i]=tab2[i];
//c
    int a,b;
    for(int i=0;i<n;i++)
    {
        a=tab2[i];
        b=tab3[i];
        tab2[i]=tab1[i];
        tab1[i]=b;
        tab3[i]=a;

    }
}

void pokaz(unsigned int n,int *tab)
{
    for(int i=0;i<n;i++)
        printf("%d ",tab[i]);
    printf("\n");
}
