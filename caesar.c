#include <cs50.h>
#include <ctype.h>  //for isdigit
#include <stdio.h>  //for printf
#include <stdlib.h> //for atoi
#include <string.h> //for strlen

int main(int argc, string argv[])
{
    // Validação da chave K
    if (argc != 2) // argc deve ser o nome do programa + a chave
    {
        printf("Usage: ./caesar key\n");
        return 1; // Para indicar erro
    }

    char *key_string = argv[1]; // O argumento chave é uma string na posição index 1

    // Iterando pelos caracteres para garantir que todos sejam digitos
    for (int i = 0, len = strlen(key_string); i < len; i++)
    {
        // Checking if the character it is a digit
        if (!isdigit(key_string[i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }

    // Convertemos a string após ser válida em um inteiro
    int k = atoi(key_string);

    // Obtemos o texto do usuário
    string plaintext = get_string("plaintext:  ");

    // Imprime o inicio da saida do texto cifrado
    printf("ciphertext: ");

    // Estamos iterando pelo input para aplicar a cifra
    for (int i = 0, len = strlen(plaintext); i < len; i++)
    {
        char p = plaintext[i]; // Caractere original que recebe plaintext

        if (isupper(p)) // Verificando se é uma letra maiuscula

        {
            // Convertemos de ASCII para indice alfabético
            // Aplicamos uma formula de rotação e convertemos novamente para ASCII
            printf("%c", ((p - 'A' + k) % 26) + 'A');
        }
        else if (islower(p)) // verificando se é minuscula
        {
            printf("%c", ((p - 'a' + k) % 26) + 'a');
        }
        else
        {
            printf("%c", p); // Caso não seja maiuscula nem minuscula, mantém o caractere como ele é
        }
    }

    printf("\n");

    return 0; // Estamos imfprimindo 0 para indicar que o programa foi concluido com sucesso
}