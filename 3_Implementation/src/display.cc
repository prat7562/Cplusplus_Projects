
#include "score.h"
#include<vector>
#include<iostream>
#include<vector>
#include<fstream>
#include<string.h>
#include<sstream>
#include <time.h>
#include<chrono>
#include<algorithm>
#include<map>

void Student:: display()
{
    cout<<id<<"---"<<t_name<<"---"<<m1_name<<"---"<<score_m1<<"---"<<m2_name<<"---"<<score_m2<<"---"<<m3_name<<"---"<<score_m3<<"---"<<average<<"---"<<eligible;

}
 
 void print(vector<Student>&myref)
{    cout<<"ps_number"<<"---"<<"name"<<"---"<<"modul1"<<"---"<<"marks1"<<"---"<<"modul2"<<"---"<<"marks2"<<"---"<<"modul3"<<"---"<<"marks3"<<"---"<<"average"<<"---"<<"eligibility";
        cout<<endl;
    for(int i=0;i<=myref.size();i++)
    {
        myref[i].display();
        cout<<endl;
    }
}

