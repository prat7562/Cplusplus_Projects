#include<iostream>
#include<vector>
#include<fstream>
#include<string.h>
#include<sstream>
#include <time.h>
#include<chrono>
#include<algorithm>
#include<map>
#include"score.h"
using namespace std;
void check()
{
     cout<<"\n \n"<<"|---Welcome to genesis score card---|";
    cout<<endl;

vector<Student> my_vect;
ini_student(my_vect);
add_eligibility(my_vect);
average(my_vect);
string choice;

 cout<<endl;
cout<<endl;
    cout<<"Enter 1 to know about the overall performance of the student";
cout<<endl;
cout<<"Enter 2 to know about the top ten participants";
cout<<endl;
cout<<"Enter 3 to find student based on their ps number and their eligibility"<<endl;
cout<<endl;
cout<<"Enter 4 to know about performance on each module"<<endl;
cout<<"Enter 5 to exit"<<endl;
cin>>choice;
if(choice=="1")
{
print(my_vect);
cout<<endl;
check();
}
else if(choice=="2")
{
sort(my_vect.begin(),my_vect.end());
print_top_ten(my_vect);
cout<<endl;
check();
}
else if(choice=="3")
{
map<int,Student> my_map;
init_map(my_vect,my_map);
cout<<"Enter PS number to know about their results"<<endl;
long ps_number;
cin>>ps_number;
find_ps(ps_number,my_map);
cout<<endl;
check();
}
else if(choice=="4")
{
print_module_status(my_vect);
cout<<endl;
check();

}
else if(choice=="5")
{
    exit(EXIT_SUCCESS);
}
else{
    cout<<"Invalid Try again";
    check();
}
}
int main()
{
   string str;
  
   cout<<"Enter 1 to Explore options";
   cout<<endl;
   cout<<"Enter any other number to terminate the program";
   cout<<endl;
    cin>>str;
    if(str=="1")
    {
        check();
    }
    else
    {
        exit(EXIT_SUCCESS);
    }

return 0;
}
