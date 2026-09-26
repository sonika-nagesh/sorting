#include<stdio.h>
int main(){
    int a[10]={0,1,2,3,4,5,6,7,8,9};
    int key=100,low=0,high=9,found=0;
    while(low<=high){
        int mid=(low+high)/2;
        if(key==a[mid]){
            printf("key elem found!!!!");
            found=1;
            break;
        }

        else if(key>a[mid])
            low=(mid+1);
        else
            high=mid-1;
        
    }
    if(found==0)
        printf("key elem NOT found!!!!");

}