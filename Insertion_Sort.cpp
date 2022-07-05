//Marcelo Marques CB3005631

#include <iostream>
using namespace std;

//Função insertionSort


void insertionSort( int A[], int n)
{
 int i ,valor, indice;
 for(i=1 ; i<n ; i++)
 {
  valor = A[i];
  indice = i;
  while ( indice > 0 && A[indice -1] > valor)
  {
   A[indice] = A[indice -1];
   indice = indice -1;
  }
 A[indice] = valor;
 }
}

void mostrarArray(int A[],int n)
{
 int i;
 for(i=0;i<n;i++)
  cout<<A[i]<<" ";
 cout<<"\n";
}

int main()
{
 int n,i,e;
 cout<<"ENTRE COM O NUMERO DE ELEMENTOS\n";
 cin>>n;
 int A[n];
 cout<<"ELEMENTOS\n";
 for(i=0;i<n;i++)
 cin>>A[i];

 cout<<"Array ANTES DA ORDENAÇÃO:\n";
 mostrarArray(A,n);

 
 //CHAMANDO A FUNÇÃO insertionSort
 
 
 insertionSort(A,n);
 cout<<"Array DEPOIS DA ORDENAÇÃO:\n";
 mostrarArray(A,n);

 return 0;
}