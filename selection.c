#include<stdio.h>
int main(){
    int a[5]={1,4,2,9,5};
    int i , j,min,temp,n=5;
    for(i=0;i<n-1;i++){
        min=i;
        for(j=i+1;j<n;j++){
            if(a[j]<a[min])
                min=j;
        }
        temp=a[i];
        a[i]=a[min];
        a[min]=temp;
    }
    for(i=0;i<n;i++){
        printf("%d",a[i]);
    }
}