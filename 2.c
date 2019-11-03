#include<stdio.h>
int main(){
    int num[4] = {1, 2, 3, 5};
    int misNum = 0;
    for(int i = 0; i < 4; i++){
        //or j = i+1;
        if(i+1 != num[i]){
            misNum = i+1;
        }
    }
    printf("Missing number is : %d", misNum);
    return 0;
}