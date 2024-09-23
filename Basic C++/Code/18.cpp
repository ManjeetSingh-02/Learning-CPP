#include <iostream>
#include <string.h>
using namespace std ;

class Student {
    public:
    int s_rollno ;
    char s_name[10] ;
    static char s_branch[5] ;
    static char c_name[5] ;
    static int c_code ;

    void nsm() {
        cout<<"Student Name = "<<s_name<<endl;
        cout<<"Student Roll No = "<<s_rollno<<endl;
    }
    static void sm() {
        cout<<"Student Branch = "<<s_branch<<endl;
        cout<<"Student College Name = "<<c_name<<endl;
        cout<<"Student College Code = "<<c_code<<endl;
    }
};

char Student::s_branch[] = "CSE" , Student::c_name[] = "MPEC" ;
int Student::c_code = 046 ;

int main() {

    Student s ;
    s.s_rollno = 68 ;
    strcpy("Manjeet", s.s_name) ;
    s.nsm() ;
    Student::sm() ;
    return 0 ;

}