#include <stdio.h>

void printMx(int* Mx, int N){

    printf("[");
    for(int i=0; i<N; i++){
        printf("\n");
        for(int j=0; j<N; j++){
            printf("%d,\t",Mx[N*i+j]);
        }
    }
    printf("]\n");

}

void printMy(int* My, int N){
    printf("[");
    for(int i=0; i<N; i++){
        printf("\n");
        for(int j=0; j<N; j++){
            printf("%d,\t",My[N*i+j]);
        }
    }
    printf("]\n");
}

void printMz(int* Mz, int N){
    printf("[");
    for(int i=0; i<N; i++){
        printf("\n");
        for(int j=0; j<N; j++){
            printf("%d,\t",Mz[N*i+j]);
        }
    }
    printf("]\n");
}

void MxMyMult(int* Mx, int* My, int* Mz, int N){

    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            Mz[N*i+j] = 0;
            for(int k=0; k<N; k++){
                Mz[N*i+j] += Mx[N*i+k] * My[N*k+j];
        }
            }
          
    }

}
