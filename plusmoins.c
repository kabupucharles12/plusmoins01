
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // initialisation des variables
    int nombre_a_deviner = 0, nombreEntre = 0;
    int compteurDeCoups = 0;
    int continuerPartie = 1;
    int modeDuJeu = 0;
    int niveauDeDifficulte = 0;
    int finDuJeu;
    int max = 100, min = 1;

    //Initialise le générateur de nombres aléatoires
    srand(time(NULL));
    
    nombre_a_deviner = (rand() % (max - min + 1)) + min;



    /* La boucle du programme. Elle se répète tant que l'utilisateur
    n'a pas trouvé le nombre a deviner*/

    while(continuerPartie!=0)
    {
        finDuJeu = 1;
        printf("\t*****************MENU PRINCIPALE*****************\n");
        printf("Mode 1 joueur tapez 1\nMode 2 joueurs tapez 2\nVotre choix : ");
        scanf("%d", &modeDuJeu);
        printf("\t*****************NIVEAU DU JEU*****************\n");
        printf("Niveau entre 1 et 100 : taper 1: facile\nNiveau entre 1 et 1000 : taper 2: moyen\nNiveau entre 1 et 10000 : taper 3 : difficile\n");
        printf("Votre choix : ");
        scanf("%d", &niveauDeDifficulte);

        printf("\n");

        switch(niveauDeDifficulte)
        {
            case 1 : max = 100;break;
            case 2 : max = 1000;break;
            case 3 : max = 10000;break;
            default : printf("Niveau de difficulte erronee, veuillez choisir 1 ou 2 ou 3!\n");break;
        }

        if(niveauDeDifficulte==1 || niveauDeDifficulte == 2 || niveauDeDifficulte == 3)
	printf("vous avez 6 essaie ? ");

        {

            switch(modeDuJeu)
            {
	        

                case 1 /*Mode 1 joueur*/:
                            do
                            {
				//Initialise le générateur de nombres aléatoires

			        nombre_a_deviner = (rand() % (max - min + 1)) + min;

                                //Compteur de coups
                                compteurDeCoups++;
                                // On demande le nombre
                                printf("Quel est le nombre ? ");
                                scanf("%d", &nombreEntre);

                                // On compare le nombre entré avec le nombre mystère

                                if (nombre_a_deviner > nombreEntre)
                                    printf("C'est plus !\n\n");
                                else if (nombre_a_deviner < nombreEntre)
                                    printf("C'est moins !\n\n");
                                else
                                    printf ("Bravo, vous avez trouve le nombre mystere en %d coups !!!\n\n",compteurDeCoups);

                            } while (nombreEntre != nombre_a_deviner);break;
                case 2 /*Mode 2 joueur*/:

                    do
                    {
                        //Compteur de coups

	

                        //for(int compteurDeCoups=0; compteurDeCoups < 2; compteurDeCoups++)
		
                        // On demande le nombre
                        if(finDuJeu!=0)
                        {

			    nombre_a_deviner = (rand() % (max - min + 1)) + min;


                            
				compteurDeCoups++;

			     printf("Joueur 2 : Quel est le nombre ? ");
			     scanf("%d", &nombreEntre);





                            // On compare le nombre entré avec le nombre a diviner 

                            if (nombre_a_deviner > nombreEntre)
                                printf("C'est plus !\n\n");
                            else if (nombre_a_deviner < nombreEntre)
                                printf("C'est moins !\n\n");
                            else
                            {
                                printf ("Bravo, vous avez trouve le nombre mystere en %d coups !!!\n\n",compteurDeCoups);
                                // marquage d'un point
                                printf ("vous marque un 1 points");
                                finDuJeu = 0;
                            }
                        }

                    } while (compteurDeCoups<6);printf ("desoler vous epuiser vos essaie %d coups !!!\n\n",compteurDeCoups);break;
                default : printf("Mode du joueur errone, veuillez choisir 1 ou 2!\n");
            }
        }

        
    }

   

    return 0;
}
