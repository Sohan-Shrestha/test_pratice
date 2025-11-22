#include<stdio.h>
int main (){
	double V1,V2,V3,sum;
	printf("Enter voltage V1: ");
    scanf("%lf", &V1);

    printf("Enter voltage V2: ");
    scanf("%lf", &V2);

    printf("Enter voltage V3: ");
    scanf("%lf", &V3);
    sum = V1 + V2 + V3;
    if (sum==0){
        printf("KVL Verified: Sum is approximately zero.\n");
    }else{
    	 printf("KVL Not Verified: Sum is not zero.\n");
	}
    return 0;
}
