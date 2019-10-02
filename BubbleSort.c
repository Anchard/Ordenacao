/** Bubble Sort
    Pior caso O(n²)
    Caso médio O(n²)
    Melhor caso O(n)
**/

#include <stdio.h>

int array[] = {5, 10, 3, 2, 15, 14, 7, 1, 0, 3, 4, 0, 20, 10, 3, 5, 4, 11, 20, 2};
int len = sizeof(array) / sizeof(int);

int print(){
    int i;

    for(i = 0; i < len; i++) printf("%d ", array[i]);

    printf("\n");

    return 0;
}

int troca(int *a, int *b){
    int aux;

    if(*a > *b){
        aux = *b;
        *b = *a;
        *a = aux;

        return 1;
    }

    return 0;
}

int bubbleSort(){
    int trocou = 1;
    int i;

    while(trocou){
        trocou = 0;

        for(i = 0; i < len; i++)
            if(troca(&array[i], &array[i + 1]) == 1) trocou = 1;
    }

    return 0;
}

int main(){

    print();
    bubbleSort();
    print();

    return 0;
}
