#include "CL_Employes.h"

System::String^ CL_Employes::ajouter()
{
	return "INSERT INTO personnel (prenom, nom) VALUES ('Georges', 'non');";
}

System::String^ CL_Employes::supprimer()
{
	return "DELETE FROM personnel WHERE id = ";
}

System::String^ CL_Employes::modifier()
{
	throw gcnew System::NotImplementedException();
	// TODO: insert return statement here
}

System::String^ CL_Employes::afficher()
{
	return "SELECT * FROM personnel";
}

void CL_Employes::setId(unsigned int id)
{
	this->id = id;
}





