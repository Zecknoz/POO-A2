#pragma once
#include "CL_Personnes.h"

ref class CL_Clients : public CL_Personnes
{
private:
    System::String^ AdrFacturaction;
    System::String^ AdrLivraison;
    System::String^ dateAnniv;
    System::String^ datePremAchat;

    unsigned int IDclient;
    unsigned int Codeclient;

public:
    System::String^ ajouter() override;
    System::String^ supprimer() override;
    System::String^ modifier() override;
    System::String^ afficher() override;

    System::String^ ajouterAdresseFac();
    System::String^ ajouterAdresseLiv();

    System::String^ supprimerAdresseLiv();
    System::String^ supprimerAdresseFac();
};

