#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <ctype.h>

	int aleatorioMaquina() 
	{
		srand(time(NULL));
    return (rand() % 3) + 1;
	}

char *jogadas[3] = {"Pedra", "Papel", "Tesoura"};

typedef struct node
{
	int num;
	int numMaq;
	struct node* next;
} node;

//=======================================================

void jogar(node *MENU)
{
		node *newnode = (node *) malloc(sizeof(node));
		int escolhaDaMaquina = aleatorioMaquina();
	
	if (!newnode)
	{
		 printf("	Sem memoria disponivel!");
		 printf("\n");
		 exit(1);
	} 
	else 
	{	
			 	printf("\n");
				printf("=============================================");
	 			printf("\n\n");
				printf("                  JO-KEN-PO!"						      );
				printf("\n");
				printf("                   [ JOGO ]"						      );
				printf("\n\n");
				printf("=============================================");
	 			printf("\n\n");
	
			printf("	Escolha entre:");
			printf("\n\n");
	
	printf("	1 - Pedra");
	printf("\n");
		printf("	2 - Papel");
		printf("\n");
	printf("	3 - Tesoura");
	printf("\n\n");
	
	 	newnode->next = MENU->next;
	  MENU->next = newnode;
	  
		printf("=============================================");
	 	printf("\n\n");
 
	printf("	Sua escolha: ");
	scanf("%d", &newnode->num);
	printf("\n");
	
    printf("=============================================");
	 	printf("\n\n");
	
	if (newnode->num >= 1 && newnode->num <= 3)
        {
            printf("	Voce escolheu %s!", jogadas[newnode->num - 1]);
            printf("\n");
            
            newnode->numMaq = escolhaDaMaquina;
            
            printf("	A maquina escolheu %s!", jogadas[newnode->numMaq - 1]);
            printf("\n\n");

            if (newnode->num == newnode->numMaq)
            {
                printf("	Empate!");
                printf("\n\n");
            }
            else if ((newnode->num == 1 && newnode->numMaq == 3) ||
                     (newnode->num == 2 && newnode->numMaq == 1) ||
                     (newnode->num == 3 && newnode->numMaq == 2))
            {
                printf("	Voce venceu!");
                printf("\n\n");
            }
            else
            {
                printf("	A maquina venceu!");
                printf("\n\n");
            }
        }
        else
        {
            printf("	Escolha invalida!");
            printf("\n\n");
            
            printf("=============================================");
	 					printf("\n\n");
	 					getchar();
        		getchar();
	 					
	 					system("CLS");
						return;
        }
        
        printf("=============================================");
	 	printf("\n\n");

        printf("	Pressione qualquer tecla para");
        printf("\n");
        printf("	voltar ao menu principal.");
        getchar();
        getchar();

        system("CLS");
    }
  }

//=======================================================

void regras()
{
	printf("\n");
	printf("=============================================");
	printf("\n\n");
	printf("                 JO-KEN-PO!"						      );
	printf("\n");
	printf("                 [ REGRAS ]"						      );
	printf("\n\n");
	printf("=============================================");
	printf("\n\n");
	
	printf("	- Pedra vence Tesoura.");
	printf("\n");
	
		printf("	- Papel vence de Pedra.");
		printf("\n");
		
	printf("	- Tesoura vence de Papel.");
	printf("\n\n");
	
	printf("---------------------------------------------");
	printf("\n\n");
	 	
			 	printf("	- Pedra empata com Pedra.");
				printf("\n");
			
					printf("	- Papel empata com Papel.");
					printf("\n");
					
					printf("	- Tesoura empata com Tesoura.");
					printf("\n\n");
				
				    printf("=============================================");
					 	printf("\n\n");
	
	printf("	Pressione qualquer tecla para");
 	printf("\n");
 	printf("	voltar ao menu principal.");
	printf("\n");
	getchar();
	getchar();
	
	system("CLS");
}

//=======================================================

void historico(node *MENU)
{
    printf("\n");
		printf("=============================================");
	 	printf("\n\n");
    printf("                  JO-KEN-PO!								 ");
    printf("\n");
    printf("                [ HISTORICO ]							   ");
    printf("\n\n");
		printf("=============================================");
	 	printf("\n\n");
    
    node *atual = MENU-> next;
    
       if (atual == NULL)
    {
        printf("	Historico vazio...");
        printf("\n");
        printf("	Jogue mais vezes!");
        printf("\n\n");
    }
    else
    {   
        while (atual != NULL)
        {
        	
	            printf("	Escolha do jogador: %s", jogadas[atual->num - 1]);
	            printf("\n");
	            
	            printf("	Escolha da maquina: %s", jogadas[atual->numMaq - 1]);
	            printf("\n\n");

            if (atual->num == atual->numMaq)
            {
                printf("	- Resultado: Empate!");
                printf("\n\n");
            }
		            else if (atual->num == 1 && atual->numMaq == 3 ||
					 							 atual->num == 2 && atual->numMaq == 1 ||	
		                     atual->num == 3 && atual->numMaq == 2)
		            {
		                printf("	- Resultado: Voce venceu!");
		                printf("\n\n");
		            }
            else
            {
                printf("	- Resultado: A maquina venceu!");
                printf("\n\n");
            }
            
             		if (atual->next != NULL) 
             		{
	             			printf("---------------------------------------------");
										printf("\n\n");
             		}
       		 			else
       		 			{
       		 				break;
       		 			}

            atual = atual->next;
        }
    }
    
	 		printf("=============================================");
		 	printf("\n\n");
		
		printf("	Pressione qualquer tecla para");
    printf("\n");
	  printf("	voltar ao menu principal.");
		getchar();
    getchar();
    
				system("CLS");
}

