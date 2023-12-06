#pragma once
ref class CL_Gestion
{
public:
	virtual System::String^ ajouter() = 0;
	virtual System::String^ supprimer() = 0;
	virtual System::String^ modifier() = 0;
	virtual System::String^ afficher() = 0;
};

