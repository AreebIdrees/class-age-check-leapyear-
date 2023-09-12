#include<iostream>
using namespace std;

class leapyear{
private:
int date;
int month;
int year;


public:
leapyear(){
    cout<<"enter the date:";
    cin>>date;
    cout<<"enter the month:";
    cin>>month;
    cout<<"enter the year:";
    cin>>year;
}
void check(){
if(year%4 == 0){
    cout<<"this year is a leapyear";
}else{
    cout<<"this year is not a leapyear";

} 
}
void agecheck(){
    cout<<"enter the date of birth:";
    cin>>date;
    cout<<"enter the month of birth:";
    cin>>month;
    cout<<"enter the year of birth:";
    cin>>year;
    int Curryear;
    cout<<"enter the current year:";
    cin>>Curryear;

    int count=0;
    for (int i=year;i<Curryear;i++){
        count++;
    }
   cout<<"the age is:"<<count;
}

};
int main(){
    class leapyear lp;
    lp.check();
    lp.agecheck();
}