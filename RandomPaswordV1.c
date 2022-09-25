#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

#define numero 10
#define lettere 26
#define lettereMaiuscole 26
#define simboli 10

int main()
{

    srand(time(NULL));

    int SceltaNumero[numero] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    char LeetereCasuali[lettere] = "qwertyuiopasdfghjklzxcvbnm";
    char LettereMaiuscole[lettereMaiuscole] = "QWERTYUIOPASDFGHJKLZXCVBNM";
    char Carrateri[simboli] = "!@#$^&*?";

    char CarratariCasual = "";
    char LettereCasualMaiuscole = "";
    char letteraCasuale = "";
    int numeroCasuale = 0;

    /**
        for (int i = 0; i <=diminsione; i++)
        {


            for (int s = 0; s <=diminsione; s++)
            {


                for(int f = 0; f<=diminsione; f++)
                {


                    for(int g = 0; g<=diminsione; g++)
                    {

                    }
                }
            }
        }

       **/

   printf("Pasword generata: ");

    for (int i = 0; i < 3; i++)

    {
        numeroCasuale = SceltaNumero[rand() % numero];
        printf("%d", numeroCasuale);
    }

    for (int s = 0; s < 3; s++)
    {
        letteraCasuale = LeetereCasuali[rand() % lettere];
        printf("%c", letteraCasuale);
    }
    for (int h = 0; h < 3; h++)
    {
        LettereCasualMaiuscole = LettereMaiuscole[rand() % lettereMaiuscole];
        printf("%c", LettereCasualMaiuscole);
    }
    for (int l = 0; l < 3; l++)
    {
        printf("%c", CarratariCasual);
        CarratariCasual = Carrateri[rand() % simboli];
    }
}
