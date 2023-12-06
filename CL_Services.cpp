#include "CL_Services.h"

void CL_Services::ajouterPersonne(System::String^ nom, System::String^ prenom, System::String^ adresse, System::String^ dateEmbauche, unsigned int IDsuperieur)
{
    throw gcnew System::NotImplementedException();
}

void CL_Services::supprimerPersonne(unsigned int IDpersonnel)
{
    throw gcnew System::NotImplementedException();
}

void CL_Services::modifierPersonne(unsigned int IDpersonnel, System::String^ NouveauNom, System::String^ NouveauPrenom, System::String^ dateEmbauche, unsigned int IDsuperieur)
{
    throw gcnew System::NotImplementedException();
}

void CL_Services::afficherPersonne(System::String^ nom, System::String^ prenom)
{
    throw gcnew System::NotImplementedException();
}

void CL_Services::afficherToutPersonne()
{

}

void CL_Services::ajouterClient(System::String^ nom, System::String^ prenom, System::String^ adresse, System::String^ AdrLivraison, System::String^ AdrFacturation, System::String^ dateAnniv, System::String^ datePremAchat, unsigned int code_client)
{
    throw gcnew System::NotImplementedException();
}

void CL_Services::ajouterAdresseClient(unsigned int IIDclient, System::String^ adresse, System::String^ type)
{
    throw gcnew System::NotImplementedException();
}

void CL_Services::supprimerAdresseClient(unsigned int IDclient, System::String^ adresse, System::String^ type)
{
    throw gcnew System::NotImplementedException();
}

void CL_Services::modifierAdresseClient(unsigned int IDclient, System::String^ adresse, System::String^ type)
{
    throw gcnew System::NotImplementedException();
}

void CL_Services::supprimerClient(unsigned int IDclient)
{
    throw gcnew System::NotImplementedException();
}

void CL_Services::modifierClient(unsigned int IDclient, System::String^ NouveauNom, System::String^ NouveauPrenom, System::String^ NouvelledatePremAchat, unsigned int NouveauIDclient)
{
    throw gcnew System::NotImplementedException();
}

void CL_Services::afficherClient(unsigned int IDclient)
{
    throw gcnew System::NotImplementedException();
}

void CL_Services::ajouterCommande(unsigned int IDclient, System::String^ articles, System::String^ VilleLivraison, System::String^ methodePaiement)
{
    throw gcnew System::NotImplementedException();
}

void CL_Services::supprimerCommande(unsigned int IDcommande)
{
    throw gcnew System::NotImplementedException();
}

void CL_Services::modifierCommande(unsigned int IDcommande, unsigned int NouveauIDclient, System::String^ NouvelleVilleLivraison, System::String^ NouveauMethodePaiment)
{
    throw gcnew System::NotImplementedException();
}

void CL_Services::afficherCommande(unsigned int IDcommande)
{
    throw gcnew System::NotImplementedException();
}

void CL_Services::ajouterArticle(System::String^ nomArt, System::String^ natureArt, System::String^ reference)
{
    throw gcnew System::NotImplementedException();
}

void CL_Services::supprimerArtcile(unsigned int IDarticle)
{
    throw gcnew System::NotImplementedException();
}

void CL_Services::ModifierArticle(unsigned int IDartcile, System::String^ NouveauNom, System::String^ NouvelleReference, System::String^ NouvelleCouleur, unsigned int NouveauSeuilReappro, unsigned int NouveauTauxTVA)
{
    throw gcnew System::NotImplementedException();
}

void CL_Services::afficherArticle(unsigned int IDArticle)
{
    throw gcnew System::NotImplementedException();
}

CL_Services::CL_Services()
{
    this->gestion = gcnew CL_Employes();
    this->lien = gcnew CL_LVBDD();
    this->stats = gcnew CL_Statistique();
}
