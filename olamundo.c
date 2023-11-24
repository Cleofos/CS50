#include <stdio.h>
#include <cs50.h>
int main(void)

{
    string nome = get_string("Qual é o seu nome? \n");
    printf ("Olá, %s! Tudo bem?\n" ,nome);
    string idade =get_string("Quantos anos você tem? \n");
    printf ("Muito bem, %s parabéns pelos seus %s anos! \n", nome , idade);
}
