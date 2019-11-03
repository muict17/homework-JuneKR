#include<stdio.h>
int main(){
    char parR[5] = {'(', '(' , ')' ,')', ')'};
    int leftP = 0;
    int rightP = 0;
    for(int i = 0; i < 5; i++){
        if(parR[i] == '('){
            leftP++;
        }else{
            rightP++;
        }
    }

    if(leftP == rightP){
        printf("Complete!");
    }
    else{
        printf("Uncomplete!");
    }
    return 0;
}