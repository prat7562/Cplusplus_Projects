#include<iostream>
#include<map>
#include"score.h"
#include<vector>
void init_map(vector<Student>&myref,map<int,Student>&my_ref_m)
{
int i=0;
for(i=0;i!=myref.size();i++)
{
    my_ref_m.insert({myref[i].id,myref[i]});
}
}
std::ostream& operator<<(ostream & rc,Student& m_c)
{
     
  rc<<m_c.t_name<<"---"<<m_c.average<<"---"<<m_c.eligible;
  return rc;
}
void find_ps(long num,map<int,Student> ref)
{
    int flag=0;
    cout<<"Name"<<"----"<<"Average"<<"---"<<"Eligibility";
    cout<<endl;
    map<int,Student> ::iterator iter;
    for(iter=ref.begin();iter!=ref.end();iter++)
    {
            if(iter->first==num)
            { 
                       cout<<iter->second;
                       flag=1;
            }
    }
    if(flag==0)
    {
        cout<<"No such PS_number";
    }
}
