#pragma once

ref class CL_Articles
{
private:
    System::String^ nom;
    System::String^ reference;
    System::String^ couleur;

    unsigned int tauxTVA;
    unsigned int id;
    float prixUnitaire;

public:

    System::String^ ajouter() ;
    System::String^ supprimer() ;
    System::String^ modifier() ;
    System::String^ afficher() ;
    System::String^ afficherTousArticles();

    void setId(unsigned int);
    unsigned int getId();
};

