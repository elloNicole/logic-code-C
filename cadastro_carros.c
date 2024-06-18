#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Carros {
        int id;
        char nome_dono[19];
        char modelo[19];
        char marca[19];
        int ano;
        char problema[49];
};

int MostraTela();
void Cad_Carro(struct Carros cadastro[], int *num_carros);
void Mostra_Cad(struct Carros cadastro[], int *num_carros);
void Exclui_Cad(struct Carros cadastro[], int *num_carros);

int main()
{
    int menu=0, id=0, i;
    struct Carros carros [99];

    do {
        menu=MostraTela();

        switch (menu){


                case 1:
                        Cad_Carro(carros, &id);
                        break;

                case 2:
                        Mostra_Cad(carros, &id);
                        break;

                case 3:
                        Exclui_Cad(carros, &id);
                        break;

                case 4:
                        printf("Obrigado! Saindo do menu...");
                        printf("\n ------------------------------------ \n");
                        break;

                default:
                         printf("Valor inválido");
                         break;
                }

    } while(menu!=4);
}

void Cad_Carro(struct Carros cadastro[], int *num_carros){
int i, id, num_carro = *num_carros;

        printf("Digite o nome do carro id %d: ", num_carro+1);
        fgets(cadastro[num_carro].nome_dono,19, stdin);
        cadastro[num_carro].nome_dono[strcspn(cadastro[num_carro].nome_dono, "\n")] = '\0';

        printf("Digite o marca do carro id %d: ", num_carro+1);
        fgets(cadastro[num_carro].marca,19, stdin);
        cadastro[num_carro].marca[strcspn(cadastro[num_carro].marca, "\n")] = '\0';

        printf("Digite o modelo do carro id %d: ", num_carro+1);
        fgets(cadastro[num_carro].modelo,19, stdin);
        cadastro[num_carro].modelo[strcspn(cadastro[num_carro].modelo, "\n")] = '\0';

        printf("Digite o ano do carro id %d: ", num_carro+1);
        scanf("%d", &cadastro[num_carro].ano);
        getchar();

        printf("Digite o nome do carro id %d: ", num_carro+1);
        fgets(cadastro[num_carro].problema,49, stdin);
        cadastro[num_carro].problema[strcspn(cadastro[num_carro].problema, "\n")] = '\0';


        cadastro[num_carro].id=num_carro+1;

    *num_carros = num_carro+1;

}

void Mostra_Cad(struct Carros cadastro[], int *num_carros) {
	
    int recebe_id;

    printf("Digite o id do carro que deseja visualizar: ");
    scanf("%d",recebe_id);
    getchar();

    if (recebe_id <= 0 || recebe_id > *num_carros) {
    printf("ID inválido\n");
    return;
    }

    printf("Carro %d:\n", cadastro[recebe_id-1].id);
    printf("Nome: %s\n",cadastro[recebe_id-1].nome_dono);
    printf("Modelo: %s\n", cadastro[recebe_id-1].modelo);
    printf("Marca: %s\n", cadastro[recebe_id-1].marca);
    printf("Ano: %d\n", cadastro[recebe_id-1].ano);
    printf("Problema: %s\n", cadastro[recebe_id-1].problema);

}

void Exlui_Cad(struct Carros cadastro[], int *num_carros) {
int id_excluir, i;

    printf("Digite o id do carro que deseja excluir: ");
    scanf("%d", &id_excluir);
    getchar();

        if (id_excluir <= 0 || id_excluir > *num_carros) {
            printf("ID inválido\n");
            return;
        }

        for (i = id_excluir-1; i < *num_carros-1; i++) {
            cadastro[i] = cadastro[i+1];
        }

        (*num_carros)--;

    printf("Carro %d excluído com sucesso!\n", id_excluir);


}

MostraTela(){

   int i;

   printf("\nSelecione um número:\n");
   printf("1 - Cadastrar Carro: \n");
   printf("2 - Mostrar dados do carro desejado. \n");
   printf("3 - Excluir dados do carro. \n");
   printf("4 - Sair no menu. \n");
   printf("\n");
   scanf("%d", &i);
   printf("\n ------------------------------------ \n");

    return i;
}

