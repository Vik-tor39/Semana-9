#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
srand(time(NULL));
int fil,col;
scanf("%d",&fil);
scanf("%d",&col);
int mat[30][30];
for(int i=0; i<fil; i++){
    for(int j=0; j<col; j++){
        mat[i][j]= rand() % 101;
    }
}
printf("Su primera matriz es:\n");
for(int i=0; i<fil; i++){
    for(int j=0; j<col; j++){
        printf("%d ",mat[i][j]);
    }
    printf("\n");
}
printf("Su matriz transpuesta es:\n");
for(int i=0; i<fil; i++){
    for(int j=0; j<col; j++){
        printf("%d ",mat[j][i]);
    }
    printf("\n");
}
return 0;
}