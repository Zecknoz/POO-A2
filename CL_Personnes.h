#pragma once
#include "CL_Gestion.h"

ref class CL_Personnes : public CL_Gestion
{
protected:

    System::String^ nom;
    System::String^ prenom;

public:

    virtual System::String^ ajouter() override = 0;
    virtual System::String^ supprimer() override = 0;
    virtual System::String^ modifier() override = 0;
    virtual System::String^ afficher() override = 0;
};

