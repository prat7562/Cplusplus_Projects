
#include "score.h"
#include<vector>
int Student::avg_sum()
{
    int avg=0;
    avg = (score_m1+score_m2+score_m3)/3;
    return avg;
}

void average(vector<Student>&myref)
{
    
  int i=0;
  for(i=0;i<myref.size();i++)
  {
      myref[i].average=myref[i].avg_sum();
  }
  
}
