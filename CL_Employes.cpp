#include "CL_Employes.h"

System::String^ CL_Employes::ajouter()
{
	return "INSERT INTO personnels (nom_p, prenom_p, Id_adresses, Id_dates, Id_personnels_1) VALUES ('Georges', 'oui', '6', '2018-09-24', '6');";
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
	return "SELECT * FROM Personnel";
}

