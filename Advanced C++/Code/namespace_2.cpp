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

using namespace A; // A::n, A::Aget()
using namespace A::B; // B::Bget(), B::C obj

int main()
{
    n = 10;
    cout << n << endl;

    Aget();

    Bget();

    C obj;
    obj.Cget();

    return 0;
}