                                /*Trabalho de José Viecili*/
//Bibliotecas
#include <stdio.h> 
#include <stdlib.h> 
#include <conio.h>
#include <string.h>


void de_roda(void);




int main(){
	
	de_roda();
	system("pause");
	
}

int removnot(){

	FILE *fptr;
	char ch;
	fptr = fopen("regisdenotas.txt", "w+");
	while ((ch=getche()) != '\r') 
	fclose(fptr);
    
}


int removdisc(){

	FILE *fptr;
	char ch;
	fptr = fopen("regisdedisc.txt", "w+");
	while ((ch=getche()) != '\r') 
	fclose(fptr);
	
}

int removalun(){

	FILE *fptr;
	char ch;
	fptr = fopen("regisdealuno.txt", "w+");
	while ((ch=getche()) != '\r') 
	fclose(fptr);
    
}

/*Função que grava os alunos/Função na qual recebe os alunos/Edições para a tabela aluno/Função que visualiza os alunos*/
void savealun(char savealuno[1000]){
	
 FILE *arq;
    arq = fopen("regisdealuno.txt", "a");
    if(arq == NULL) {
        printf("Erro: Não encontrado");
    }else {
        fprintf(arq, savealuno);
    }
    fclose(arq);
   
}

void editaluno(char oeditaluno[1000]){
	
    FILE *arq;
    arq = fopen("regisdealuno.txt", "a+");
    if(arq == NULL) {
        printf("Erro: Não encontrado");
    }else {
        fprintf(arq, oeditaluno);
    }
    fclose(arq);
    
}

int viewa (void) {	
	int c;
	FILE *pl;
	char *nome = "regisdealuno.txt";
	if (( pl = fopen(nome, "r")) == NULL) {
		printf("\nErro: Nao e possivel abrir\n");
		exit(1);
	}
	c = fgetc(pl);
	while (!feof(pl)) {
		putchar(c);
		c = fgetc(pl);
	}
	fclose(pl);
	return 0; 
}



void aluno(char nome[10], int ID_aluno){
	char text[20];
	char savealuno[1000];
	strcat(savealuno,"\n Nome do aluno: ");
	strcat(savealuno,nome);
	strcat(savealuno,"\n ID do aluno: ");
	sprintf(text,"%d",ID_aluno);	
	strcat(savealuno,text);
	savealun(savealuno);	
}

void saveeditalun(char nome[10], int ID_aluno){			
	char textedit[20];
	char oeditaluno[1000];
	strcat(oeditaluno,"\nEsse e o nome do aluno: ");
	strcat(oeditaluno,nome);
	strcat(oeditaluno,"\nEsse e o id do aluno: ");
	sprintf(textedit,"%d",ID_aluno);	
	strcat(oeditaluno,textedit);
	editaluno(oeditaluno);	
}

/*Função que grava o registro da disciplina/Função na qual recebe os dados para efetuar o registro das disciplina/Função que visualiza as disciplinas*/

void savedisci(char savedisciplin[1000]){
	
    FILE *arq;
    arq = fopen("regisdedisc.txt", "a");
    if(arq == NULL) {
        printf("Erro: Não encontrado");
    }else {
        fprintf(arq, savedisciplin);
    }
    fclose(arq);
}

void editdisci(char oeditdisciplin[1000]){		
	
    FILE *arq;
    arq = fopen("regisdediscs.txt", "a");
    if(arq == NULL) {
        printf("Erro: Não encontrado");
    }else {
        fprintf(arq, oeditdisciplin);
    }
    fclose(arq);
}

int viewd (void) {	
	int c;
	FILE *pl;
	char *nome = "regisdediscs.txt";
	if (( pl = fopen(nome, "r")) == NULL) {
		printf("\nErro: Nao e possivel abrir\n");
		exit(1);
	}
	c = fgetc(pl);
	while (!feof(pl)) {
		putchar(c);
		c = fgetc(pl);
	}
	fclose(pl);
	getchar();
	return 0; 
}

