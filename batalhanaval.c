/**************************************   
* Trabalho 3 de Programacao de Computadores I - Batalha Naval   
* Curso de Sistemas da informacao   
* Aluno: Michel de Souza Costa - matricula: 0050012476  
* Professor: Alex Salgado  
***************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, result[5][5], cont = 0, continuar;
    char nome[20];
    
    continuar = 1;
    while (continuar == 1){
          printf("Digite seu nome\n");
          scanf("%s", nome);
          
          printf("Preencha os campos com 0 e 1\n");
          
          for(i=0;i<5;i++)
          for(j=0;j<5;j++){
                            printf("Campo[%d][%d] = ", i, j);
                            scanf("%d", &result[i][j]);
                            }
                            for(i=0;i<5;i++){
                            for(j=0;j<5;j++){
                                              printf(" %d ", result[i][j]);
                                              }
                                              printf("\n");
                                              }
                                              printf("Digite as coordenadas\n");
                                              printf("O numero da linha :");
                                              scanf("%d", &i);
                                              printf("O numero da coluna :");
                                              scanf("%d", &j);
                                              printf("Voce escolheu a linha %d e coluna %d\n", i, j);
                                              
                                              if(result[i][j]==1){
                                                       printf("Bomba!!\n");
                                                       cont++;                                                    
                                                       }
                                                       if(result[i][j]==0){
                                                                printf("Agua!!\n");                                                       
                                                                }
                                                                printf("Deseja continuar ? (1 - s/2 - n)\n");
                                                                scanf("%d", &continuar);                                                                                                                                                                                                                                                                               
                                                                            }                                                                                                                                                                                       
                                                                printf("%s voce tem, %d pontos\n", nome, cont);                                         
                                                                return 0;
                                                                system("pause");
                                                                }

          
                                          
