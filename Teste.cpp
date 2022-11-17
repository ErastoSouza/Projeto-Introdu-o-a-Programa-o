#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

int main(){
	
	int l,c,linha,coluna,g=0,cont,al1,al2,jogador=1,linha2,coluna2, x;	
	char tab[9][9], letra[8];
	
	letra [0]= 'a';
	for(x=1;x<9;x++)
	letra [x]=letra[x-1]+1;
	
	srand(time(NULL));
	
	for(l=0;l<9;l++){
		for(c=0;c<9;c++)
			tab[l][c]=' ';
	}
		while(cont!=5){
			al1=rand()%9;
			al2=rand()%9;
			if(tab[al1][al2]==' '){
				tab[al1][al2]='x';
				cont++;
		}
			else {
				while(tab[al1][al2]==' '){	
					al1=rand()%9;
					al2=rand()%9;
					tab[al1][al2]='x';
					cont++;
					}
			}
	}

	
	al1=0;al2=0;cont=0;
	
		while(cont!=5){
			al1=rand()%9;
			al2=rand()%9;
			if(tab[al1][al2]==' '){
				tab[al1][al2]='o';
				cont++;
		}
			else {
				while(tab[al1][al2]==' '){	
					al1=rand()%9;
					al2=rand()%9;
					tab[al1][al2]='o';
					cont++;
					}
			}
	}
	do{
	
		printf("\n\t  0   1   2   3   4   5   6   7   8 \n");
		for(l=0;l<9;l++){
			for(c=0;c<9;c++){
				if(c==0){
					printf("\t| ");
				}
				printf("%c",tab[l][c]);
				
				if(c<=8){
					printf(" | ");
				}
				if(c==8){
					printf("%c",letra[l]);
				}
			}		
				if(l<8)
					printf("\n\t-------------------------------------");
			printf("\n");	
		}
		printf("\n\n");
		
		if(jogador=1){
		
		printf("jogador %d digite a peca que deseja jogar:\nLinha: ",jogador);
		scanf("%d",&linha);
		while (linha < 0 || linha >8){
			printf("Linha invalida, escolha novamente\nLinha: ");
			scanf("%d",&linha);
		}
		printf("Coluna: ");
		scanf("%d",&coluna);
		while (coluna < 0 || coluna >8){
			printf("Linha coluna, escolha novamente\nColuna: ");
			scanf("%d",&coluna);
	}
	printf("digite o destino da peca:\nLinha: ");
		scanf("%d",&linha2);
		while (linha2 < 0 || linha2 >8){
			printf("Linha invalida, escolha novamente\nLinha: ");
			scanf("%d",&linha2);
		} 
		printf("Coluna:");
		scanf("%d",&coluna2);
		while (coluna2 < 0 || coluna2 >8){
			printf("Linha coluna, escolha novamente\nColuna: ");
			scanf("%d",&coluna2);
	}
		
		tab[linha2][coluna2]=tab[linha][coluna];
		tab[linha][coluna]='+';
		jogador=2;
		system ("cls");
		}
		
			printf("\n\t  0   1   2   3   4   5   6   7   8 \n");
		for(l=0;l<9;l++){
			for(c=0;c<9;c++){
				if(c==0){
					printf("\t| ");
				}
				printf("%c",tab[l][c]);
				
				if(c<=8){
					printf(" | ");
				}
				if(c==8){
					printf("%c",letra[l]);
				}
			}			if(l<8)
				printf("\n\t-------------------------------------");
			printf("\n");	
		}
		printf("\n\n");		
		if(jogador=2){
		
		printf("jogador %d digite a peca que deseja jogar:\nLinha: ",jogador);
		scanf("%d",&linha);
		while (linha < 0 || linha >8){
			printf("Linha invalida, escolha novamente\nLinha: ");
			scanf("%d",&linha);
		}
		printf("Coluna: ");
		scanf("%d",&coluna);
		while (coluna < 0 || coluna >8){
			printf("Linha coluna, escolha novamente\nColuna: ");
			scanf("%d",&coluna);
	}
		printf("digite o destino da peca:\nLinha: ");
		scanf("%d",&linha2);
		while (linha2 < 0 || linha2 >8){
			printf("Linha invalida, escolha novamente\nLinha: ");
			scanf("%d",&linha2);
		} 
		printf("Coluna:");
		scanf("%d",&coluna2);
		while (coluna2 < 0 || coluna2 >8){
			printf("Linha coluna, escolha novamente\nColuna: ");
			scanf("%d",&coluna2);
	}
		tab[linha2][coluna2]=tab[linha][coluna];
		tab[linha][coluna]='*';
		jogador=1;
		system("cls");
		}
		
	
		
	}while(g!=1);
}