void disciplina(char lsdisciplina[20], int ID_disciplina){
	char text[20];
	char savedisciplin[1000];	
	strcat(savedisciplin,"\nEste e o nome da disciplina: ");
	strcat(savedisciplin,lsdisciplina);
	strcat(savedisciplin,"\nEste e o ID da disciplina: ");
	sprintf(text,"%d",ID_disciplina);	
	strcat(savedisciplin,text);
	savedisci(savedisciplin);	
}

void saveeditdisci(char lsdisciplina[20], int ID_disciplina){
	char textedit[20];
	char oeditdisciplin[1000];
	strcat(oeditdisciplin,"\nEsse e o nome da disciplina: ");
	strcat(oeditdisciplin,lsdisciplina);
	strcat(oeditdisciplin,"\nEsse e o ID da disciplina: ");
	sprintf(textedit,"%d",ID_disciplina);	
	strcat(oeditdisciplin,textedit);
	editdisci(oeditdisciplin);	
}

/*Função que grava o registro de nota/Função na qual recebe os dados para o registro da nota/Função que visualiza os as notas*/
void savenota(char savedanota[1000]){
	
    FILE *arq;
    arq = fopen("regisdenotas.txt", "a");
    if(arq == NULL) {
        printf("Erro: Não encontrado");
    }else {
        fprintf(arq, savedanota);
    }
    fclose(arq);
    
}

void nota(int notaluno, int ID_disciplina, int ID_aluno){
	char text[2];
	char text2[2];
	char text3[2];
	
	char savedanota[1000];
	strcat(savedanota,"\n Valor da nota: ");
    sprintf(text3,"%d",notaluno);
    strcat(savedanota,text3);
	strcat(savedanota,"\n Id da disciplina: ");
	sprintf(text,"%d",ID_disciplina);
	strcat(savedanota,text);
	strcat(savedanota,"\n Id do aluno: ");
	sprintf(text2,"%d",ID_aluno);	
	strcat(savedanota,text2);
	savenota(savedanota);	
}

int viewn (void) {	
	int c;
	FILE *pl;
	char *nome = "regisdenotas.txt";
	if (( pl = fopen(nome, "r")) == NULL) {
		printf("\n Erro: Nao e possivel abrir \n");
		exit(1);
	}
	c = fgetc(pl);
	while (!feof(pl)) {
		putchar(c);
		c = fgetc(pl);
	}
	fclose(pl);
	return 0;
	getchar();
}


