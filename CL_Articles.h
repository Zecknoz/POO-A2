#pragma once
#include "CL_Gestion.h"

ref class CL_Articles : public CL_Gestion
{
private:
    System::String^ nom;
    System::String^ reference;
    System::String^ couleur;

    unsigned int tauxTVA;
    float prixUnitaire;

public:

    System::String^ ajouter() override;
    System::String^ supprimer() override;
    System::String^ modifier() override;
    System::String^ afficher() override;
};

