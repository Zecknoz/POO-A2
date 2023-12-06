#pragma once
#include "CL_Personnes.h"

ref class CL_Employes : public CL_Personnes
{
private:

    unsigned int idSuperieur;
    System::String^ nom;
    System::String^ prenom;
    unsigned int id;

public:

    System::String^ ajouter() override;
    System::String^ supprimer() override;
    System::String^ modifier() override;
    System::String^ afficher() override;
    System::String^ afficherToutPersonne();
};

