#include<iostream>
#include<fstream>
#include<string>
using namespace std;
struct Company{
    string division_name;
    int quarter;
    double sales;
};

int main(){
    Company salesRep;
    while(1){
        cout<<"Enter division (East/West/North/South): ";
        cin>>salesRep.division_name;
        if(salesRep.division_name=="East" || salesRep.division_name=="West" || salesRep.division_name=="North" || salesRep.division_name=="South")
            break;
        cout<<"Invalid division!"<<endl;
    }
    while(1){
        cout<<"Quarter(1,2,3 or 4): ";
        cin>>salesRep.quarter;
        if(salesRep.quarter>=1 && salesRep.quarter<=4)
            break;
        cout<<"Invalid Quarter!"<<endl;
    }
    while(1){
        cout<<"Sales: ";
        cin>>salesRep.sales;
        if(salesRep.sales>=0)
            break;
        cout<<"Sales must be positive!"<<endl;
    }
    ofstream out("salesreport.txt");
    out<<salesRep.division_name<<" "<<salesRep.quarter<<" "<<salesRep.sales<<endl;
    out.close();

    return 0;
}
