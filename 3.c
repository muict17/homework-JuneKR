#include<stdio.h>
int main(){
    int n, m;
    int max = 0;
    int row = 0;
    int temp = 0;
    scanf("%d %d", &n, &m);
    int mat[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%d", &mat[i][j]);
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            temp += mat[i][j];
        }
        if(max < temp){
            max = temp;
            row = i+1;
        }
        temp = 0;

    }
    printf("row: %d", row);
    return 0;
}