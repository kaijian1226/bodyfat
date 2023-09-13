#include<iostream>

using namespace std;


int main()
{
    float weight;
    float high;
    float flat;

    cout << "请输入体重，单位斤: " ;
    cin >> weight;
    weight = weight/2;

    cout << "请输入身高，单位厘米: ";
    cin >> high;
    high = high/100;

    flat = weight / high /high;
    cout << "您的体脂比为：" << flat << endl;

    return 0;

}