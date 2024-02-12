#pragma once
class TravelExpense
{
public:
	double MilestoDrive;
	double GasPrice;
	double MilesPerGallon;
	double Expense;
private:
	TravelExpense();
	TravelExpense(double, double, double);
	void setMilestoDrive(double);
	void setGasPrice(double);
	void setMilesPerGallon(double);
	double getMilesToDrive();
	double getGasPrice();
	double getExpense();
	double getMilesPerGallon();
	void CalculateExpense();

};

