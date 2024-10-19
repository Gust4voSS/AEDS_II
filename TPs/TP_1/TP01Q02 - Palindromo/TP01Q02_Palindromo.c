#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool palindromo( char* palavra){
    int tamanho = strlen(palavra);
    int i = 0;
    int j = tamanho - 1;
    bool resp = true;

    while( resp && i < tamanho/2){
    if(palavra[i] != palavra[j]){
    resp = false;
    }
    i++;
    j--;
    }
return resp;
}
int main(){
    bool resposta = false;
    char palavra[80];

    while(strcmp(palavra, "FIM") != 0){
    fgets(palavra, sizeof(palavra), stdin);
    palavra[strcspn(palavra, "\n")] = '\0';
    resposta = palindromo(palavra);
    printf("%s\n", resposta ? "SIM" : "NAO");
    }
    return 0;
}