
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "utils/utils.h"

#define LOWER 1
#define UPPER 5

int generateRandomInt(int lower, int upper){
    return (rand() % (upper-lower+1)) + lower;
}

void initMat(int* M, int N){
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            M[N*i+j] = generateRandomInt(LOWER,UPPER);
        }
    }
}

void initVec(int* v, int N){
    for(int i=0; i<N; i++){
      for(int j=0; j<N; j++){
          v[N*i+j] = generateRandomInt(LOWER,UPPER);
        }   
    }
}

int main(void){

    srand(time(0));

    int N = 3;
    int* M = (int *) malloc(N*N*sizeof(int));
    int* v = (int *) malloc(N*N*sizeof(int));
    int* b = (int *) malloc(N*N*sizeof(int));

    if(M == NULL | v == NULL){
        printf("Malloc is failed \n");
        exit(0);
    } else {
        initMat(M, N);
        printf("Mx=");
        printMx(M, N);
        initMat(v, N);
        printf("My=");
        printMy(v, N);
        MxMyMult(M,v,b,N);
        printf("Mz=");
        printMz(b, N);
    }

    free(M);
    free(v);
    free(b);

    return 0;
}
