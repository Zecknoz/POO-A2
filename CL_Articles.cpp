#include "CL_Articles.h"

System::String^ CL_Articles::ajouter()
{
    return "INSERT INTO Article (nom, categorie, couleur, reference, quantite, prix_achat) VALUES ('" + this->getNom() + "', '" + this->getCategorie() + "', '" + this->getCouleur() + "', '" + this->getReference() + "', '" + this->getQuantite() + "', '" + this->getPrixAchat() + "');";
}

System::String^ CL_Articles::supprimer()
{
    throw gcnew System::NotImplementedException();
    // TODO: insert return statement here
}

System::String^ CL_Articles::modifier()
{
    throw gcnew System::NotImplementedException();
    // TODO: insert return statement here
}

System::String^ CL_Articles::afficher()
{
    return "SELECT * FROM Article WHERE ID_article='" + this->getId() +"';";
}

System::String^ CL_Articles::afficherTousArticles()
{
    return "SELECT * FROM Article;";
}
