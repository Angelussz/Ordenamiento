//Informe 2 insertsort
#include<iostream>
using namespace std;
void insertsort(int x[],int n)
{
	int aux,pos,i;
	for(i=0;i<n;i++)
	{
		pos=i;
		aux=x[i];
		
		while((pos>0) &&(x[pos-1]>aux))
		{
			x[pos]=x[pos-1];
			pos--;
		}
		cout<<"posicion: "<<pos<<endl;
		x[pos]=aux;
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
	insertsort(a,5);
	mostrar(a,5);
}
