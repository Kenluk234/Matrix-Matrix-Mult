#include <stdio.h>

void printM1(int* M, int N){

    printf("[");
    for(int i=0; i<N; i++){
        printf("\n");
        for(int j=0; j<N; j++){
            printf("%d,\t",M[N*i+j]);
        }
    }
    printf("]\n");

}

void printM2(int* v, int N){
    printf("[");
    for(int i=0; i<N; i++){
        printf("\n");
        for(int j=0; j<N; j++){
            printf("%d,\t",v[N*i+j]);
        }
    }
    printf("]\n");
}

void M1M2Mult(int* Mx, int* My, int* Mz, int N){

    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            Mz[N*i+j] = 0;
            for(int k=0; k<N; k++){
                Mz[N*i+j] += Mx[N*i+k] * My[N*k+j];
        }
            }
          
    }

}
