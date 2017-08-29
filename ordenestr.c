// Orden arreglo forma descendente
#include<stdio.h>
#include<stdlib.h>
int main(void){
	float aux, n[10];
	int i,j, num=10;
	for(i=0;i<num;i++){
		printf ("Ingresa numero %d: ",i);
		scanf ("%f", &n[i]);
	}
	for(i=1;i<num;i++)
		for(j=0;j<num-i;j++)
			if(n[j]<n[j+1]){
				aux=n[j];
				n[j]=n[j+1];
				n[j+1]=aux;
			}
			printf("\nN\243meros ordenados de forma descendiente:\n\n");
			for(i=0;i<num;i++)
				printf ("[%d]: %g\n", i, n[i]);
			
			
			
		
	
	printf("\n");
			system("pause");
			return EXIT_SUCCESS;
}

