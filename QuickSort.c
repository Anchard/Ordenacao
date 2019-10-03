/** QuickSort
    Pior caso O(n²)
    Caso médio O(nlogn)
    Melhor caso O(nlogn)
**/

#include <stdio.h>

void print(int *array, int tam){
    int i;

    for(i = 0; i < tam; i++){
        printf("%d ", array[i]);
    }

    printf("\n");
}

void troca(int *a, int *b){
    int aux = *b;
    *b = *a;
    *a = aux;
}

int partition(int *array, int inicio, int fim){
    int p = array[fim - 1];
    int i = -1, j;

    for(j = inicio; j < fim; j++){
        if(array[j] <= p){
            i++;
            troca(&array[i + inicio], &array[j]);
        }
    }

    return i + inicio;
}

void quickSort(int *array, int inicio, int fim){
    int index_pivot;

    if(inicio < fim){
        index_pivot = partition(array, inicio, fim);
        quickSort(array, inicio, index_pivot);
        quickSort(array, (index_pivot + 1), fim);
    }
}

int main(){
    int array[] = {5, 10, 3, 2, 15, 14, 7, 1, 0, 3, 4, 0, 20, 10, 3, 5, 4, 11, 20, 6};
    int tam = sizeof(array) / sizeof(int);

    print(array, tam);
    quickSort(array, 0, tam);
    print(array, tam);

    return 0;
}
