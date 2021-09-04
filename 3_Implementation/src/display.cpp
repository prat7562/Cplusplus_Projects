#include "average.h"

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

std::ostream& operator<<(ostream & rc,Student& m_c)
{
     
  rc<<m_c.id<<"---"<<m_c.t_name<<"---"<<m_c.m1_name<<"---"<<m_c.score_m1<<"---"<<m_c.m2_name<<"---"<<m_c.score_m2<<"---"<<m_c.m3_name<<"---"<<m_c.score_m3<<"---"<<m_c.average<<"---"<<m_c.eligible;
  return rc;
}