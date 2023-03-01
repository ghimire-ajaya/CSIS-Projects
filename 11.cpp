#include<iostream>
using namespace std;

struct Budget
{
     float Housing;
     float utilities;
     float HouseExpenses;
     float Transportation;
     float Food;
     float Mediacal;
     float Insurance;
     float Entertainment;
     float Clothing;
    float Miscellaneous;
};


void GetBudget(Budget &);

void  DiaplayReport(Budget);



int  main()

{

   Budget MonthlyBudget;



   GetBudget(MonthlyBudget);



   DiaplayReport(MonthlyBudget);

   system("pause");

   return 0;

}

void GetBudget(Budget &b)

{


     cout<<"Inputting Data of Student Budget "<<endl;

     cout<<"Enter amount spent for Housing:";

     cin>>b.Housing;

     cout<<"Enter amount spent for utilities:";

     cin>>b.utilities;

     cout<<"Enter amount spent for HouseExpenses:";

     cin>>b.HouseExpenses;

     cout<<"Enter amount spent for Transportation:";

     cin>>b.Transportation;

     cout<<"Enter amount spent for Food:";

     cin>>b.Food;

     cout<<"Enter amount spent for Medical:";

     cin>>b.Mediacal;

     cout<<"Enter amount spent for Insurance:";

     cin>>b.Insurance;

     cout<<"Enter amount spent for Entertainment:";

     cin>>b.Entertainment;

     cout<<"Enter amount spent for Clothing:";

     cin>>b.Clothing;

     cout<<"Enter amount spent on Miscelleneous:";

     cin>>b.Miscellaneous;

}

void DiaplayReport(Budget b)

{

     float difference,Total;


     difference=500-b.Housing;



     if(difference>=0)

          cout<<"Housing Expenses is UNDER Budget"<<endl;

     else if(difference<0)

          cout<<"Housing Expenses is OVER Budget"<<endl;

     difference=150-b.utilities;

     if(difference>=0)

      cout<<" Utilities Expenses is UNDER Budget"<<endl;

     else if(difference<0)

       cout<<" Utilities Expenses is OVER Budget"<<endl;

     difference=65-b.HouseExpenses;

     if(difference>=0)

          cout<<"HouseHold Expenses is UNDER Budget"<<endl;

     else if(difference<0)

          cout<<"HouseHold Expenses is OVER Budget"<<endl;

     difference=50-b.Transportation;

     if(difference>=0)

     cout<<"Transportation Expenses is UNDER Budget"<<endl;

     else if(difference<0)

     cout<<"Transportation Expenses is OVER Budget"<<endl;

     difference=250-b.Food;

     if(difference>=0)

          cout<<"Food Expenses is UNDER Budget"<<endl;

     else if(difference<0)

          cout<<"Food Expenses is OVER Budget"<<endl;

    difference=30-b.Mediacal;

     if(difference>=0)

          cout<<"Medical Expenses is UNDER Budget"<<endl;

     else if(difference<0)

          cout<<"Medical Expenses is OVER Budget"<<endl;



     difference=100-b.Insurance;

     if(difference>=0)

          cout<<"Insurence Expenses is UNDER Budget"<<endl;

     else if(difference<0)

     cout<<"Insurence Expenses is OVER Budget"<<endl;



     difference=150-b.Entertainment;

     if(difference>=0)

     cout<<"Entertainment Expenses is UNDER  Budget"<<endl;

     else if(difference<0)

     cout<<"Entertainment Expenses is OVER Budget"<<endl;



     difference=75-b.Clothing;

     if(difference>=0)

          cout<<"Clothing Expenses is UNDER  Budget"<<endl;

     else if(difference<0)

          cout<<"Clothing Expenses is OVER Budget"<<endl;



     difference=50-b.Miscellaneous;

     if(difference>=0)

     cout<<"Miscellaneous Expenses is UNDER Budget"<<endl;

     else if(difference<0)

     cout<<"Miscellaneous Expenses is OVER Budget"<<endl;





     Total= b.Clothing+b.Entertainment+b.Food+b.HouseExpenses+b.Housing+b.Insurance+b.Mediacal+b.Transportation+b.utilities+b.Miscellaneous;

     if(Total>1420)
       cout<<"Monthly Expenses are OVER the Budget"<<endl;
     else
       cout<<"Monthly Expenses are UNDER the Budget"<<endl;
}
