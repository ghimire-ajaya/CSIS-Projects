
#include"ParkedCar.h"
#include"ParkingMeter.h"
#include"ParkingTicket.h"
#include"PoliceOfficer.h"
#include <iostream>
#include <cstring>
using namespace std;

PoliceOfficer::PoliceOfficer()
{

   badge = " ";
   name = " ";
}
PoliceOfficer::PoliceOfficer(string aname, string abadge, string amake, string amodel, string acolor, string alicensenumber, int aparkedminutes, int aminutespurchased)
{
   PC.set(amake, amodel, acolor, alicensenumber, aparkedminutes);
   PM.setparkingmeter(aminutespurchased);
   setOfficer(aname, abadge);
}
PoliceOfficer::~PoliceOfficer()
{
}

void PoliceOfficer::setname(string aname)
{
   name = aname;
}
void PoliceOfficer::setbadge(string abadge)
{
   badge = abadge;
}
void PoliceOfficer::setOfficer(string aname, string abadge)
{
   badge = abadge;
   name = aname;
}
string PoliceOfficer::getname() const
{
   return name;
}
string PoliceOfficer::getbadge() const
{
   return badge;
}
void PoliceOfficer::displayofficer() const
{
   cout << "Name: " << getname() << endl;
   cout << "Badge ID: " << getbadge() << endl;
}
void PoliceOfficer::patrol()
{
   if (PC.getparkedminutes() > PM.getparkingmeter()) /*parked minutes >= minutes purchased*/
   {
       ParkingTicket PT;
       PT.generateticket();
   }
   else
   {
       cout << "No crime has been commited." << endl;
   }
}
