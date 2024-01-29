#include <stdio.h>
#include <stdlib.h>

int main() {
    int num_pessoas;
    char *sexo;
    char *opiniao;

    printf("informe quantas pessoas vao fazer a avaliacao do produto\n");
    scanf("%d", &num_pessoas);
    printf("\n");

    sexo = (char*) malloc(num_pessoas * sizeof(char));
    if(sexo == NULL) {
        printf("erro de alocacao de memoria\n");
        exit(1);
    }

    opiniao = (char*) malloc(num_pessoas * sizeof(char));
    if(opiniao == NULL) {
        printf("erro de alocacao de memoria\n");
        exit(1);
    }
    
    for(int i = 0; i < num_pessoas; i++) {
        printf("informe seu sexo\n");
        printf("(M) masculino (F) feminino\n");
        scanf("%s", &sexo[i]);

        printf("voce gostou do nosso produto?\n");
        printf("(S) gostei (N) nao gostei\n");
        scanf("%s", &opiniao[i]);
        printf("\n");
    }

    int mulheres_gostaram = 0;
    int homens_naogostaram = 0;

    for (int i = 0; i < num_pessoas; i++) {
        if (sexo[i] == 'F' && opiniao[i] == 'S') {
            mulheres_gostaram++;
        } else if (sexo[i] == 'M' && opiniao[i] == 'N') {
            homens_naogostaram++;
        }
    }

    float porcentagem_mulheres = (float)mulheres_gostaram / num_pessoas * 100;
    float porcentagem_homens = (float)homens_naogostaram / num_pessoas * 100;

    printf("Porcentagem de mulheres que gostaram do produto: %.0f%%\n", porcentagem_mulheres);
    printf("Porcentagem de homens que nao gostaram do produto: %.0f%%\n", porcentagem_homens);
    
    free(sexo);
    free(opiniao);
   
    return 0;
}