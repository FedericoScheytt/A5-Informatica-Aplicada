/**
 * @file Matrices.c  
 * @author Federico Scheytt (federico.scheytt@gmail.com)
 * @version 0.1
 * @date 2022-06-01
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>

int main(){

    int matriz[2][3] = {{1,2,3}, {4,5,6}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Matriz[%d][%d]: %d, Direccion de memoria: %p \n", i, j, matriz[i][j], &matriz[i][j]);
        }  
    }

    return 0;
}