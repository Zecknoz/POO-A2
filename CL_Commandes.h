#pragma once
#include "CL_Gestion.h"

ref class CL_Commandes : public CL_Gestion
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

    System::String^ ajouter() override;
    System::String^ supprimer() override;
    System::String^ modifier() override;
    System::String^ afficher() override;

    System::String^ supprimerArticle();
    System::String^ ajouterArticle();
};

