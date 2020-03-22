    #include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

 int pass(senha, senha1){

    printf("Digite o uma Senha:\n ");
    gets(senha);

    printf("Digite novamente a Senha\n: ");
    gets(senha1);
 }

int main()
{
    char nome[30];
    char email[30];
    char senha[30];
    char senha1[30];
    char x;

    printf("\tConferindo Senhas\n");

    printf("Digite o Seu Nome: ");
    gets(nome);

    printf("Digite o Seu Email: ");
    gets(email);

    pass(senha, senha1);


    if(strcmp(senha,senha1) == 0){
        printf("\tUsuário Cadastrado com Sucesso!!\n");
    }
    else{
        printf("Senhas diferentes!!\n");
    }
        printf("Digite S para redigitar a sua senha\n");
        x =getchar();
            if(x =='s'){
                printf("Digite novamente a Senha\n: ");
            gets(senha);
            }
            else{
                printf("Aperte enter para Sair");
            }

    return 0;
}
