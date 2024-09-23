#include <iostream>
using namespace std;

class Medicine
{
public:
    string category, date_of_manufacture, cname;

    void set(string c, string d, string cn)
    {
        category = c;
        date_of_manufacture = d;
        cname = c;
    }
};

class Tablet : Medicine
{
public:
    string ca, da, cm, tname;
    int price;

    void set(string c, string d, string cn, string tn, int p)
    {
        Medicine::set(c, d, cn);
        ca = Medicine::cname;
        da = Medicine::date_of_manufacture;
        cm = Medicine::cname;
        tname = tn;
        price = p;
    }
};

class PainReliever : Tablet
{
public:
    string side_effects;
    int dosage_units, use_within_days;

    void set(string c, string d, string cn, string tn, int p, string se, int du, int uwd)
    {
        Tablet::set(c, d, cn, tn, p);
        side_effects = se;
        dosage_units = du;
        use_within_days = uwd;
    }
    void get()
    {
        cout << "Category - " << Tablet::ca << endl;
        cout << "Date of Manufacture - " << Tablet::da << endl;
        cout << "Company Name - " << Tablet::cm << endl;
        cout << "Tablet Name - " << Tablet::tname << endl;
        cout << "Price - " << Tablet::price << endl;
        cout << "Side Effects - " << side_effects << endl;
        cout << "Dosage Units - " << dosage_units << endl;
        cout << "Use Within Days - " << use_within_days << endl;
    }
};

int main()
{
    PainReliever p;
    p.set("A", "12/02/2024", "XYZ", "SD", 100, "DEF", 20, 12);
    p.get();
    return 0;
}