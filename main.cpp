#include <iostream>

using namespace std;

void imprimir (int arr[],int tam){
    for (int i=0; i<tam ;i++){
        cout<<arr[i]<<'\t';}



}
int suma(int arr[],int tam){
     int sum=0;
     for(int i=0;i<tam;i++){
        sum+=arr[i];

     }
    return sum;
}

void invertir (int arr[],int tam){
   int x=tam/2;
   tam-=1;
    for(int i=0;i<tam;i++){
        int c = arr[i];
        arr[i]=arr[tam];
        arr[tam--]= c;
        }

    }
int sumar(int arr[],int tam){
    int i=0;
    if (i==tam){
        return sumar (arr[],tam++);
    }

}

/*int sumare(int arr[],int tam){
     int sum=0;
     for(int i=0;i<tam;i++){
        sum+=arr[i];
     }
    return sumare (arr[i],tam++);
}
*/


int main()
{ int X[5]={1,2,3,4,5};
    imprimir (X,5);
    cout<<endl;
    cout<<endl;
    cout<<suma(X,5)<<endl;
    cout<<endl;
    invertir(X,5);
    imprimir (X,5);
    cout<<endl;
    cout<<sumar(X,5);



return 0;
}
