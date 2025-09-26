#include <iostream>
#include <iomanip>

using namespace std;

class Color
{
    private:
        int Red;
        int Blue;
        int Green;
    public:
        int getRed()
        {
            return Red;
        }
        void setRed(int r)
        {
            Red = r;
        }
        int getBlue()
        {
            return Blue;
        }
        void setBlue(int b)
        {
            Blue = b;
        }
        int getGreen()
        {
            return Green;
        }
        void setGreen(int g)
        {
            Green = g;
        }

        void print()
        {
            cout << "Red Value: " << Red << endl;
            cout << "Blue Value: " << Blue << endl;
            cout << "Green Value: " << Green << endl;
        }

};

void print(Color);

int main()
{
    Color color1;
    color1.setRed(155);
    color1.setBlue(76);
    color1.setGreen(103);
    color1.print();
    print(color1);

    Color color2;
    color2.setRed(155);
    color2.setBlue(76);
    color2.setGreen(103);
    color2.print();
    print(color2);

    Color color3;
    color3.setRed(155);
    color3.setBlue(76);
    color3.setGreen(103);
    color3.print();
    print(color3);

    return 0;
}

void print(Color c)
{
    cout << c.getRed() << c.getBlue() << c.getGreen() << endl << endl;
}