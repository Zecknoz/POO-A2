#pragma once
ref class CL_Statistique
{
public:
	System::String^ calculateAvgBasket();
	System::String^ calculateRevenue(char month);
	System::String^ calculateBuyAmont(unsigned int client);
	System::String^ top10BestSales();
	System::String^ top10WorstSales();
	System::String^ calculateCommercialValue();
	System::String^ calculateBuyValue();
};

