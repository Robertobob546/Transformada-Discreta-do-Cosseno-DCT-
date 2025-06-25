#include <stdio.h>
#include <math.h>

#define pi  3.141592

int main(){

    int ordem; // ordem da matriz quadrada
    scanf("%d", &ordem);

    
    int i , j , x , y; 
    
    int n = ordem;
    int matriz[n][n]; // matriz original
    double mResultante[n][n]; // matriz resultante

    

    double alpha(int a){
        if(a == 0){
            return sqrt(1.0 / n);
        }
        
        return sqrt(2.0 / n);
        
    }

    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // programa receber os valores da matriz
            scanf("%d", &matriz[i][j]);
            
        }
        
    }

            
            
    // nessa parte o 'i', o 'j', o 'x' e o 'y' estão sendo atualizados para o proximo valor para que aconteça a progressão desejada na somatoria da formula

    for(i = 0; i < ordem; i++){
        for(j = 0; j < ordem; j++){  
            double somatoria = 0.0;
            
            for(x = 0; x < ordem; x++){
                for(y = 0; y < ordem; y++){
                    somatoria += matriz[x][y] * cos(((2 * x + 1) * i * pi) / (2.0 * ordem)) * cos(((2 * y + 1) * j * pi) / (2.0 * ordem));
                }
            }

            mResultante[i][j] = alpha(i) * alpha(j) * somatoria;
        }
    }

    
    // nessa parte o 'i' e o 'j' estão sendo atualizados para mostrar os valores da matriz resultante um por um

    for(i = 0; i < ordem; i++){
        for(j = 0; j < ordem; j++){
            printf("%9.3f", mResultante[i][j]);
            if (j < ordem - 1)
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