void de_roda(){
	
	int choice,op, ID_aluno, ID_disciplina, notaluno;
	char i,nome[10], save[1000], lsdisciplina[20], savedoaluno_2[1000]; 
	
	printf("Escolha um valor para selecionar uma operacao: ");
	printf("\n 1- Salvar");
	printf("\n 2- Editar");
	printf("\n 3- Excluir");
	printf("\n 4- Acessar");
	printf("\n 5- Sair \n");
	printf("Qual a operacao:");
	scanf("%d",&op);
	
	switch(op){
		case 1:
			printf("\nEscolha o que deseja fazer:");
	        printf("\n 1-Salvar os dados em alunos \n");
	        printf("\n 2-Salvar os dados em disciplinas \n");
	        printf("\n 3-Salvar os dados em notas \n");
	        printf("\n 4-Sair\n");	
	        scanf("%d",&choice);
	        
			if (choice==1){
			 printf("\nDigite o nome do aluno: "); 
    		 scanf ("%s", &nome[i]);
    		 printf("Digite o ID do aluno: "); 
    		 scanf ("%d", &ID_aluno); 
    		 de_roda();
			 aluno (nome,ID_aluno);
			}
			if (choice ==2){
			 printf("\nDigite o nome da disciplina: ");
    		 scanf ("%s", &lsdisciplina[i]); 
    		 printf("Digite o ID da disciplina: "); 
    		 scanf ("%d", &ID_disciplina);
    		 de_roda();
			 disciplina (lsdisciplina,ID_disciplina);
			}
			if (choice ==3){
			 printf("\nDigite o valor da nota: "); 
    		 scanf ("%d", &notaluno); 
    		 printf("Digite o ID da disciplina: "); 
    		 scanf ("%d", &ID_disciplina); 
    		 printf("Digite o ID do aluno: "); 
    		 scanf ("%d", &ID_aluno); 
    		 de_roda();
			 nota (notaluno,ID_disciplina, ID_aluno);	
			}
			if (choice==4){
			 de_roda();
			} 
			break;
		case 2:
			printf("\nSelecione qual tabela deseja atualizar:");
            printf("\n 1-Alunos\n");
            printf("\n 2-Disciplinas\n");
            printf("\n 3-Notas\n");
            printf("\n 4-Voltar ao menu\n");
            printf("\n 5-Sair\n \n");
            scanf("%d", &choice);
            
           if(choice==1){
           	 printf("\nQual o nome do aluno: "); 
    	     scanf ("%s", &nome[i]); 
    	     printf("Qual o ID do aluno: "); 
    	     scanf ("%d", &ID_aluno); 
    	     printf("\nOs dados foram atualizados \n");
    	     de_roda();
		     aluno (nome,ID_aluno);
		   } 
		   
           if(choice==2){
           	 printf("\nQual a disciplina: "); 
    	     scanf ("%s", &lsdisciplina[i]); 
    	     printf("Qual o ID da disciplina: "); 
    	     scanf ("%d", &ID_disciplina); 
    	     printf("\nOs dados foram atualizados \n");
    	     de_roda();
		     disciplina (lsdisciplina,ID_disciplina);
           	
		   }
		   
		   if(choice ==3){
		   	 printf("\nQual o valor da nota: "); 
    	     scanf ("%d", &notaluno); 
    	     printf("Qual o ID da disciplina: "); 
    	     scanf ("%d", &ID_disciplina);
    	     printf("Digite o ID do aluno: "); 
    	     scanf ("%d", &ID_aluno); 
    	     printf("\nOs dados foram atualizados\n");
    	     de_roda();
		     nota (notaluno,ID_disciplina, ID_aluno);
		   }
		   
		   if(choice ==4){
		   	 de_roda();
		   } 
		 break;
		 
		case 3:
		 printf("\nQuais das tabelas abaixo voce deseja limpar:");
         printf("\n 1-Alunos");
         printf("\n 2-Disciplinas");
         printf("\n 3-Notas");
         printf("\n 4-Voltar \n");
         scanf("%d", &choice);
		 	
		 if(choice==1){
		     printf("\nA tabela aluno foi limpada \n");
			 removalun();
			 de_roda();
		 } 	 
		 	
		 if(choice==2){
		     printf("\nA tabela disciplina foi limpada \n");
			 removdisc();
			 de_roda();	
		 }
		 	
		 if(choice=3){
		     printf("\nA tabela nota foi limpada \n");
			 removnot();
			 de_roda();	
		 }
		 
		 if(choice==4){
		 	 de_roda();
		 }	
		 break;	
		
		case 4:
		  printf("\nQual tabela deseja acessar:");
          printf("\n 1-Alunos");
          printf("\n 2-Disciplinas");
          printf("\n 3-Notas");
          printf("\n 4-Voltar \n");
          scanf("%d", &choice);
			
		 if(choice==1){
		     viewa();
		 }
		 
		 if(choice==2){
		 	 viewd();
		 }
		 
		 if(choice==3){
		 	 viewn();
		 }
		 
		 if(choice==4){
		 	 de_roda();
		 }
		break;
			
	    case 5:
		 system("exit"); 
         printf("\n........ACABOU............\n");
		 break;
			
		default:
		 printf("\n Invalido \n");
         de_roda();
         break;
	}
}
	






	


