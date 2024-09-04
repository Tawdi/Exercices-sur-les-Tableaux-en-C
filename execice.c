#include<stdio.h>

int main(){
    int i;

    // challange 1
    printf("Challenge 1 : Initialisation et Affichage \n");
    
    int tab1[5] = {1, 2, 3, 4, 5};
    for (i = 0; i < 5; i++)
    {
        printf(" %d \n", tab1[i]);
    }





    // challange 2
    printf("Challenge 2 : Saisie et Affichage des Éléments \n");

    int nbr_elm = -1;
    int tab2[100];

    while(nbr_elm<1 || nbr_elm>=100){
       printf("entrer le nombre d'elements (>100): ");
       scanf("%d", &nbr_elm);
    }
    printf("Saisie des Éléments : \n");
    for (i = 0; i < nbr_elm; i++)
    {
        printf(" t[%d] : ",i+1);
        scanf("%d",&tab2[i]);
    }
    printf("affichage des Éléments :\n");
    for (i = 0; i < nbr_elm; i++)
    {
        printf(" %d \n", tab2[i]);
    }





    // challange 3
    printf("Challenge 3 : Somme des Éléments\n");

    int nbr_elm3 = -1;
    int tab3[100];
    int somme=0;

    while(nbr_elm3<1 || nbr_elm3>=100){
       printf("entrer le nombre d'elements (>100): ");
       scanf("%d", &nbr_elm3);
    }
    printf("Saisie des Éléments :\n");
    for (i = 0; i < nbr_elm3; i++)
    {
        printf(" t[%d] : ",i+1);
        scanf("%d",&tab3[i]);
    }
    for (i = 0; i < nbr_elm3; i++)
    {
        somme += tab3[i];
    }
    printf("somme des Éléments : %d \n",somme);




   // challange 4
    printf("Challenge 4 : Trouver le Maximum\n");

    int nbr_elm4 = -1;
    int tab4[100];
    int max;

    while(nbr_elm4<1 || nbr_elm4>=100){
       printf("entrer le nombre d'elements (>100): ");
       scanf("%d", &nbr_elm4);
    }
    printf("Saisie des Éléments :\n");
    for (i = 0; i < nbr_elm4; i++)
    {
        printf(" t[%d] : ",i+1);
        scanf("%d",&tab4[i]);
    }
    max=tab4[0];
    for (i = 1; i < nbr_elm4; i++)
    {
        if(max<tab4[i]) max=tab4[i];
    }
    printf("le Maximum est %d \n",max);




   // challange 5
    printf("Challenge 5 : Trouver le Minimum\n");

    int nbr_elm5 = -1;
    int tab5[100];
    int min;

    while(nbr_elm5<1 || nbr_elm5>=100){
       printf("entrer le nombre d'elements (>100): ");
       scanf("%d", &nbr_elm5);
    }
    printf("Saisie des Éléments :\n");
    for (i = 0; i < nbr_elm5; i++)
    {
        printf(" t[%d] : ",i+1);
        scanf("%d",&tab5[i]);
    }
    min=tab5[0];
    for (i = 1; i < nbr_elm5; i++)
    {
        if(min>tab5[i]) min=tab5[i];
    }
    printf("le Minimum est %d \n",min);




    // challange 6
    printf("Challenge 6 : Multiplication des Éléments\n");
    int nbr_elm6 = -1;
    int tab6[100];
    int facteur;

    while(nbr_elm6<1 || nbr_elm6>=100){
       printf("entrer le nombre d'elements (>100): ");
       scanf("%d", &nbr_elm6);
    }
    printf("Saisie des Éléments :\n");
    for (i = 0; i < nbr_elm6; i++)
    {
        printf(" t[%d] : ",i+1);
        scanf("%d",&tab6[i]);
    }
    printf("entrer le facteur pour Multiplication: ");
    scanf("%d",&facteur);
    printf("voila les les donnees apres Multiplication par %d: ",facteur);
    
    for (i = 0; i < nbr_elm6; i++)
    {
        printf(" %d  ",tab6[i]*facteur);
    }





    // challange 7
    printf("Challenge 7 : Tableau en Ordre Croissant\n");
    int nbr_elm7 = -1;
    int tab7[100];
    
    while(nbr_elm7<1 || nbr_elm7>=100){
       printf("entrer le nombre d'elements (>100): ");
       scanf("%d", &nbr_elm7);
    }
    printf("Saisie des Éléments :\n");
    for (i = 0; i < nbr_elm7; i++)
    {
        printf(" t[%d] : ",i+1);
        scanf("%d",&tab7[i]);
    }
    printf("affichage des Éléments avant triage :\n");
    for (i = 0; i < nbr_elm7; i++)
    {
        printf(" %d ", tab7[i]);
    }
    int valide = 1;
    int tmp;
    while (valide)
    {
        valide = 0;
        for (i = 0; i < nbr_elm7 - 1; i++)
        {
            if (tab7[i] > tab7[i + 1])
            {
                tmp = tab7[i];
                tab7[i] = tab7[i + 1];
                tab7[i + 1] = tmp;
                valide = 1;
            }
        }
    }
    printf("affichage des Éléments apres triage :\n");
    for (i = 0; i < nbr_elm7; i++)
    {
        printf(" %d ", tab7[i]);
    }






    // challange 8
    printf("Challenge 8 : Copie d'un Tableau\n");
    int nbr_elm8 = -1;
    int tab8[100];
    int tab_copie[100];
    
    while(nbr_elm8<1 || nbr_elm8>=100){
       printf("entrer le nombre d'elements (>100): ");
       scanf("%d", &nbr_elm8);
    }
    printf("Saisie des Éléments :\n");
    for (i = 0; i < nbr_elm8; i++)
    {
        printf(" t[%d] : ",i+1);
        scanf("%d",&tab8[i]);
    }
    for (i = 0; i < nbr_elm8; i++)
    {
       tab_copie[i]=tab8[i];
    }
    printf("affichage des Éléments table original :\n");
    for (i = 0; i < nbr_elm8; i++)
    {
        printf(" %d ", tab8[i]);
    }
    printf("\n");

    printf("affichage des Éléments table copie :\n");
    for (i = 0; i < nbr_elm8; i++)
    {
        printf(" %d ", tab_copie[i]);
    }
    





    // challange 9
    printf("Challenge 9 : Inversion d'un Tableau\n");
    int nbr_elm9 = -1;
    int tab9[100];
    int tab_inverse[100];
    
    while(nbr_elm9<1 || nbr_elm9>=100){
       printf("entrer le nombre d'elements (>100): ");
       scanf("%d", &nbr_elm9);
    }
    printf("Saisie des Éléments :\n");
    for (i = 0; i < nbr_elm9; i++)
    {
        printf(" t[%d] : ",i+1);
        scanf("%d",&tab9[i]);
    }
    for (i = 0; i < nbr_elm9; i++)
    {
       tab_inverse[i]=tab9[ nbr_elm9-1 -i ];
    }
    printf("affichage des Éléments table original :\n");
    for (i = 0; i < nbr_elm9; i++)
    {
        printf(" %d ", tab9[i]);
    }
    printf("\n");

    printf("affichage des Éléments table inverse :\n");
    for (i = 0; i < nbr_elm9; i++)
    {
        printf(" %d ", tab_inverse[i]);
    }
    





    // challange 10
    printf("Challenge 10 : Rechercher un Élément\n");
    int nbr_elm10 = -1;
    int tab10[100];
    int element;

    while(nbr_elm10<1 || nbr_elm10>=100){
       printf("entrer le nombre d'elements (>100): ");
       scanf("%d", &nbr_elm10);
    }
    printf("Saisie des Éléments :\n");
    for (i = 0; i < nbr_elm10; i++)
    {
        printf(" t[%d] : ",i+1);
        scanf("%d",&tab10[i]);
    }
     printf("\nentrer le nombre pour recherche : ");
       scanf("%d", &element);
  
    for (i = 0; i < nbr_elm10; i++)
    {
        if(element == tab10[i]){
            printf("%d est present\n",element);
            break;
        }
    }
    if (i == nbr_elm10)
    {
        printf("%d n'est pas present\n", element);
    }





    // challange 11
    printf("Challenge 11 : Remplacer un Élément \n");
    int nbr_elm11 = -1;
    int tab11[100];
    int element_a_remplacer,nouvelle_element;

    while(nbr_elm11<1 || nbr_elm11>=100){
       printf("entrer le nombre d'elements (>100): ");
       scanf("%d", &nbr_elm11);
    }
    printf("Saisie des Éléments :\n");
    for (i = 0; i < nbr_elm11; i++)
    {
        printf(" t[%d] : ",i+1);
        scanf("%d",&tab11[i]);
    }
     printf("\nentrer le nombre pour à remplacer : ");
     scanf("%d", &element_a_remplacer);
     printf("\nentrer la nouvelle valeur : ");
     scanf("%d", &nouvelle_element);

    printf("affichage des Éléments table avant remplacement :\n");
    for (i = 0; i < nbr_elm11; i++)
    {
        printf(" %d ", tab11[i]);
    }
   
    for (i = 0; i < nbr_elm11; i++)
    {
        if(element_a_remplacer == tab11[i]){
            tab11[i]=nouvelle_element;
        }
    }
     printf("\n");

    printf("affichage des Éléments table apres remplacement :\n");
    for (i = 0; i < nbr_elm11; i++)
    {
        printf(" %d ", tab11[i]);
    }
 




    // challange 12
    printf("Challenge 12 : Afficher les Éléments Paire\n");
    int nbr_elm12 = -1;
    int tab12[100];

    while(nbr_elm12<1 || nbr_elm12>=100){
       printf("entrer le nombre d'elements (>100): ");
       scanf("%d", &nbr_elm12);
    }
    printf("Saisie des Éléments :\n");
    for (i = 0; i < nbr_elm12; i++)
    {
        printf(" t[%d] : ",i+1);
        scanf("%d",&tab12[i]);
    }
    printf("\n paire\n");
    for (i = 0; i < nbr_elm12; i++)
    {
        if( (tab12[i]%2) == 0)
        {
            printf(" %d ",tab12[i]);
        }
       
    }





    // challange 13
    printf("Challenge 13 : Afficher les Éléments Impairs\n");
    int nbr_elm13 = -1;
    int tab13[100];
  
    while(nbr_elm13<1 || nbr_elm13>=100){
       printf("entrer le nombre d'elements (>100): ");
       scanf("%d", &nbr_elm13);
    }
    printf("Saisie des Éléments :\n");
    for (i = 0; i < nbr_elm13; i++)
    {
        printf(" t[%d] : ",i+1);
        scanf("%d",&tab13[i]);
    }
    printf("\n impaire\n");
    for (i = 0; i < nbr_elm13; i++)
    {
        if( (tab13[i]%2) != 0)
        {
            printf(" %d ",tab13[i]);
        }
       
    }




    // challange 14
    printf("Challenge 14 : Calculer la Moyenne\n");
    int nbr_elm14 = -1;
    int tab14[100];
    float sommeMoyn=0.0;
  
    while(nbr_elm14<1 || nbr_elm14>=100){
       printf("entrer le nombre d'elements (>100): ");
       scanf("%d", &nbr_elm14);
    }
    printf("Saisie des Éléments :\n");
    for (i = 0; i < nbr_elm14; i++)
    {
        printf(" t[%d] : ",i+1);
        scanf("%d",&tab14[i]);
    }
  
    for (i = 0; i < nbr_elm14; i++)
    {
       sommeMoyn += tab14[i];
    }
    printf("\nmoyenne est : %.2f \n",sommeMoyn/nbr_elm14);




    // challange 15
    printf("Challenge 15 : Fusion de Deux Tableaux\n");
    int nbr_elm15_tab1 = -1,nbr_elm15_tab2 = -1;
    int tab15_1[100],tab15_2[100];
    int fusion[200];
    int taille_fusion;
  
    printf("\n#### 1er table ####\n");
    while(nbr_elm15_tab1<1 || nbr_elm15_tab1>=100){
       printf("entrer le nombre d'elements (>100): ");
       scanf("%d", &nbr_elm15_tab1);
    }
    printf("Saisie des Éléments de premier table :\n");
    for (i = 0; i < nbr_elm15_tab1; i++)
    {
        printf(" t[%d] : ",i+1);
        scanf("%d",&tab15_1[i]);
    }
     printf("\n#### 2eme table ####\n");
    while(nbr_elm15_tab2<1 || nbr_elm15_tab2>=100){
       printf("entrer le nombre d'elements (>100): ");
       scanf("%d", &nbr_elm15_tab2);
    }
    printf("Saisie des Éléments de deuxieme table :\n");
    for (i = 0; i < nbr_elm15_tab2; i++)
    {
        printf(" t[%d] : ",i+1);
        scanf("%d",&tab15_2[i]);
    }
//1er table

    for (i = 0; i < nbr_elm15_tab1; i++)
    {
        fusion[i]=tab15_1[i];
    }
    taille_fusion=nbr_elm15_tab1;
//2eme table
    for (i = 0; i < nbr_elm15_tab2; i++)
    {
        int j=0;
      for (j = 0; j < taille_fusion; j++)
      {
        if(fusion[j]==tab15_2[i]) break;
      }
      if(j==taille_fusion)
      {
        fusion[taille_fusion++]=tab15_2[i];
      }
    }
    printf(" \nle tableau fusionné\n");

    for (i = 0; i < taille_fusion; i++)
    {
        printf(" %d ",fusion[i]);
    }
  
    return 0;
}