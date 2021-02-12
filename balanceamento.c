
#include <stdlib.h>// necessário p/ as funções rand() e srand()
#include<stdio.h>
#include<time.h>//necessário p/ função time()
#include <stdlib.h>
#include <locale.h>

#define BN printf("\n");
#define BN2 printf("\n\n");
#define QBL printf("_______________________________________________________________________________________________________________");
void Ordena_vet(int * Vet, int Quant);
int Remove_Duplicado(int * Vet, int Quant);

void Ordena_vet(int * Vet, int Quant) {
    int i = 0, j = 0, aux = 0;
    for (i = 0; i <= Quant; i++) {
        for (j = 0; j <= Quant; j++) {
            if (*(Vet+i) < *(Vet+j)) {
                aux = *(Vet+i);
                *(Vet+i) = *(Vet+j);
                *(Vet+j) = aux;
            }
        }
    }
}

int Remove_Duplicado(int * Vet, int Quant) {
	
	
    int i = 0, j = 0, k = 0;
    for( i = 0; i < Quant; i++ )
    {
        for( j = i + 1; j < Quant; )
        {
            if( Vet[j] == Vet[i] )
            {
                for( k = j; k < Quant; k++ )
                    Vet[k] = Vet[k + 1];

                Quant--;
            }
            else
            {
                j++;
            }
        }
    }
    
    
    return Quant;
}




int main() {
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));

    int Q_Vet1 = 0, Q_Vet2 = 0, i = 0, aux_vet = 0;

    Q_Vet1 = 1 + rand() % 5;
    Q_Vet2 = 1 + rand() % 5;
    #pragma region Alocação_Vetores
    int Vet1[Q_Vet1] ;
    int Vet2[Q_Vet2] ;
    #pragma endregion Alocação_Vetores

	
    printf("Vet1 tem %d posições\n", Q_Vet1 + 1);
    printf("Vet2 tem %d posições\n", Q_Vet2 + 1);
    QBL//Quebra de linha
    #pragma region Gerando_Num_Aleatorio_Vetores

    for (i = 0; i <= Q_Vet1; i++)
        Vet1[i] = rand() % 10;

    for (i = 0; i <= Q_Vet2; i++)
        Vet2[i] = rand() % 10;
    printf("\nVetor 1 gerado aleatoriamente\n");
    for (i = 0; i <= Q_Vet1; i++)
        printf("Pos[%d]: %d\n", i, Vet1[i]);
    BN//pula 1 linha

    printf("Vetor 2 gerado aleatoriamente\n");
    for (i = 0; i <= Q_Vet2; i++)
        printf("Pos[%d]: %d\n", i, Vet2[i]);

    BN//pula 1 linha
    QBL//Quebra de linha
    #pragma endregion Gerando_Num_Aleatorio_Vetores
    
    #pragma region ORDENA_VETORES
    Ordena_vet(Vet1, Q_Vet1);
    Ordena_vet(Vet2, Q_Vet2);
    #pragma endregion ORDENA_VETORES
    
    #pragma region Printa_Vetores
    printf("\nVetor 1 Ordenado \n");
    for (i = 0; i <= Q_Vet1; i++)
        printf("Pos[%d] = %d \n", i, Vet1[i]);
	
    BN2 //pula 2 linhas
    printf("Vetor 2 Ordenado\n");
    for (i = 0; i <= Q_Vet2; i++)
        printf("Pos[%d] = %d \n", i, Vet2[i]);
	
    #pragma endregion Printa_Vetores
    QBL//Quebra de linha

	
	
    int Quant_Total = Q_Vet1 + Q_Vet2;
    
    
    int * Vet_Result ;
    
    if((Vet_Result = (int * ) calloc(Quant_Total,sizeof(int)))==NULL){
    	exit(1);
	}
	aux_vet=0;
    #pragma region CONCATENA_VETORES
    
    for (i = 0; i <= Q_Vet1; i++) {
        *(Vet_Result + aux_vet) = Vet1[i];
        aux_vet++;
    }
    for (i = 0; i <= Q_Vet2; i++) {
        *(Vet_Result + aux_vet) = Vet2[i];
        aux_vet++;
    }
    aux_vet -= 1;
    #pragma endregion CONCATENA_VETORES
   
   
	#pragma region PRINT_VET_CONCAT
    BN
    printf("Vetor Resultado Concatenado\n");
    for (i = 0; i <= aux_vet; i++)
        printf("Pos:[%d] = %d \n", i, *(Vet_Result+i));
    QBL//Quebra de linha
    #pragma endregion PRINT_VET_CONCAT
    
    #pragma region ORDENA_REMOVE_DUPLIC
    
    
    Ordena_vet(Vet_Result, aux_vet);
    BN
    printf("Vetor Resultado ordenado\n");
    for (i = 0; i <= aux_vet; i++)
			printf("Pos[%d] = %d \n", i, *(Vet_Result+i));
   	aux_vet = Remove_Duplicado(Vet_Result, aux_vet);
 	#pragma endregion ORDENA_REMOVE_DUPLIC
 	
 	#pragma region PRINT_RESULT_FINAL
    BN
    printf("Vetor Resultado, sem numeros repetidos e ordenado\n");
    for (i = 0; i <= aux_vet; i++)
			printf("Pos[%d] = %d \n", i, *(Vet_Result+i));
    QBL//Quebra de linha
    #pragma endregion PRINT_RESULT_FINAL
    
    free(Vet_Result);
	Vet_Result=NULL;
    getch();
}