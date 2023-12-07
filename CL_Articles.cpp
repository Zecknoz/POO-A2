#include "CL_Articles.h"

System::String^ CL_Articles::ajouter()
{
    throw gcnew System::NotImplementedException();
    // TODO: insert return statement here
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

void CL_Articles::setId(unsigned int id)
{
    this->id = id;
}

unsigned int CL_Articles::getId()
{
    return this->id;
}
