#include <iostream>
using namespace std;
int main (){
	int tamano[100];
	int tam,i,j,aux;
	cout<<"Tamaño del vector: ";
	cin>>tam;
	for(i=0;i<tam;i++){
		cout<<"Posicion["<<(i+1)<<"]= ";
		cin>>tamano[i];
	}
	for(i=0;i<tam;i++){
		for(j=i+1;j<tam;j++){
			if(tamano[i<tamano[j]]){
				aux=tamano[i];
				tamano[i]=tamano[j];
				tamano[j]=aux;
			}
		}
	}
	cout<<"\nArreglo ordenado de forma descandente : ";
	for(i=0;i<tam;i++){
		cout<<tamano[i]<<",";
	}
	system("pause");
}
