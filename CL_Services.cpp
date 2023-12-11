#include "CL_Services.h"

System::Boolean CL_Services::ajouterPersonne(System::String^ nom, System::String^ prenom, System::String^ adresse, System::String^ dateEmbauche, unsigned int IDsuperieur, System::String^ email, System::String^ telephone)
{
    this->Employe->setNom(nom);
    this->Employe->setPrenom(prenom);
    this->Employe->setIdSuperieur(IDsuperieur);
    this->Employe->setAdresse(adresse);
    this->Employe->setDateEmbauche(dateEmbauche);
    this->Employe->setEmail(email);
    this->Employe->setTelephone(telephone);

    System::String^ sqlC;

    sqlC = this->Employe->doExist();
    int Nb = this->lien->actionOnRowsNB(sqlC);
    System::Diagnostics::Debug::WriteLine(Nb);
    if (Nb >0) {

        return 0;
    }
    else {
        sqlC = this->Employe->ajouter();
        this->lien->actionOnRows(sqlC);
        return 1;
    }


}

System::String^ CL_Services::test()
{
    return "test";
}

void CL_Services::supprimerPersonne(unsigned int IDpersonnel)
{
    this->Employe->setId(IDpersonnel);
    System::String^ sqlC = this->Employe->supprimer();
    this->lien->actionOnRows(sqlC);
}

void CL_Services::modifierPersonne(unsigned int IDpersonnel, System::String^ NouveauNom, System::String^ NouveauPrenom, System::String^ dateEmbauche, unsigned int IDsuperieur)
{
    throw gcnew System::NotImplementedException();
}

void CL_Services::afficherPersonne(System::String^ nom, System::String^ prenom)
{
    throw gcnew System::NotImplementedException();
}

System::Data::DataSet^ CL_Services::afficherToutPersonne(System::String^ dataTableName)
{
    System::String^ sqlC = this->Employe->afficher();
    return this->lien->getRows(sqlC, dataTableName);
}

void CL_Services::ajouterClient(System::String^ nom, System::String^ prenom, System::String^ email, System::String^ telephone, System::String^ AdrLivraison, System::String^ AdrFacturation, System::String^ dateAnniv)
{
    this->Client->setNom(nom);
    this->Client->setPrenom(prenom);
    this->Client->setEmail(email);
    this->Client->setTelephone(telephone);
    this->Client->setAdrFac(AdrFacturation);
    this->Client->setAdrLiv(AdrLivraison);
    this->Client->setDateAniv(dateAnniv);

    System::String^ sqlC = this->Client->ajouter();
    this->lien->actionOnRows(sqlC);
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

System::Data::DataSet^ CL_Services::afficherClient(System::String^ dataTableName)
{
    System::String^ sqlC = this->Client->afficher();
    return this->lien->getRows(sqlC, dataTableName);
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

void CL_Services::ajouterArticle(System::String^ nomArt, System::String^ CategorieArt, System::String^ couleur, System::String^ reference, unsigned int quantite, double prixAchat)
{
    this->Article->setNom(nomArt);
    this->Article->setCategorie(CategorieArt);
    this->Article->setCouleur(couleur);
    this->Article->setReference(reference);
    this->Article->setQuantite(quantite);
    this->Article->setPrixAchat(prixAchat);
    
    System::String^ sqlC = this->Article->ajouter();
    this->lien->actionOnRows(sqlC);
}

void CL_Services::supprimerArtcile(unsigned int IDarticle)
{
    this->Article->setId(IDarticle);
    System::String^ sqlC = this->Article->supprimer();
    this->lien->actionOnRows(sqlC);
}

void CL_Services::ModifierArticle(unsigned int IDartcile, System::String^ NouveauNom, System::String^ NouvelleReference, System::String^ NouvelleCouleur, unsigned int NouveauSeuilReappro, unsigned int NouveauTauxTVA)
{
    throw gcnew System::NotImplementedException();
}

System::Data::DataSet^ CL_Services::afficherArticle(unsigned int IDArticle, System::String^ dataTableName)
{
    this->Article->setId(IDArticle);
    System::String^ sqlC = this->Article->afficher();
    return this->lien->getRows(sqlC, dataTableName);
}

System::Data::DataSet^ CL_Services::afficherTousArticles(System::String^ dataTableName)
{
    System::String^ sqlC = this->Article->afficherTousArticles();
    return this->lien->getRows(sqlC, dataTableName);
}

CL_Services::CL_Services()
{
    this->Client = gcnew CL_Clients();
    this->Employe = gcnew CL_Employes();
    this->stats = gcnew CL_Statistique();
    this->Commande = gcnew CL_Commandes();
    this->Article = gcnew CL_Articles();
    this->lien = gcnew CL_LVBDD();
}
