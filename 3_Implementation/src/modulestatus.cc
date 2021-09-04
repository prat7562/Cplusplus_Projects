#include"score.h"
#include"fstream"
#include"string.h"
#include"iostream"
using namespace std;

void Student::dis_module_status()
{      
   
    if (score_m1>=60)
    st_1= "Pass";
    else if(score_m1<60)
    st_1="Fail";
    if (score_m2>=60)
    st_2= "Pass";
    else if(score_m2<60)
    st_2="Fail";
    if (score_m3>=60)
    st_3= "Pass";
    else if(score_m3<60)
    st_3="Fail";

  cout<<id<<"---"<<t_name<<"---"<<m1_name<<"---"<<st_1<<"---"<<m2_name<<"---"<<st_2<<"---"<<m3_name<<"---"<<st_3;
}



void print_module_status(vector<Student>&myref)
{  
    cout<<"ps_name"<<"---"<<"name"<<"---"<<"modul1"<<"---"<<"Staus"<<"---"<<"modul2"<<"---"<<"Staus"<<"---"<<"modul3"<<"---"<<"Staus";
        cout<<endl;
    for(int i=0;i<myref.size();i++)
    {   
        
        myref[i].dis_module_status();
        cout<<endl;
   
    }
}



