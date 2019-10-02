/** InsertionSort
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

int troca(int n){
    int aux = array[n];
    int i;

    for(i = n - 1; i >= 0; i--){

        if(aux < array[i]) array[i + 1] = array[i];

        else{
            array[i + 1] = aux;
            return 0;
        }
    }

    array[0] = aux;

    return 0;
}

int insertionSort(){
    int i;

    for(i = 1; i < len; i++)
        if(array[i] < array[i - 1]) troca(i);

    return 0;
}

int main(){

    print();
    insertionSort();
    print();

    return 0;
}
