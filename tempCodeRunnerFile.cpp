#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

// ESSE FOI MEU PRIMEIRO PROJETO NA MATERIA LÓGICA DE PROGRAMAÇÃO
// É UM PROJETO SIMPLES, FEITO COM O QUE APRENDI EM SALA <3
int main(){


     struct dados_cliente{
        char nome_completo [50]; // criei uma struct para coletar dados do titular para o contrato
        char endereco[50];
        int telefone [12];
        char cpf [11];
    };

   typedef struct dados_dep{ // também criei uma struct para coletar dados dos dependetes
        char nome_dep [200];
        char cpf_dep [11];
        char pet_dep [20];

    }Dependente;
     Dependente dep[4];

    int op; // entrada do switch
    int opcao;

setlocale(LC_ALL, "Portuguese");

// fiz a imagem abaixo em um site
do{
printf("\n..........................................................................................................");
printf("\nFFFFFFFFFF.UUUU...UUUU..NNNN...NNNN..EEEEEEEEEEE.RRRRRRRRRR......AAAAA.....RRRRRRRRRR..RIIII....AAAAA.....");
printf("\nFFFFFFFFFF.UUUU...UUUU..NNNNN..NNNN..EEEEEEEEEEE.RRRRRRRRRRR.....AAAAA.....RRRRRRRRRRR.RIIII....AAAAA.....");
printf("\nFFFFFFFFFF.UUUU...UUUU..NNNNN..NNNN..EEEEEEEEEEE.RRRRRRRRRRR....AAAAAA.....RRRRRRRRRRR.RIIII...AAAAAA.....");
printf("\nFFFF.......UUUU...UUUU..NNNNNN.NNNN..EEEE........RRRR...RRRRR...AAAAAAA....RRRR...RRRRRRIIII...AAAAAAA....");
printf("\nFFFF.......UUUU...UUUU..NNNNNN.NNNN..EEEE........RRRR...RRRRR..AAAAAAAA....RRRR...RRRRRRIIII..AAAAAAAA....");
printf("\nFFFFFFFFF..UUUU...UUUU..NNNNNNNNNNN..EEEEEEEEEE..RRRRRRRRRRR...AAAAAAAA....RRRRRRRRRRR.RIIII..AAAAAAAA....");
printf("\nFFFFFFFFF..UUUU...UUUU..NNNNNNNNNNN..EEEEEEEEEE..RRRRRRRRRRR...AAAA.AAAA...RRRRRRRRRRR.RIIII..AAAA.AAAA...");
printf("\nFFFFFFFFF..UUUU...UUUU..NNNNNNNNNNN..EEEEEEEEEE..RRRRRRRR.....AAAAAAAAAA...RRRRRRRR....RIIII.AAAAAAAAAA...");
printf("\nFFFF.......UUUU...UUUU..NNNNNNNNNNN..EEEE........RRRR.RRRR....AAAAAAAAAAA..RRRR.RRRR...RIIII.AAAAAAAAAAA..");
printf("\nFFFF.......UUUU...UUUU..NNNN.NNNNNN..EEEE........RRRR..RRRR...AAAAAAAAAAA..RRRR..RRRR..RIIII.AAAAAAAAAAA..");
printf("\nFFFF.......UUUUUUUUUUU..NNNN..NNNNN..EEEEEEEEEEE.RRRR..RRRRR.RAAA....AAAA..RRRR..RRRRR.RIIIIIAAA....AAAA..");
printf("\nFFFF........UUUUUUUUU...NNNN..NNNNN..EEEEEEEEEEE.RRRR...RRRRRRAAA.....AAAA.RRRR...RRRRRRIIIIIAAA.....AAA..");
printf("\nFFFF.........UUUUUUU....NNNN...NNNN..EEEEEEEEEEE.RRRR....RRRRRAAA.....AAAA.RRRR....RRRRRIIIIIAAA.....AAA..");
printf("\n..........................................................................................................");

printf("\n");

struct dados_cliente cliente; // aqui começa a inclusão de dados no txt
fflush(stdin);
printf("Qual o nome do títular do plano funerário? \n");
    fgets(cliente.nome_completo,50,stdin);
    fflush(stdin);
printf("Qual o endereço residêncial do títular? \n");
    fgets(cliente.endereco,50,stdin);
    fflush(stdin);
printf("Qual o telefone do títular ?\n");
    scanf("%d", &cliente.telefone);
printf("Qual o CPF do títular? \n");
    scanf("%s", &cliente.cpf);

    system("cls");

printf(" 1- Plano Econômico - R$59,90 \n"); // precisa selecionar qual plano deseja para entrar npo switch
printf(" 2- Plano Familiar  - R$99,99 \n");
printf("Selecione o número da opção desejada\n");
    scanf("%d", &op);

    system("cls");

switch (op){


case 1 : // dados para o plano economico



for(int cont=0;cont<=1;cont++){//I repetição para NCLUIR 1 DEPENDENTES
    strcpy(dep[cont].nome_dep,"null");
    dep[cont].cpf_dep;
    fflush(stdin);

}


for(int cont=0;cont<1;cont++){ 
    printf("Informe o nome do dependente: \t");
        fgets(dep[cont].nome_dep,200,stdin);
        fflush(stdin);
     printf("Informe os CPF's: \t");
        scanf("%11s%*c", &dep[cont].cpf_dep);
         system("cls");
}
printf ("\n");

FILE*file; // criação do txt
file=fopen("file.txt", "w"); // criação + o que deve ser feito no txt, no meu caso era só W que é write (escrever)

fputs("==========================================================\n", file);
fputs("                     CONTRATO FUNERÁRIO                   \n", file);
fputs("==========================================================\n", file);


for(int cont=0;cont<1;cont++){ // exibição da primeira escolha dos planos
printf("O dependente incluso foi: %s", dep[cont].nome_dep);
fputs("NOME DO DEPENDENTE: \t", file);
fputs(dep[cont].nome_dep, file);
printf("O CPF inclusos: %s", dep[cont].cpf_dep);
fputs("CPF DO DEPENDENTE: \t", file);
fputs(dep[cont].cpf_dep, file);

  }
printf("\n");
fputs("\n",file);
printf("Titular do plano: %s", cliente.nome_completo);
fputs("NOME DO TÍTULAR: \t", file);
fputs(cliente.nome_completo, file);
printf("CPF do títular: %11s\n", cliente.cpf);
fputs("CPF DO TÍTULAR: \t", file);
fputs(cliente.cpf, file);

fputs("\n",file);
fputs("\n",file);

fputs("---Parabéns pela adesão do seu plano na funerária GRAVE---\n", file);
fputs("---   Você selecionou o plano econômico  por R$59,90   ---\n", file);

fputs("\n",file);

fputs("Incluso: Funeral \n", file);
fputs("Incluso: Tanatopraxia \n", file);
fputs("Incluso: Sepultamento \n", file);
fputs("Incluso: Translado Nacional \n", file);

fputs("\n",file);

fputs("ASSINATURA DO TÍTULAR:_____________________________________\n", file);


fclose(file);
break;

case 2 : // dados para o plano familiar

for(int count=0;count<3;count++){//INCLUIR 3 DEPENDENTES, um deles pode ser o nome do PET
    strcpy(dep[count].nome_dep, "null");
    dep[count].cpf_dep;
    fflush(stdin);
}

for(int count=0;count<3;count++){
    printf("Informe o nome do dependente: \t");
        fgets(dep[count].nome_dep,200,stdin);
        fflush(stdin);
     printf("Informe os CPF's: \t");
        scanf("%11s%*c", &dep[count].cpf_dep);

}
system("cls");
printf("\n");
FILE*file2;
file2=fopen("file2.txt", "w");

fputs("==========================================================\n", file2);
fputs("                     CONTRATO FUNERÁRIO                   \n", file2);
fputs("==========================================================\n", file2);


for(int count=0;count<3;count++){
printf("Os dependetes inclusos são: %s", dep[count].nome_dep); // esse for vai exibir os dados do segundo contrato tanto txt quanto na tela preta
fputs("NOME DO DEPENDENTE: \t", file2);
fputs(dep[count].nome_dep, file2); // a maioria dos dados vai para o txt com os fputs
printf("Os CPF's inclusos: %s \n", dep[count].cpf_dep); // somente alguns dados vai para a tela preta
fputs("CPF DO DEPENDENTE: \t", file2);
fputs(dep[count].cpf_dep, file2);
fputs("\n",file2);

}
printf("\n"); // exibir contrato, tudo que tiver abaixo as partes com fputs são para incluir no txt
fputs("\n",file2);
printf("Titular do plano %s", cliente.nome_completo);
fputs("NOME DO TÍTULAR: \t", file2);
fputs(cliente.nome_completo, file2);
printf("CPF do plano %11s\n", cliente.cpf);
fputs("CPF DO TÍTULAR: \t", file2);
fputs(cliente.cpf, file2);

fputs("\n",file2);
fputs("\n",file2);

fputs("---Parabéns pela adesão do seu plano na funerária GRAVE---\n", file2);
fputs("---   Você selecionou o plano familiar  por R$99,99   ---\n", file2);

fputs("\n",file2);

fputs("Incluso: Funeral \n",file2);
fputs("Incluso: Tanatopraxia \n",file2);
fputs("Incluso: Sepultamento\n",file2);
fputs("Incluso: Cremação\n",file2);
fputs("Incluso: Translado Nacional\n",file2);
fputs("Incluso: Cremação de PET\n",file2);

fputs("\n",file2);

fputs("ASSINATURA DO TÍTULAR:_____________________________________\n", file2);

fclose(file2);

break;
}

printf("Você deseja imprimir um novo contrato? [1] SIM e [2] NÃO \n");
    scanf("%d", &opcao);

    }while(opcao==1); // caso você queira gerar outros contratos de vendas

return 0 ;
}
