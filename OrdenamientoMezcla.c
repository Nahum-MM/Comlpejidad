
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Ord_Mezcla(int A[],int lon,int ini, int fin)
{
    int i,j,k;
    if(lon>1)
    {
        int mit=(lon/2);

        int Iz[mit];
        int De[lon-mit];

        for(i=0;i<mit;i++)
        {
            Iz[i]=A[ini+i];
        }
        for(i=mit;i<lon;i++)
        {
            De[i-mit]=A[ini+i];
        }

        Ord_Mezcla(Iz,mit,0,mit);
        Ord_Mezcla(De,lon-mit,0,lon-mit-1);

        i=0;
        j=0;
        k=ini;
        while(i<mit&&j<lon-mit)
        {
            if(Iz[i]<=De[j])
            {
                A[k]=Iz[i];
                i++;
            }
            else
            {
                A[k]=De[j];
                j++;
            }
            k++;
        }
        while(i<mit)
        {
            A[k]=Iz[i];
            i++;
            k++;
        }
        while(j<lon-mit)
        {
            A[k]=De[j];
            j++;
            k++;
        }
    }
}

int main()
{
    int lon=10;
    int A[lon];

    for(int i=0;i<lon;i++)
    {
        for(int i=0;i<lon; i++);
        A[i]=rand() % lon +1;
    }
    system("cls");

    //printf("Arreglo NO ordenado: ");
    for(int i=0;i<lon;i++)
    {
      //printf("%d, ",A[i]);
    }
    printf("\n");

    Ord_Mezcla(A,lon,0,lon-1);

    printf("Arreglo ordenado: ");
    for(int i=0;i<lon;i++)
    {
        printf("%d, ",A[i]);
    }
    printf("\n");
}
