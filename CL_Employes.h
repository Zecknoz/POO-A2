#pragma once

ref class CL_Employes
{
private:

    unsigned int idSuperieur;
    unsigned int id;
    System::String^ nom;
    System::String^ prenom;
    System::String^ email;
    System::String^ telephone;
    System::String^ dateEmbauche;
    System::String^ adresse;

public:

    System::String^ ajouter();
    System::String^ supprimer();
    System::String^ modifier();
    System::String^ afficher();

    void setIdSuperieur(unsigned int id);
    void setId(unsigned int id);
    void setNom(System::String^ nom);
    void setPrenom(System::String^ prenom);
    void setEmail(System::String^ email);
    void setTelephone(System::String^ telephone);
    void setDateEmbauche(System::String^ dateEmbauche);
    void setAdresse(System::String^ adresse);
};

