#include <stdio.h>
int main(){
    int cant,fil,col;
    scanf("%d",&cant);
    scanf("%d",&fil);
    scanf("%d",&col);
    int matriz[30][30][30];
    for(int i=0; i<cant-1; i++){
        for(int j=0; j<fil; j++){
            for(int k=0; k<col; k++){
                matriz[i][j][k]=0;
            }
        }
    }
    for(int i=cant-1; i<cant; i++){
        for(int j=0; j<fil; j++){
            for(int k=0; k<col; k++){
                matriz[i][j][k]=1;
            }
        }
    }
    for(int i=0; i<cant; i++){
        for(int j=0; j<fil; j++){
            for(int k=0; k<col; k++){
                printf ("%d",matriz[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
    
