#include "Conta.h"

int main(){
    ContaBancaria conta1;
    Cliente client1;
    EnderecoCliente ende1;
    int choice;
    do{
    printf("1-Cadastrar\n2-Vizualizar conta\n3-Saque\n4-Deposito\n5-Emprestimo\n6-Finalizar\n");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            Inicializa(&conta1,&client1,&ende1);
            break;
        case 2:
            Imprime(&conta1,&client1,&ende1);
            break;
        case 3:
            Saque(&conta1);
            break;
        case 4:
            Deposito(&conta1);
            break;
        case 5:
            Emprestimo(&conta1);
            break;
        case 6:
            break;
        }
    }while(choice!=6);
}
