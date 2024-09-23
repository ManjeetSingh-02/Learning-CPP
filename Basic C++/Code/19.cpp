#include <iostream>
#include <string.h>
using namespace std ;

class employee {
    int eid;
    char ename[20] ;
    float salary ;
    float incentive ;
    static char cname[20] ;
    static int cestdyear ;
    static char cfounder[20] ;

    public:
    void setE_data(int id, char en[], float sal, float inc) {
        eid = id ;
        strcpy(ename, en) ;
        salary = sal ;
        incentive = inc ;
    }
    static void getC_data() {
        cout<<"C name"<<cname<<endl;
        cout<<"Founder"<<cfounder<<endl;
        cout<<"ESTD. Year"<<cestdyear<<endl;
    }
    void getE_data() {
        cout<<"EMP ID"<<eid<<endl;
    }
};

int main() {

    employee e1;

    return 0;
}