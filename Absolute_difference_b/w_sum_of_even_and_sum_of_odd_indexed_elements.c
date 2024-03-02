#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int sumeven=0,sumodd=0;
    for(int i=0;i<n;i++){
        if(i%2==0){
            sumeven+=arr[i];
        }else{
            sumodd+=arr[i];
        }
    }
    int absolutedifference=abs(sumeven-sumodd);
    printf("%d
",absolutedifference);
    return 0;
}