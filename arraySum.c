#include <stdio.h>

int main(){
    int arr[2];
    
    for(int i = 0; i < 2; i++){
        scanf("%d",&arr[i]);
    }
    int target;
    scanf("%d",&target);
    for(int i = 0; i<2;i++){
        for(int j = i+1;j<2;j++){
            if(arr[i]+arr[j]== target ){
                printf("%d%d Result",i,j);
            }
        }
    }
}

