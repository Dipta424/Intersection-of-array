#include<iostream>
using namespace std;
void calculator(int birth_date,int birth_month,int birth_year,int curnt_date,int curnt_month,int curnt_year,int &calc_year,int &calc_month,int &calc_day);
void monthDays(int birth_date,int birth_month,int birth_year,int curnt_date,int curnt_month,int curnt_year,int &calc_year,int &calc_month,int &calc_day,int &mon,int &da);
void weekDay(int birth_date,int birth_month,int birth_year,int curnt_date,int curnt_month,int curnt_year,int &calc_year,int &calc_month,int &calc_day,float week,int *da);
int main()
{


    while(1){
    int birth_date,birth_month,birth_year;
    int curnt_date,curnt_month,curnt_year;
    cout<<"enter birth date: ";
    cin>>birth_date;
    cout<<endl;
    cout<<"enter birth month: ";
    cin>>birth_month;
    cout<<endl;
    cout<<"enter birth year; ";
    cin>>birth_year;
    cout<<endl;
    cout<<"enter current date: ";
    cin>>curnt_date;
    cout<<endl;
    cout<<"enter current month: ";
    cin>>curnt_month;
    cout<<endl;
    cout<<"enter current year: ";
    cin>>curnt_year;
    cout<<endl;
    int calc_year,calc_month,calc_day,mon,da;
    float week;
 //calculator(birth_date,birth_month,birth_year,curnt_date,curnt_month,curnt_year,calc_year,calc_mon,calc_day);
  //cout<<"age= "<<calc_year<<" years "<<calc_mon<<" month "<<calc_day<<" days "<<endl
 //onthDays(birth_date,birth_month,birth_year,curnt_date,curnt_month,curnt_year,calc_year,calc_month,calc_day,mon,da);
//ut<<o<<" months "<<da<<" days "<<endl;
weekDay(birth_date,birth_month,birth_year,curnt_date,curnt_month,curnt_year,calc_year,calc_month,calc_day,week,da);
cout<<week<<" weeks "<<da<<" days ";
    }
    cout<<endl;

    return 0;

}
void calculator(int birth_date,int birth_month,int birth_year,int curnt_date,int curnt_month,int curnt_year ,int &calc_year,int &calc_month,int &calc_day){


            int month[]={31,28,31,30,31,30,31,31,30,31,30,31};
            if(curnt_date<birth_date){
                curnt_date=curnt_date+month[birth_month-1];
                curnt_month=curnt_month-1;
            }
            if(birth_month>curnt_month){
                curnt_month=curnt_month+12;
                curnt_year--;
            }
            calc_year=curnt_year-birth_year;
             calc_month=curnt_month-birth_month;
             calc_day=curnt_date-birth_date;

            //cout<<"age= "<<calculate_year<<" years "<<calculate_month<<" month "<<calculate_year<<" days "<<endl;

}



void monthDays(int birth_date,int birth_month,int birth_year,int curnt_date,int curnt_month,int curnt_year,int &calc_year,int &calc_month,int &calc_day,int &mon,int &da){


         calculator(birth_date,birth_month,birth_year,curnt_date,curnt_month,curnt_year,calc_year,calc_month,calc_day);
         mon=12*calc_year+calc_month;
         da=calc_day;


}
void weekDay(int birth_date,int birth_month,int birth_year,int curnt_date,int curnt_month,int curnt_year,int &calc_year,int &calc_month,int &calc_day,float &week,int &da){

calculator(birth_date,birth_month,birth_year,curnt_date,curnt_month,curnt_year,calc_year,calc_month,calc_day);

week=static_cast<float>(calc_year*52.143 +calc_month*4.345);
da=calc_day;
}