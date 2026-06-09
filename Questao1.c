#include<stdio.h>
void main (void){
	int n, i, j;
	printf("Digite o valor de N: \n");
	scanf("%d", &n);
	
	float A[n][n], TA[n][n], RA[n][n], somaRA, somaRAl0, raizRAl0;
	
	printf("Digite os valores da matiz em sequencia: \n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%f", &A[i][j]);
		}
	}
	printf("\nMatriz A:\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%.2f ", A[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			TA[j][i] = A[i][j];
		}
	}
	printf("Matriz TA:\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%.2f ", TA[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(j==0){
				RA[i][j]=TA[i][j]+A[i][j];
			}else{
				RA[i][j]=TA[i][j];
			}
		}
	}
	printf("\n");
	printf("Matriz RA:\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%.2f ", RA[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i==j){
				somaRA = somaRA + RA[i][j];
			}
		}
	}
	printf("\n");
	printf("Soma da diagonal da RA:%.2f\n", somaRA);
	printf("\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i==0){
				somaRAl0 = somaRAl0 + RA[i][j];
			}
			
		}
	}
	raizRAl0 = somaRAl0 * somaRAl0;
	printf("Soma da primeira linha de RA:%.2f\n", somaRAl0);
	printf("E a raiz quadrada da soma da primeira linha de RA:%.2f\n", raizRAl0);
}

