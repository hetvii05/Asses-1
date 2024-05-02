#include<stdio.h>
mul(int a[2][2], int b[2][2])    // Give Parameters and Function Defination
{         
	int i,j,k,c[2][2];        
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			c[i][j]=0;
			for(k=0;k<2;k++){
				c[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	printf("\n-----------Multiplication Matrix-----------\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
}
main(){
	int x[2][2],y[2][2],i,j;                         
	printf("\n-----------first Matrix-----------\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("Enter numbers : ");
			scanf("%d",&x[i][j]);
		}
	}
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d\t",x[i][j]);	
		}
    printf("\n");
	}
	printf("\n-----------Second Matrix-----------\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("Enter numbers : ");
			scanf("%d",&y[i][j]);
		}
	}
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d\t",y[i][j]);	
		}
		printf("\n");
	}
	
	mul(x,y);                          //Function Calling and Arguments
}
