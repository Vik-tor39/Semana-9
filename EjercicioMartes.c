#include<stdio.h>
#include<stdlib.h> //Se empleo esta nueva libreria para agregar la funcion que genere un numero aleatorio
#include<time.h> //Se empleo esta nueva libreria para garantizar que los numeros aleatorios no se repitan en caso de que se requiera generar nuevos
int main(){
srand(time(NULL)); //funcion que evita que numeros aleatorios generados se repitan
int fil,col; //difinicion de variables enteras que almacenaran el dato de la cantidad de filas y columnas
printf("Ingrese la cantidad de filas que desea:\n");
scanf("%d",&fil);  //entrada de la cantidad de filas
printf("Ingrese la cantidad de columnas que desea:\n");  
scanf("%d",&col);  //entrada de la cantidad de columnas
int mat[30][30];  /*definimos la matriz con una dimension espacial de 30 filas y 30 columnas para evitar errores en el codigo. 
Posteriormente la matriz sera dimensionada segun las entradas del usuario*/
for(int i=0; i<fil; i++){  //primer for que recorrera las filas de la matriz
    for(int j=0; j<col; j++){  //segundo for que recorrera las columnas de la matriz
        mat[i][j]= rand() % 101;  //Al recorrer filas y columnas con el doble for, cada una de estas se inicializara con un numero aleatorio gracias a la funcion 'rand'
    }
}
printf("Su primera matriz es:\n");
for(int i=0; i<fil; i++){
    for(int j=0; j<col; j++){
        printf("%d ",mat[i][j]);  // Al recorrer filas y columnas nuevamente con el doble for, se imprimira nuestra primera matriz con los numeros aleatorios inicializados
    }
    printf("\n");  //Usamos esta forma de impresion para imprimir la matriz de manera ordenada
}
printf("Su matriz transpuesta es:\n");
for(int i=0; i<col; i++){  //primer for que recorrera en esta ocasion las columnas 
    for(int j=0; j<fil; j++){  //segundo for que recorrera en esta ocasion las filas
        printf("%d ",mat[j][i]);   /*gracias al recorrido que se estructuro con los for, ahora si imprimos la matriz colocando como primer argumento la 
        variable j del doble for, y como segundo argumento la variable i del doble for la matriz se imprimira de manera que se muestre la matriz transpuesta de la 
        primera matriz generada*/
    }
    printf("\n"); //Usamos esta forma de impresion para imprimir la matriz de manera ordenada
}
return 0;
}