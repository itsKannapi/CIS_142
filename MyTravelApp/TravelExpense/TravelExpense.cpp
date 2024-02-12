

#include <iostream>
#include "TravelExpense.h"

TravelExpense::TravelExpense(){
    setMilestoDrive(0);
    setGasPrice(0);
    setMilesPerGallon(0);
}

TravelExpense::TravelExpense(double MtoD, double GP, double MpG) {
    setMilestoDrive(MtoD);
    setGasPrice(GP);
    setMilesPerGallon(MpG);
}

void TravelExpense::setMilestoDrive(double h)
{
    this->MilestoDrive = h;
}

void TravelExpense::setGasPrice(double g)
{
    this->GasPrice = g;
}

void TravelExpense::setMilesPerGallon(double m)
{
    this->MilesPerGallon = m;
}

double TravelExpense::getMilesToDrive()
{
    return this->MilestoDrive;
}

double TravelExpense::getGasPrice()
{
    return this->GasPrice;
}

double TravelExpense::getExpense()
{
    return this->Expense;
}

double TravelExpense::getMilesPerGallon()
{
    return this->MilesPerGallon;
}

void TravelExpense::CalculateExpense()
{
    this->Expense = ((getMilesToDrive() / getMilesPerGallon()) * getGasPrice());
}
