#include <iostream>
using namespace std;
float pie = 3.1415;

class person
{
    float r, v, l, b, h;
    int s;

public:
    float volume(int s)
    {
        v = s * s * s; // cube
        cout << "volume of cube=" << v;
    }
    float volume(float r, float h)
    {
        v = pie * r * r * h; // cylinder
        cout << "volume of cylinder=" << v;
    }
    float volume(float l, float b, float h)
    {
        v = l * b * h; // cuboid
        cout << "volume of cuboid=" << v;
    }
    float volume()
    {
        cout << "Enter radius and height of cone\n";
        cin >> r >> h; // cone
        v = (1 / 3.0) * pie * r * r * h;
        cout << "volume of cone=" << v;
    }
    int volume(float r)
    {
        v = (4 / 3) * pie * r * r * r;
        cout << "volume of sphere=" << v;
    }
};
int main()
{
    person a;
    float r, l, b, h;
    int choice, s;
    cout << "1.volume of cube\n2.volume of cuboid\n3.volume of cylinder\n4.volume of cone\n5.volume of sphere" << endl;
    cin >> choice;
    while (choice != 0)
    {
        switch (choice)
        {
        case 1:
            cout << "Enter side of cube:";
            cin >> s;
            a.volume(s);
            break;
        case 2:
            cout << "Enter length, breadth and height of cuboid\n";
            cin >> l >> b >> h;
            a.volume(l, b, h);
            break;
        case 3:
            cout << "Enter radius and height of cylinder\n";
            cin >> r >> h;
            a.volume(r, h);
            break;
        case 4:
            a.volume();
            break;
        case 5:
            cout << "Enter radius of sphere\n";
            cin >> r;
            a.volume(r);
            break;
        default:
            cout << "Enter proper choice:";
        }
        cout << "\n\nEnter choice(0 for exit):";
        cin >> choice;
    }
    return 0;
}
