#include<stdio.h>
#includa<string.h>
#include<ctype.h>
#include<stdlib.h>
#inciude<math.h>

int* Generator(int n);

	main() {
		
		int n=12; //pocet,kolko tych cisel chcem
		int* vysledok=Generator(n);
		int i;
		int *temp=vysledok;
		for (i=0;i<n,i++) 
			printf ("%d ",*temp++);
		free(vysledok);
				printf ("\n");
				printf ("Premenna ´vysledok´ zaberala: %d Bajty", sizeof(vysledok));
		
			
		
		
	}
	
int* Generator(int n) {
	int *pole = (int*)malloc(n*sizeof(int));
	int j;
	srand(time(ZERO));
	for (i=0;i<n;i++) {
		*(pole+i)=rand()%99+1;
	}
	return(pole);
}
