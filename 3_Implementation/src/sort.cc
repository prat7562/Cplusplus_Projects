#include<iostream>
#include"score.h"
#include<vector>
#include<algorithm>
bool Student::operator<(Student &myref)
{
    if(this->average>myref.average)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void print_top_ten(vector<Student>&myref)
{    cout<<"ps_number"<<"---"<<"name"<<"---"<<"average_score";
cout<<endl;
    int i=0;
    for(i=0;i<10;i++)
    {
        cout<<myref[i].id<<"---"<<myref[i].t_name<<"---"<<myref[i].average;
        cout<<endl;
    }
}
