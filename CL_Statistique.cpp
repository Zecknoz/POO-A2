#include "CL_Statistique.h"

System::String^ CL_Statistique::calculateAvgBasket()
{
    throw gcnew System::NotImplementedException();
    // TODO: insert return statement here
}

System::String^ CL_Statistique::calculateRevenue(char month)
{
    throw gcnew System::NotImplementedException();
    // TODO: insert return statement here
}

System::String^ CL_Statistique::calculateBuyAmont(unsigned int client)
{
    throw gcnew System::NotImplementedException();
}

System::String^ CL_Statistique::top10BestSales()
{
    return "SELECT nom FROM Article;";
}

System::String^ CL_Statistique::top10WorstSales()
{
    return "SELECT prenom FROM Client;";
}

System::String^ CL_Statistique::calculateCommercialValue()
{
    return "SELECT COUNT(DISTINCT prenom) AS NombreDePrenoms FROM Client;";
}

System::String^ CL_Statistique::calculateBuyValue()
{
    throw gcnew System::NotImplementedException();
    // TODO: insert return statement here
}
