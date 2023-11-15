
#include <stdio.h>
#include <string.h>
void ajouterdon(char pathfile[], don donnee)
{
    // Ouvrir le fichier en mode d'ajout (append) en texte
    FILE* fichier = fopen(pathfile, "a");

    if (fichier == NULL) {
        printf("Erreur lors de l'ouverture du fichier.\n");
        return;
    }

    // Utiliser fprintf pour écrire la donnée dans le fichier
    fprintf(fichier, 0);

    // Fermer le fichier
    fclose(fichier);
}


void afficherdon(char pathfile[]);
  afficher_fiche_donneur(const char *med_path, int id[50], char *task_status)
{


    int trouve = -1;
    fiche_donneur p;
    t*f;
    f=fopen(fiche_path, "r");
    if(f != NULL)
    {
        while(fscanf(f, "%s %s %s %d %d %d %d %d %d %d\n", p.id, p.type_don, p.type_sang, &p.tatouage, &p.IST, &p.tabac, &p.alcool, &p.RDV_jour, &p.RDV_mois, &p.RDV_annee)!=EOF)
            { if(strcmp(p.id , id) == 0)
        {
             trouve = 1;
        printf("ID: %s\n", p.id);
        printf("Type de don: %s\n", p.type_don);
        printf("Type de sang: %s\n", p.type_sang);
        printf("Tatouage: %d\n", p.tatouage);
        printf("IST: %d\n", p.IST);
        printf("Tabac: %d\n", p.tabac);
        printf("Alcool: %d\n", p.alcool);
        printf("Date du RDV: %d/%d/%d\n", p.RDV_jour, p.RDV_mois, p.RDV_annee);
        printf("\n");
        }
          }
        if (trouve = -1)
            strcpy(task_status, "donneur pas trouvé");
    }
    else
        strcpy(task_status, "probleme d'ouverture du fichier\n");
        fclose(f);
}





void modifierdon(char pathfile[],don);
modifier_fiche_donneur(const char *fiche_path, fiche_donneur p, char *task_sta)
{
    fiche_donneur fiche;
    t*f;
    f=fopen(fiche_path, "r");
    t*f2;
    f2=fopen("tmp.txt", "w");
    if(f!= NULL && f2 != NULL)
    {
      while(fscanf(f,"%d%d%s%s%d%d%d%d\n",t.id,t.cin,t.type[5],t.facteur,t.quantité,t.tattoué,t.fumeur,t.alcool);!=EOF)
          if( strcmp (t.id,id)!=0)
        {
            fprintf(f2, "%d %d %s %s %d %d %d %d \n", t.id, t.cin, t.type[5], t.facteur, t.quantité, t.tattoué, t.fumeur, t.alcool);
         strcpy(task_status, "fiche donneurs modifié");
            }
            else
                fprintf((f2, "%d %d %s %s %d %d %d %d \n", t.id, t.cin, t.type[5], t.facteur, t.quantité, t.tattoué, t.fumeur, t.alcool);
    }
    else
        strcpy(task_status, "probleme douverture du fichier");
    fclose(f);
    fclose(f2);
    remove(fiche_path);
    rename("tmp.txt", fiche_path);
}



void suprimerdon (char [],int id );
int found =0;
     don t;
     t*f;
     f=fopen(tes_path,"r");
     t*f2;
     f2=fopen("temporary.text","w");
     if (f!=NULL &&f2!=NULL)
    {

    while(fscanf(f,"%d%d%s%s%d%d%d%d\n",t.id,t.cin,t.type[5],t.facteur,t.quantité,t.tattoué,t.fumeur,t.alcool);!=EOF)
          if( strcmp (t.id,id)!=0)
                   fprintf(f2,"%d%d%s%s%d%d%d%d\n",t.id,t.cin,t.type[5],t.facteur,t.quantité,t.tattoué,t.fumeur;t.alcool );
          else
            {
              strcpy(task_status,"ets successfully deleted\n");
              found=1;
            }
            if (found==0)
                strcpy(task_status,"ets not found");
    }
    else
        strcpy(task_status,"couldn 't open ets_file\n");
    fclose(f);
    fclose(f2);
    remove(med_path);
    rename("temporary.txt",med_path);


void sangpartype(char pathfile[] );
#define MAX_BLOOD_TYPES 10

// Définition de la fonction pour ranger les types de sang dans un tableau
void rangerTypesDeSang(char typesDeSang[MAX_BLOOD_TYPES][5], int taille) {
    for (int i = 0; i < taille; i++) {
        // Demander à l'utilisateur de saisir le type de sang
        printf("Entrez le type de sang numéro %d (par exemple, 'A+', 'B-', etc.) : ", i + 1);
        scanf("%s", typesDeSang[i]);
    }
}

int main() {
    char typesDeSang[MAX_BLOOD_TYPES][5];
    int taille;

    // Demander à l'utilisateur combien de types de sang il souhaite ranger
    printf("Combien de types de sang voulez-vous ranger (maximum %d) ? : ", MAX_BLOOD_TYPES);
    scanf("%d", &taille);

    if (taille > MAX_BLOOD_TYPES) {
        // Vérifier si la taille dépasse la limite autorisée
        printf("La taille dépasse la limite autorisée.\n");
        return 1;
    }

    // Appeler la fonction pour ranger les types de sang dans le tableau
    rangerTypesDeSang(typesDeSang, taille);

    // Afficher les types de sang saisis
    printf("Types de sang saisis :\n");
    for (int i = 0; i < taille; i++) {
        printf("Type de sang %d : %s\n", i + 1, typesDeSang[i]);
    }

    return 0;
}

void songrare (char pathfile []);
void rangerTypesDeSang(char typesDeSang[MAX_BLOOD_TYPES][5], int taille) {
    for (int i = 0; i < taille; i++) {
        // Demander à l'utilisateur de saisir le type de sang
        printf("Entrez le type de sang numéro %d (par exemple, 'A+', 'B-', etc.) : ", i + 1);
        scanf("%s", typesDeSang[i]);
    }
}

int main() {
    char typesDeSang[MAX_BLOOD_TYPES][5];
    int taille;

    // Demander à l'utilisateur combien de types de sang il souhaite ranger
    printf("Combien de types de sang voulez-vous ranger (maximum %d) ? : ", MAX_BLOOD_TYPES);
    scanf("%d", &taille);

    if (taille > MAX_BLOOD_TYPES) {
        // Vérifier si la taille dépasse la limite autorisée
        printf("La taille dépasse la limite autorisée.\n");
        return 1;
    }

    // Appeler la fonction pour ranger les types de sang dans le tableau
    rangerTypesDeSang(typesDeSang, taille);

    // Afficher les types de sang saisis
    printf("Types de sang saisis :\n");
    for (int i = 0; i < taille; i++) {
        printf("Type de sang %d : %s\n", i + 1, typesDeSang[i]);
    }

    return 0;
}

