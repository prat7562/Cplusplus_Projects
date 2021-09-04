#include<iostream>
#include"score.h"
#include<vector>
#include<algorithm>


bool Student:: check_eligibility()
{
 int res1;
    res1=avg_sum();
    if(res1>=60)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void add_eligibility(vector<Student>&myref)
{
    for(int i=0;i<myref.size();i++)
    {
        if(myref[i].check_eligibility())
        {
                myref[i].eligible="Yes";
        }
        else
        {
                myref[i].eligible="No";
        }
    }
}

