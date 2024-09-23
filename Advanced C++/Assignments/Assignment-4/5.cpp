#include <iostream>
using namespace std;

class Hotel
{
public:
    int htype, hrate;
    string hname, hcity;

    void hset(string hn, int ht, string hc, int hr)
    {
        hname = hn;
        htype = ht;
        hcity = hc;
        hrate = hr;
    }
};

class Flight
{
public:
    int fno, sno;
    string scity, dcity;

    void fset(int fn, string sc, string dc, int stno)
    {
        fno = fn;
        scity = sc;
        dcity = dc;
        sno = stno;
    }
};

class Passenger : Hotel, Flight
{
public:
    string pname, pcity;
    int page;

    void pset(string hn, int ht, string hc, int hr, int fn, string sc, string dc, int stno, string pn, int pa, string pc)
    {
        Hotel::hset(hn, ht, hc, hr);
        Flight::fset(fn, sc, dc, stno);
        pname = pn;
        page = pa;
        pcity = pc;
    }

    void get()
    {
        cout << "Hotel Name - " << Hotel::hname << endl;
        cout << "Hotel Type - " << Hotel::htype << endl;
        cout << "Hotel City - " << Hotel::hcity << endl;
        cout << "Hotel Rating - " << Hotel::hrate << endl;
        cout << "Flight No - " << Flight::fno << endl;
        cout << "Source City - " << Flight::scity << endl;
        cout << "Destination City - " << Flight::dcity << endl;
        cout << "Seat No - " << Flight::sno << endl;
        cout << "Passenger Name - " << pname << endl;
        cout << "Passenger Age - " << page << endl;
        cout << "Passenger City - " << pcity << endl;
    }
};

int main()
{
    Passenger p;
    p.pset("A", 5, "K", 1000, 101, "X", "Y", 20, "AV", 12, "G");
    p.get();
    return 0;
}