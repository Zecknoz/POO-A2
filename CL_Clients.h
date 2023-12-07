#pragma once

ref class CL_Clients
{
private:
    System::String^ AdrFacturaction;
    System::String^ AdrLivraison;
    System::String^ dateAnniv;
    System::String^ datePremAchat;

    System::String^ nom;
    System::String^ prenom;

    unsigned int IDclient;
    unsigned int Codeclient;

public:
    System::String^ ajouter() ;
    System::String^ supprimer() ;
    System::String^ modifier() ;
    System::String^ afficher() ;

    System::String^ ajouterAdresseFac();
    System::String^ ajouterAdresseLiv();

    System::String^ supprimerAdresseLiv();
    System::String^ supprimerAdresseFac();
};

