#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<time.h>
#include<stdlib.h>
#include<math.h>

int* Generator(int n);

	main() {
		
		int n=12; //pocet,kolko tych cisel chcem
		int* vysledok=Generator(n);
		int i;
		int *temp=vysledok;
		for (i=0;i<n;i++) 
			printf ("%d ",*temp++);
		free(vysledok);
				printf ("\n");
				printf ("Premenna 'vysledok' zaberala: %d Bajty",sizeof(vysledok));
		
			
		
		
	}
	
int* Generator(int n) {
	int *pole = (int*)malloc(n*sizeof(int));
	int i;
	srand(time(NULL));
	for (i=0;i<n;i++) {
		*(pole+i)=rand()%99+1;
	}
	return(pole);
}
