/*
***************************
*(c) Ajaya Ghimire		    *
*       YSU CSIS 2610     *
***************************
*/

#include "Rational.h"
#include <iostream>

using namespace std;

 
int  main () {
  int x1,x2,y1,y2;
  
  cout<<"\nComputer program to perform arithmetic with fractions.\n"<<endl;
  
cout<<"Enter the value of numerator of first fraction : ";
  cin>> x1;
  
cout<<"Enter the value of denominator of first fraction : ";
  cin>> x2;
  
  while(x2==0){
      cout<<"Value of denominator can't be zero for any real number."<<endl;
      cout<<"Enter the value of denominator of first fraction : ";
  cin>> x2;
  }
  
 cout<<"\n";
 
cout<<"Enter the value of numerator of second fraction : ";
  cin>> y1;
  
cout<<"Enter the value of denominator of second fraction : ";
  cin>> y2;
  
  while(y2==0){
      cout<<"Value of denominator can't be zero for any real number."<<endl;
      cout<<"Enter the value of denominator of first fraction : ";
  cin>> y2;
  }
  
  cout<<"\n";

cout<<"=================================================="<<endl;
cout<<"USER INPUT:"<<endl;
cout<<"=================================================="<<endl;
cout<<"\nThe first fraction is "<<x1<<"/"<<x2<<endl;
cout<<"The second fraction is  "<<y1<<"/"<<y2<<endl;
cout<<"\n";


Rational r1 (x1, x2);
Rational r2 (y1, y2);
  
 

cout<<"=================================================="<<endl; 
cout << "RESULTS: " << endl;
cout<<"=================================================="<<endl;
  
 
 
cout << "\nAddition:  "<<endl;
  
 
Rational solution = r1 + r2;
  

  
cout<<"("<<x1<<"/"<<x2<<")"<<" + "<<"("<<y1<<"/"<<y2<<")"<<" = ";
solution.print ();
  
cout << "The solution in decimal form is ";
  
solution.printFloat ();
  
 
 
cout << "\n\nSubtraction:  "<<endl;
  
 
solution = r1 - r2;

cout<<"("<<x1<<"/"<<x2<<")"<<" - "<<"("<<y1<<"/"<<y2<<")"<<" = ";
solution.print ();
  
cout << "The solution in decimal form is ";
  
solution.printFloat ();
  

cout << "\n\nMultiplication:  " << endl;
  

solution = r1 * r2;
  
cout<<"("<<x1<<"/"<<x2<<")"<<" * "<<"("<<y1<<"/"<<y2<<")"<<" = ";
  
solution.print ();
  
cout << "The solution in decimal form is ";
  
solution.printFloat ();
  
 
 
cout << "\n\nDivision:" << endl;
  
 
solution = r1 / r2;
  
cout<<"("<<x1<<"/"<<x2<<")"<<" / "<<"("<<y1<<"/"<<y2<<")"<<" = ";
solution.print ();
  
cout << "The solution in decimal form is ";
  
solution.printFloat ();
  
 
cout << "\n******************** Thank You! *******************" << endl;
  
 
 
return 0;

 
};


