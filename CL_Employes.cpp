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

void CL_Employes::setIdSuperieur(unsigned int id)
{
	this->idSuperieur = id;
}

void CL_Employes::setId(unsigned int id)
{
	this->id = id;
}

void CL_Employes::setNom(System::String^ nom)
{
	this->nom = nom;
}

void CL_Employes::setPrenom(System::String^ prenom)
{
	this->prenom = prenom;
}

void CL_Employes::setEmail(System::String^ email)
{
	this->email = email;
}

void CL_Employes::setTelephone(System::String^ telephone)
{
	this->telephone = telephone;
}

void CL_Employes::setDateEmbauche(System::String^ dateEmbauche)
{
	this->dateEmbauche = dateEmbauche;
}

void CL_Employes::setAdresse(System::String^ adresse)
{
	this->adresse = adresse;
}





