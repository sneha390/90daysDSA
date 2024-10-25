#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    int target;
    scanf("%d",&target);

    int pointer1 = 0;
    int pointer2 = n-1;

    while(pointer1 < pointer2){
        if(arr[pointer1] + arr[pointer2] == target){
            printf("%d %d",arr[pointer1],arr[pointer2]);
            // break;
        }

        else if(arr[pointer1] + arr[pointer2] < target){
            pointer1++;
        }

        else if(arr[pointer1] + arr[pointer2] > target){
            pointer2--;
        }
    }

    
}

