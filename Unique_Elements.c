#include<stdio.h>
int main(){
    int n;
    int arr[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        int isunique=1;
        for(int j=0;j<i;j++){
            if(arr[i]==arr[j]){
                isunique=0;
                break;
            }
        }
        if(isunique){
            printf("%d ",arr[i]);
        }
    }
    return 0;
}