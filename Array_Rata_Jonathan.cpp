#include <stdio.h>

int main()
{
	int A[12] = {60,80,55,90,75,40,50,85,70,65,45,55};
	int B[12] = {0};
	int C[12] = {0};
	int i,j;
	int total = 0;
	int rata;
	
	for (i=0; i<12; i++){
	total = total+A[i];
}
rata=total/12;
j=0;
	for(i=0; i<12; i++){
	if (A[i]>rata){
		B[j]=A[i];
		j++;
	}
}
j=0;
	for(i=0;i<12;i++){
	if(A[i]<rata){
	   C[j]=A[i];
	   j++;
	}
}

printf("Array A : ");
    for (i = 0; i < 12; i++) {
        printf("%3i", A[i]);
    }
   
printf("\nArray B : ");
	for (i = 0; i < 12; i++) {
        printf("%3i", B[i]);
    }

printf("\nArray C : ");
	for (i = 0; i < 12; i++) {
        printf("%3i", C[i]);
    }

    return 0;
}



