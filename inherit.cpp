#include <iostream>
using namespace std;

class area
{
public:
    void tri(int r, int n)
    {
        float areatri = r * n * 0.5;
        cout << areatri << endl;
    }

protected:
    void rec(int b, int h)
    {
        int breath = b;
        int height = h;
    }
};

class area2 : public area
{
public:
    void squ(int r)
    {
        float areasq = r * r;
        cout << areasq << endl;
    }

void rec{
    arearec = breath*height;
    cout << arearec << endl;
}


};

int main()
{

    area2 val;

    val.tri(20, 40);
    val.squ(5);
    val.rec(5,25);
}
