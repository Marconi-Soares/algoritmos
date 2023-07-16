#include <stdio.h>


int search(int arr[], int arrLength, int key){
    for (int i = 0; i < arrLength; i++){
        if (arr[i] == key){
            return i;
        }
    }
    return -1;
}

int getUserKey(){
    int key;
    printf("Enter a key to be searched: ");
    scanf("%d", &key);
    
    return key;
}

int main(void){
    int arr[] = {1, 4, 2, 5, 6, 8, 12};
    int arrLength = sizeof(arr) / arr[0];
    int key = getUserKey();
    
    int res = search(arr, arrLength, key);

    if ( res != -1){
        printf("key '%d' found on index '%d'...\n", key, res);
        return 0;
    }
    printf("key '%d' was not found...\n", key);
}
