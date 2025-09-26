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
            cout << "Green Value: " << Green << endl << endl;
        }

};

int main()
{
    cout << "Color #1\n";
    Color color1;
    color1.setRed(155);
    color1.setBlue(76);
    color1.setGreen(103);
    color1.print();

    cout << "Color #2\n";
    Color color2;
    color2.setRed(203);
    color2.setBlue(43);
    color2.setGreen(12);
    color2.print();

    cout << "Color #3\n";
    Color color3;
    color3.setRed(6);
    color3.setBlue(35);
    color3.setGreen(204);
    color3.print();

    return 0;
}