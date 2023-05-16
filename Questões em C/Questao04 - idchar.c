#include <stdio.h>
main() {
    char idchar;
    printf("Digite um caractere: ");
    scanf("%c", &idchar);

    if ((idchar >= 'a' && idchar <= 'z') || (idchar >= 'A' && idchar <= 'Z')) {
        printf("O caractere digitado eh uma letra.");
    } else if (idchar >= '0' && idchar <= '9') {
        printf("O caractere digitado eh um numero.");
    } else if (idchar == '.' || idchar == ',' || idchar == ';' || idchar == '!' || idchar == '?') {
        printf("O caractere digitado eh uma pontuacao.");
    } else {
        printf("O caractere digitado eh um caractere especial.");
    }
}
