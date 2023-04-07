#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

namespace myNameSpace{
string courseCode[4];
int CreditHours[4];
double courseCost[4];
}
int main() {
  using namespace myNameSpace;

  int totalCreditHours=0;
  int i=0;
  double totalCost=0,costPerCreditHour=0;

cout<<"Enter the course code, credit hours, and course cost for each of the four classes: "<<endl;
  for (i=0; i<4;i++){
    cout<<"Course code "<<i+1<<":"<<endl;
    cin>>courseCode[i];
    cout<<"Credit hours: ";
    cin>>CreditHours[i];
    cout<<"Course cost: ";
    cin>>courseCost[i];
    cout<<endl;
    
   
  }
  for(i=0;i<4;i++){
    totalCreditHours+=CreditHours[i];
    totalCost+=courseCost[i];
  }
  costPerCreditHour=totalCost/totalCreditHours;
cout<<fixed<<showpoint<<setprecision(2);

cout<<"Course code    Credit Hours    Course Cost"<<endl;
  cout<<endl;
cout<<courseCode[0]<<"               "<<CreditHours[0]<<"              "<<courseCost[0]<<endl;
cout<<courseCode[1]<<"               "<<CreditHours[1]<<"              "<<courseCost[1]<<endl;
cout<<courseCode[2]<<"               "<<CreditHours[2]<<"              "<<courseCost[2]<<endl;
cout<<courseCode[3]<<"               "<<CreditHours[3]<<"              "<<courseCost[3]<<endl;
  
  cout<<endl;
  
  cout << "Total credit hours: " << totalCreditHours << endl;
  cout << "Total course cost: $" << totalCost << endl;
  cout << "Cost per credit hour: $" << costPerCreditHour << endl;

  return 0;
}
