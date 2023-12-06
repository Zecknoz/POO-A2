#pragma once
#include "CL_Employes.h"
#include "CL_Clients.h"
#include "CL_Statistique.h"
#include "CL_LVBDD.h"

ref class CL_Services
{
private:

	CL_Gestion^ gestion;
	CL_LVBDD^ lien;
	CL_Statistique^ stats;

public:

	void ajouterPersonne(System::String^ nom, System::String^ prenom, System::String^ adresse, System::String^ dateEmbauche, unsigned int IDsuperieur);
	void supprimerPersonne(unsigned int IDpersonnel);
	void modifierPersonne(unsigned int IDpersonnel, System::String^ NouveauNom, System::String^ NouveauPrenom, System::String^ dateEmbauche, unsigned int IDsuperieur);
	void afficherPersonne(System::String^ nom, System::String^ prenom);
	void afficherToutPersonne();
	void ajouterClient(System::String^ nom, System::String^ prenom, System::String^ adresse, System::String^ AdrLivraison, System::String^ AdrFacturation, System::String^ dateAnniv, System::String^ datePremAchat, unsigned int code_client);
	void ajouterAdresseClient(unsigned int IIDclient, System::String^ adresse, System::String^ type);
	void supprimerAdresseClient(unsigned int IDclient, System::String^ adresse, System::String^ type);
	void modifierAdresseClient(unsigned int IDclient, System::String^ adresse, System::String^ type);
	void supprimerClient(unsigned int IDclient);
	void modifierClient(unsigned int IDclient, System::String^ NouveauNom, System::String^ NouveauPrenom, System::String^ NouvelledatePremAchat, unsigned int NouveauIDclient);
	void afficherClient(unsigned int IDclient);
	void ajouterCommande(unsigned int IDclient, System::String^ articles, System::String^ VilleLivraison, System::String^ methodePaiement);
	void supprimerCommande(unsigned int IDcommande);
	void modifierCommande(unsigned int IDcommande, unsigned int NouveauIDclient, System::String^ NouvelleVilleLivraison, System::String^ NouveauMethodePaiment);
	void afficherCommande(unsigned int IDcommande);
	void ajouterArticle(System::String^ nomArt, System::String^ natureArt, System::String^ reference);
	void supprimerArtcile(unsigned int IDarticle);
	void ModifierArticle(unsigned int IDartcile, System::String^ NouveauNom, System::String^ NouvelleReference, System::String^ NouvelleCouleur, unsigned int NouveauSeuilReappro, unsigned int NouveauTauxTVA);
	void afficherArticle(unsigned int IDArticle);

	CL_Services();
};

