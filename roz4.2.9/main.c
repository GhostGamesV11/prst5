#include <stdio.h>
#include <stdlib.h>

void przepisanie(unsigned int,int *,int *,int *);
void pokaz(unsigned int,int *);

int main()
{
    unsigned int n=3;
    int tab1[]={1,4,7};
    int tab2[]={2,5,8};
    int tab3[]={3,6,9};
    pokaz(n,&tab1);
    pokaz(n,&tab2);
    pokaz(n,&tab3);
    przepisanie(n,&tab1,&tab2,&tab3);
    pokaz(n,&tab1);
    pokaz(n,&tab2);
    pokaz(n,&tab3);

    return 0;
}

void przepisanie(unsigned int n,int *tab1,int *tab2,int *tab3)
{
    int a,b,c;
    for(int i=0;i< n;i++)
    {
        a=tab1[i];
        b=tab2[i];
        c=tab3[i];
        if(tab1[i]>=tab2[i])
        {
            if(tab1[i]>=tab3[i])
            {
                tab1[i]=a;
                tab2[i]=b;
                tab3[i]=c;
            }
            else
            {
                tab1[i]=c;
                tab2[i]=a;
                tab3[i]=b;
            }
        }
        else
        {
            if(tab2[i]>=tab3[i])
            {
                tab1[i]=b;
                tab2[i]=a;
                tab3[i]=c;
            }
            else
            {
                tab1[i]=c;
                tab2[i]=b;
                tab3[i]=a;
            }
        }

    }
}

void pokaz(unsigned int n,int *tab)
{
    for(int i=0;i<n;i++)
        printf("%d ",tab[i]);
    printf("\n");
}
