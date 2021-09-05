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

int main()
{
    cout<<"|---Welcome to genesis score card---|";
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
cout<<"enter 4 to exit"<<endl;
cin>>choice;
if(choice=="1")
{
print(my_vect);
cout<<endl;
}
else if(choice=="2")
{
sort(my_vect.begin(),my_vect.end());
print_top_ten(my_vect);
}
else if(choice=="3")
{
map<int,Student> my_map;
init_map(my_vect,my_map);
cout<<"Enter PS number to know about their results"<<endl;
long ps_number;
cin>>ps_number;
find_ps(ps_number,my_map);
}
else if(choice=="4")
{
    exit(EXIT_SUCCESS);
}
else{
    cout<<"Invalid Try again"<<endl;
    main();
}

return 0;
}
