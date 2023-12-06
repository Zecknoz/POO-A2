#include "CL_Employes.h"

System::String^ CL_Employes::ajouter()
{
	return "INSERT INTO personnels (nom_p, prenom_p) VALUES ('Georges', 'non');";
}

System::String^ CL_Employes::supprimer()
{
	throw gcnew System::NotImplementedException();
	// TODO: insert return statement here
}

System::String^ CL_Employes::modifier()
{
	throw gcnew System::NotImplementedException();
	// TODO: insert return statement here
}

System::String^ CL_Employes::afficher()
{
	return "SELECT * FROM personnels";
}

