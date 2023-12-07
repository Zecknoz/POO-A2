#pragma once

ref class CL_Commandes
{
private:

    System::String^ reference;
    System::String^ dateLivraison;
    System::String^ dateEmission;
    System::String^ datePaiement;
    System::String^ methodePaiement;
    System::String^ articles;

    double totalHT;
    double montantTotalTVA;
    double montantTotalTTC;

public:

    System::String^ ajouter() ;
    System::String^ supprimer() ;
    System::String^ modifier() ;
    System::String^ afficher() ;

    System::String^ supprimerArticle();
    System::String^ ajouterArticle();
};

