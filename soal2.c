//** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2026/2027
// *   Modul               : 2
// *   Hari dan Tanggal    : Rabu, 11 November 2026
// *   Nama (NIM)          : Hezkiel Tarutung Harianja (13224010)
// *   Nama File           : soal2_modul2_sem5.c
// *   Deskripsi           : Program Bunga Matahari
// * 
// */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr = NULL;
    int capacity = 10;
    int size = 0;
    int num;
    char ch;
    arr = malloc(capacity * sizeof(int));
    if(arr == NULL){
        return 1;
    };    
    while(scanf("%d%c", &num, &ch) >= 1){
        if(size >= capacity){
            capacity *= 2;
            arr = realloc(arr, capacity * sizeof(int));
            if(arr == NULL){
            return 1;
            };
        };
        arr[size++] = num;
        if(ch == '\n'){
            break;
        };
    };
    int found = 0;
    for(int i = 1; i < size - 1; i++){
        if(arr[i] < arr[i - 1] && arr[i] < arr[i + 1]){
            printf("%d ", i + 1); 
            found = 1;
        };
    };
    if(!found){
        printf("NONE");
    };
    free(arr);
    return 0;
}

//Reference:
//1. https://www.geeksforgeeks.org/c/dynamic-array-in-c/
//2. https://www.geeksforgeeks.org/c/initialize-a-dynamic-array-in-c/
//3. https://www.geeksforgeeks.org/c/c-loops/
//4. https://www.geeksforgeeks.org/c/g-fact-66/
//5. https://www.geeksforgeeks.org/c/c-while-loop/