//=======================================================
 
	void limparhistorico(node *MENU)
{
    printf("\n");
		printf("=============================================");
	 	printf("\n\n");
		printf("                 JO-KEN-PO!                  ");
		printf("\n");
		printf("                 [ LIMPAR ]                  ");
		printf("\n");
		printf("                [ HISTORICO ]                ");
		printf("\n\n");
		printf("=============================================");
		printf("\n\n");
	
			node *atual = MENU-> next;
	 	 	char resposta;
 	 
 	    if (atual == NULL)
    {
        printf("	Historico vazio...");
        printf("\n");
        printf("	Jogue mais vezes!");
        printf("\n\n");
    }
    else
    {
		 do
	 	 {
	 			printf("	Certeza que deseja limpar");
	 		printf("\n");
			printf("	o historico (S/N)? ");
	 			scanf(" %c", &resposta);
	 			
	 							printf("\n");
 	 	 
			 if (toupper(resposta) == 'S') 
			 {
			 		while (MENU -> next != NULL)
			 		{
					 		node *temp = MENU -> next;
							MENU -> next = temp -> next;	
					 		free(temp);
	 	 	 		}
	 	 	 		 		printf("	Historico limpo com sucesso!");
			 	 	 		printf("\n\n");	
			 }
					 else if (toupper(resposta) == 'N') 
					 {
					 			printf("=============================================");
								printf("\n\n");
					 	
					 			printf("	Pressione qualquer tecla para");
						    printf("\n");
							  printf("	voltar ao menu principal.");
								getchar();
						    getchar();
					 	
		 			    system("CLS");
		 			    return;
					 }
			 else 
			 {
          printf("	Opcao invalida.");
          printf("\n\n");
          
          printf("=============================================");
					printf("\n\n");
					
					printf("	Pressione qualquer tecla para");
			    printf("\n");
				  printf("	tentar novamente.");
          
          getchar();
          getchar();
          
          system("CLS");
          limparhistorico(MENU);
          return;
			 }
		} 
 
		 while (toupper(resposta) != 'S');
		}
		
		printf("=============================================");
		printf("\n\n");
		
			printf("	Pressione qualquer tecla para");
	    printf("\n");
		  printf("	voltar ao menu principal.");
			getchar();
	    getchar();
    
				system("CLS");
}

//=======================================================

int main()
{	
	node *MENU = (node *) malloc(sizeof(node));
	if(!MENU)
	{
		printf("	Sem memoria disponivel!");
		printf("\n");
		exit(1);
	}
	MENU->next = NULL; 

  int op = 0;

	do 
	{
		printf("\n");
		printf("=============================================");
	 	printf("\n\n");
		printf("                  JO-KEN-PO!                 ");
		printf("\n");
		printf("                   [ MENU ]                  ");
		printf("\n\n");
		printf("=============================================");
		printf("\n\n");
	
	printf("	1. Jogar");
	printf("\n");
	
		printf("	2. Regras");
		printf("\n");
		
			printf("	3. Historico");
			printf("\n");
			
				printf("	4. Limpar historico");
				printf("\n");
		
			printf("	5. Sair");
			printf("\n\n");
		
		printf("=============================================");
	 	printf("\n\n");
	
	printf("	Opcao selecionada: ");
	scanf("%d", &op);
	printf("\n");
						
	switch(op) 
	{
		case 1:
			system("CLS");
				 jogar(MENU);
				 break;
		case 2:
				 system("CLS");
				 regras();
				 break;
	  case 3:
	  		 system("CLS");
	  		 historico(MENU);
	  		 break;
	  case 4:
	  		 system("CLS");
  			 limparhistorico(MENU);
			   break;	
	  case 5:
	  		 system("CLS");
			   break;
			   
	  default:
	  	printf("=============================================");
	 		printf("\n\n");
			printf("	Opcao invalida!");
			
			getchar();
			getchar();
			
			system("CLS");
			main();
	} 

} while (op!=5);
	free(MENU);
  
	return 0;	
}
