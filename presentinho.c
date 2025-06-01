#include <stdio.h>
#include <stdlib.h>

void Invalid(void) {
    system("clear");
    printf("\nVoce colocou uma opcao invalida\n");
}

int main(int argc, char *argv[]) {
    int option;

    do {
        system("clear");

        printf("\n------------------Conhecendo o amor da sua vida------------------\n");
        printf("Voce ve uma menina linda na escola, o que voce faz?\n");
        printf("1 - Voce pensa em falar com ela\n2 - Voce so ignora e segue a vida\n");
        printf("Opcao: ");
        scanf("%i", &option);

        switch (option) {
            case 1:
                system("clear");
                printf("\n------------------Conhecendo o amor da sua vida------------------\n");
                printf("Perfeito, mas ela nem te conhece ainda, como voce fala com ela?\n");
                printf("1 - Voce desiste de falar com ela\n2 - Voce fala pro seu amigo que voce quer conversar com ela\n");
                printf("Opcao: ");
                scanf("%i", &option);

                if (option == 1) {
                    system("clear");
                    printf("\nEla nem soube quem era voce e voce nunca mais viu ela\n");
                    option = 0;
                } else if (option == 2) {
                    system("clear");
                    printf("\nSeu amigo vai falar que voce quer falar com ela, o que voce faz?\n");
                    printf("1 - Voce corre pro banheiro\n2 - Puxa ele e fala pra ele parar com isso e que no fundo nao quer\n");
                    printf("Opcao: ");
                    scanf("%i", &option);

                    switch (option) {
                        case 1:
                            system("clear");
                            printf("\nEle te puxa pra voce ir falar com ela, e ela acha engracado\n");
                            printf("No final da tudo certo e esse e mais um aniversario junto com ela\n");
                            printf("3 ANOS com o meu amor\n");
                            printf("Feliz aniversario minha vidinha te amo mais que tudo <3\n");
                            option = 0;
                            break;
                        case 2:
                            system("clear");
                            printf("\nEle nao vai e voce nunca mais ve ela\n");
                            option = 0;
                            break;
                        default:
                            Invalid();
                            option = 0;
                            break;
                    }
                } else {
                    Invalid();
                    option = 0;
                }
                break;

            case 2:
                system("clear");
                printf("\nQue triste ela nunca vai saber da sua existencia, e voce nem tentou... e uma pena\n");
                option = 0;
                break;

            default:
                Invalid();
                break;
        }
    } while (option != 0);

    return 0;
}

