#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>


// erros encontrados: o programa permite colocar dois numeros na coluna ex:a20,c30./o programa não aceita letras maiusculas
/*void exibeTabuleiro(){

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

		return;
}*/


int main(){

	int l,c,linha,coluna,g=0,cont,al1,al2,jogador=1,linha2,coluna2, x;
	char tab[9][9], letra[9], movimento[2];

	letra [0]= 'a';
	for(x=1;x<10;x++)
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

		printf("\n\t  1   2   3   4   5   6   7   8   9 \n");
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

		printf("jogador %d digite a peca que deseja jogar (linha e coluna) (a-i)(1-9)\n",jogador);
		scanf("%s",&movimento);

		linha = movimento[0]-'a'; coluna = movimento[1] - '1';
		//linha = linha[0]-a, será com essa operação que nós iremos tranformar a string em int.Logo é aswsim que iremos poder receber letras

		while (linha < 0 || linha >8 || coluna < 0 || coluna > 8){

			printf("Linha ou coluna invalida, escolha novamente\n");
			scanf("%s",&movimento);
			linha = movimento[0]-'a'; coluna = movimento[1] - '1';
			}

		/*printf("Coluna: ");
		scanf("%d",&coluna);*/

		/*while (coluna < 0 || coluna >8){
			printf("Linha coluna, escolha novamente\nColuna: ");
			scanf("%d",&coluna);
	}*/

		while(tab[linha][coluna]!='x'){
			printf("posicao invalida, escolha novamente\n");
			scanf("%s", &movimento);
			linha = movimento[0]-'a'; coluna = movimento[1] - '1';

			/*printf("digite uma linha valida:\n");
			scanf("%d",&linha);
			printf("digite uma coluna valida:\n");
			scanf("%d",&coluna);*/
		}

		printf("digite o destino da peca\n");
		scanf("%s",&movimento);

		linha2 = movimento[0]-'a'; coluna2 = movimento[1] - '1';

		while (linha2 < 0 || linha2 >8 || coluna2 < 0 || coluna2 > 8){
			printf("Linha ou coluna invalida, escolha novamente\n ");
			scanf("%s",&movimento);
			linha2 = movimento[0]-'a'; coluna2 = movimento[1] - '1';
		}

		/*printf("Coluna:");
		scanf("%d",&coluna2);

		while (linha2 < 0 || linha2 >8){
			printf("Linha coluna, escolha novamente\nColuna: ");
			scanf("%d",&coluna2);
	}*/
		while(tab[linha2][coluna2]!=' '){
			printf("posicao invalida, esolha novamente\n");
			scanf("%s", &movimento);
			linha2 = movimento[0]-'a'; coluna2 = movimento[1] - '1';
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
		scanf("%s",&movimento);

		linha = movimento[0]-'a'; coluna = movimento[1] - '1';

		while (linha < 0 || linha >8 || coluna < 0 || coluna > 8){

			printf("Linha ou coluna invalida, escolha novamente\n");
			scanf("%s",&movimento);
			linha = movimento[0]-'a'; coluna = movimento[1] - '1';
		}

		/*printf("Coluna: ");
		scanf("%d",&coluna);
		while (coluna < 0 || coluna >8){
			printf("Linha coluna, escolha novamente\nColuna: ");
			scanf("%d",&coluna);
	}*/

	while(tab[linha][coluna]!='o'){
			printf("posicao invalida, escolha novamente\n");
			scanf("%s", &movimento);
			linha = movimento[0]-'a'; coluna = movimento[1] - '1';

		}

		printf("digite o destino da peca\n:");
		scanf("%s",&movimento);

		linha2 = movimento[0]-'a'; coluna2 = movimento[1] - '1';


		while (linha2 < 0 || linha2 >8 || coluna2 < 0 || coluna2 > 8){
			printf("Linha ou coluna invalida, escolha novamente\n ");
			scanf("%s",&movimento);
			linha2 = movimento[0]-'a'; coluna2 = movimento[1] - '1';
		}


		/*printf("Coluna:");
		scanf("%d",&coluna2);
		while (coluna2 < 0 || coluna2 >8){
			printf("Linha coluna, escolha novamente\nColuna: ");
			scanf("%d",&coluna2);
	}*/

	while(tab[linha2][coluna2]!=' '){
            printf("posicao invalida, esolha novamente\n");
			scanf("%s", &movimento);
			linha2 = movimento[0]-'a'; coluna2 = movimento[1] - '1';
		}

		tab[linha2][coluna2]=tab[linha][coluna];
		tab[linha][coluna]='*';
		jogador=1;
		system("cls");
		}



	}while(g!=1);
}
