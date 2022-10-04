#include "Conta.h"

void Inicializa(ContaBancaria* conta, Cliente* client,EnderecoCliente* endereco){
    int n,ano;
    double sal;
    char tip[9];

    char nome[100];
    char cpf[15];
    char data[11];

    char rua[100];
    char bairro[100];
    int numero;
    char comp[20];

    printf("Numero da sua conta: ");
    scanf("%d",&n);
    printf("Tipo de conta: ");
    scanf("%s",&tip);
    printf("Saldo inicial: ");
    scanf("%lf",&sal);
    printf("Ano de abertura da conta: ");
    scanf("%d",&ano);

    getchar();

    printf("Nome: ");
    fgets(nome,100,stdin);
    printf("CPF: ");
    scanf("%s",&cpf);
    printf("Data de nascimento: ");
    scanf("%s",&data);

    getchar();

    printf("Endereco:\n");
    printf("Rua: ");
    fgets(rua,100,stdin);
    printf("Bairro: ");
    fgets(bairro,100,stdin);
    printf("Numero: ");
    scanf("%d",&numero);
    getchar();
    printf("Complemento: ");
    fgets(comp,20,stdin);

    conta->saldo = sal;
    conta->ano = ano;
    conta->numero = n;
    strcpy(conta->tipo,tip);

    strcpy((*client).nome,nome);
    strcpy((*client).CPF,cpf);
    strcpy((*client).DataNasc,data);

    strcpy((*endereco).Rua,rua);
    strcpy((*endereco).Bairro,bairro);
    strcpy((*endereco).Complemento,comp);
    (*endereco).NumeroCasa = numero;

    printf("Cadastro concluido com sucesso!\n");

}
void Imprime(ContaBancaria* conta,Cliente* client,EnderecoCliente* endereco){
    printf("\n");
    printf("Nome: %s\n",client->nome);
    printf("CPF: %s\n",client->CPF);
    printf("Data de nascimento: %s\n",client->DataNasc);
    printf("\n");
    printf("Endereco:\n");
    printf("Rua: %s\n",endereco->Rua);
    printf("Bairro: %s\n",endereco->Bairro);
    printf("N: %d\n",endereco->NumeroCasa);
    printf("Complemento: %s\n",endereco->Complemento);
    printf("\n");
    printf("Tipo de conta: %s\n",conta->tipo);
    printf("Numero da conta: %d\n",conta->numero);
    printf("Saldo: %.2lf\n", conta->saldo);
    printf("ano de abertura da conta: %d\n",conta->ano);

}
void Saque(ContaBancaria* conta){
    double saq;
    printf("Valor de saque: ");
    scanf("%lf",&saq);
    if(saq<=(*conta).saldo){
        (*conta).saldo-=saq;
        printf("Saque concluido com sucesso!\n");
    }
    else printf("Valor de saque recusado\n");

}
void Deposito(ContaBancaria* conta){
    double dep;
    printf("Valor de deposito: ");
    scanf("%lf",&dep);
    (*conta).saldo+=dep;
    printf("Deposito concluido com sucesso!\n");

}
void Emprestimo(ContaBancaria* conta){
    double empr;
    if(Avalia(conta)){
    printf("Valor de emprestimo: ");
    scanf("%lf",&empr);
    (*conta).saldo+=empr;
    printf("Emprestimo realizado com sucesso!");
    }
}
int Avalia(ContaBancaria* conta){
    int ano=2022,j;
    j=ano-((*conta).ano);
    if(j>5){
        printf("Obtencao de credito aceita!\n");
        return 1;
    }
    else{
        printf("Obtencao de credito negada!\n");
        return 0;
    }
}
