//Informe 2 bublesert
#include<iostream>
using namespace std;
void bublesort(int x[],int n)
{
	int aux,i,j;
	for(i=0;i<n;i++)
	{
		for(int j=0;j<(n-1);j++)
		{
			if(x[j]>x[j+1])
			{
				aux=x[j];
				x[j]=x[j+1];
				x[j+1]=aux;
			}
		}
	}
}
void mostrar(int x[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<x[i]<<endl;
	}
}

int main()
{
	int a[]={3,9,5,2,4};
	bublesort(a,5);
	mostrar(a,5);
}
