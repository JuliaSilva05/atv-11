#include <stdlib.h>
#include <stdio.h>

void insertionSort(int array[], int tamanhoDoArray){
    int i, atual, j;
    for(i = 1; i<tamanhoDoArray;i++){
        atual = array[i];
        j = i - 1; 
        
        while(j>=0&&array[j]>atual){
            array[j+1]=array[j];
            j = j - 1;
        }
        array[j+1]=atual;
    }
}

int buscarProduto(int arr[],int left, int right, int target){
    left = 1;
    right = 10;
    while (left<=right){
        int mid = left + (right - left)/2;
        if (arr[mid]==target){
            return mid;
        }
        
        if (arr[mid]<target){
            left = mid + 1;
        } else{
            right = mid - 1;
        }
    }
    return -1;
}

int main(){
    int produtos[]={3,5,12,8,4,56,34,90,67,80};
    
    int tamanho = 10;
    insertionSort(produtos, tamanho);
    //já ordenou
    
    int esq,dir;
    printf("Insira o numero a ser buscado\n");
    int prod;
    scanf("%d",&prod);
    
    int resultado = buscarProduto(produtos, esq, dir, prod);
    if (resultado != -1){
        printf("Posicao = %d\n",resultado);
        printf("Numero de iteracoes: %d\n",resultado+1);
    } else{
        printf("Produto nao encontrado\n");
    }
}