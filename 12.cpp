#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
struct QUARTERLY
{string div; 
int quarter;        
double sales;       
}data;
int main()
{char filename[30];
double totalquarter[4]={0};
double totaldivision[4]={0};
double totalall=0;
int highest,lowest;
string division[4]={"North","South","East","West"};
int i,j;
cout<<"what is the name of the file you are using? ";
cin>>filename;
ifstream input;
input.open(filename);         
if(input.fail())           
   { cout<<"file did not open please check it\n";
   system("pause");
   return 1;
   }
for(i=0;i<16;i++)
    { input>>data.div>>data.quarter>>data.sales;
      totalall+=data.sales;
      totalquarter[data.quarter-1]+=data.sales;
      for(j=0;j<4;j++)
          if (data.div.compare(division[j]) == 0)
                  {totaldivision[j]+=data.sales;
                   j=10;
                   }
      }     
input.close();
highest=0;
for(i=2;i<4;i++)
     if(totalquarter[i]>totalquarter[highest])
         highest=i;
lowest=0;           
for(i=2;i<4;i++)
     if(totalquarter[i]<totalquarter[lowest])
         lowest=i;
cout<<setprecision(2)<<fixed<<showpoint;        
cout<<"Corporate Sales\nQuarter\tSales\n";
for(i=0;i<4;i++)
    cout<<i+1<<"\t$"<<totalquarter[i]<<endl;
cout<<"\n\nYearly Sales by Division\nDivision\tSales\t\tAverage\n";
for(i=0;i<4;i++)
    cout<<division[i]<<"\t\t$"<<totaldivision[i]<<"\t\t$"<<totaldivision[i]/4.<<endl;  
cout<<"\n\nTotal Corporate Sales: $"<<totalall<<endl;
cout<<"Highest Quarter: "<<highest+1<<endl;
cout<<"Lowest Quarter: "<<lowest+1<<endl;  
system("pause");        
return 0;
}