#include<stdio.h>
#include<stdlib.h>

void size(int *n){
	printf("Table size ==> ");
	scanf("%d",n);
}

void fill(int *t,int n){
	int i;
	for(i=0;i<n;i++){
		printf("T[%d]=",i+1);
		scanf("%d",(t+i));
	}
}

void display(int *t,int n){
	int i;
	for(i=0;i<n;i++){
		printf("T[%d]=%d |",i+1,*(t+i));
	}
}
main(){
	int *t,n;
	size(&n);
	t=(int*)malloc(sizeof(int)*n);
	fill(t,n);
	printf("\n \n");
	display(t,n);
}
