#include "Conta.h"

int main(){
    ContaBancaria *c;
    Cliente *p;
    EnderecoCliente *e;
    int num_c=5,choice,i=-1,j;

    c=(ContaBancaria *)malloc(num_c*(sizeof(ContaBancaria)));
    p=(Cliente *)malloc(num_c*(sizeof(Cliente)));
    e=(EnderecoCliente *)malloc(num_c*(sizeof(EnderecoCliente)));

    do{
    printf("1-Cadastrar\n2-Vizualizar conta\n3-Saque\n4-Deposito\n5-Emprestimo\n6-Finalizar\n");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            i++;
            Inicializa(&c[i],&p[i],&e[i]);
            break;
        case 2:
            printf("Numero do cliente: ");
            scanf("%d",&j);
            Imprime(&c[j-1],&p[j-1],&e[j-1]);
            break;
        case 3:
            printf("Numero do cliente: ");
            scanf("%d",&j);
            Saque(&c[i]);
            break;
        case 4:
            printf("Numero do cliente: ");
            scanf("%d",&j);
            Deposito(&c[i]);
            break;
        case 5:
            printf("Numero do cliente: ");
            scanf("%d",&j);
            Emprestimo(&c[i]);
            break;
        case 6:
            break;
        }
    }while(choice!=6);
    free(c);
    free(p);
    free(e);
}
