#include<stdio.h>
int absolutedifference(int arr[],int size){
    int sumeven=0,sumodd=0;
    for(int i=0;i<size;i++){
        if(arr[i]%2==0){
            sumeven+=arr[i];
        }else{
            sumodd+=arr[i];
        }
    }
    return(sumeven>sumodd)?(sumeven-sumodd):(sumodd-sumeven);
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int diff=absolutedifference(arr,n);
        printf("%d
",diff);
    return 0;
}