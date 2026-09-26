#include<stdio.h>
int main(){
    int a[5]={1,2,4,3,8};
    int key=0, found =0;
    for(int i=0;i<5;i++){
        if(a[i]==key){
            found = 1;
            break;
        }
    }
    if(found==1){
        printf("key found!!!!");
    }
    else{
        printf("key NOT found!!!!");

    }
}