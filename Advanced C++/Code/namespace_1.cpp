#include <iostream>
using namespace std;

namespace A
{
    int n;

    void Aget()
    {
        cout << "A" << endl;
    }

    namespace B
    {
        void Bget()
        {
            cout << "B" << endl;
        }

        class C
        {
        public:
            void Cget()
            {
                cout << "C" << endl;
            }
        };
    }
}

int main()
{
    A::n = 10;
    cout << A::n << endl;

    A::Aget();

    A::B::Bget();

    A::B::C obj;
    obj.Cget();

    return 0;
}