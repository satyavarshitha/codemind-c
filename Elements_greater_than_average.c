#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int average=sum/n;
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]>=average){
            count++;
        }
    }
    printf("%d
",count);
}