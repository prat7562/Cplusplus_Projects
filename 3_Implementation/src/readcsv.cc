#include<iostream>
#include"score.h"
#include<vector>
#include<algorithm>
#include<fstream>
int get_n_r()
{
     int n=9;
    int rows=0;
ifstream file("c++y.csv");
string line;
while (getline(file, line))
rows++;
return rows;
}
void ini_student(vector<Student>&mystudent)
{    
    
    int n;
    n=get_n_r();
     ifstream ip("c++y.csv");
    if(!ip.is_open())
    {
        cout<<"error in files";
    }
     string id_2,name_2,mail_2,module_name2,module_code2,module_score2;
    ifstream ip1("python.csv");
    if(!ip1.is_open())
    {
        cout<<"error in files";
    }
    string id_3,name_3,mail_3,module_name3,module_code3,module_score3;
    ifstream ip2("re_sdlc.csv");
    if(!ip2.is_open())
    {
        cout<<"error in files";
    }


    while(n--)
    {
        string id_1,name_1,mail_1,module_name1,module_code1,module_score1;
        int i_marks_m1,i_marks_m2,i_marks_m3;
        int i_ud;
   

    getline(ip,id_1,',');
    getline(ip,name_1,',');
    getline(ip,mail_1,',');
    getline(ip,module_code1,',');
    getline(ip,module_score1,',');
    getline(ip,module_name1,'\n');
  
   
    getline(ip1,id_2,',');
    getline(ip1,name_2,',');
    getline(ip1,mail_2,',');
    getline(ip1,module_code2,',');
    getline(ip1,module_score2,',');
    getline(ip1,module_name2,'\n');


    getline(ip2,id_3,',');
    getline(ip2,name_3,',');
    getline(ip2,mail_3,',');
    getline(ip2,module_code3,',');
    getline(ip2,module_score3,',');
    getline(ip2,module_name3,'\n');
   int i_uid;
    i_marks_m1=stoi(module_score1);
    i_marks_m2=stoi(module_score2);
    i_marks_m3=stoi(module_score3);
    i_uid=stoi(id_3);

    Student s2(i_uid,name_1,module_name1,i_marks_m1,module_name2,i_marks_m2,module_name3,i_marks_m3);
    mystudent.push_back(s2);
    

    }
 
}