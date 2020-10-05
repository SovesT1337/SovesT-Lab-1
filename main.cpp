#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int pr1() {
    std::cout << "1 13 49" << std::endl;
}

int pr2() {
    char ch;
    std::cout << "Vvedite Razdelitel: ";
    std::cin >> ch;
    std::cout << "1" << ch << "13" << ch << "49" << endl;
}

int pr3() {
    int ch2,ch3,ch4;
    std::cout << "Vvedite tri chisla cherez probel: ";
    std::cin >> ch2 >> ch3 >> ch4;
    std::cout << ch2 << "  " << ch3 << "  " << ch4 << std::endl;
}

int pr4() {
    int a;
    std::cout << "Vvedite a: ";
    std::cin >> a;
    int x = 12 * a * a + 7 * a - 12;
    cout << x << endl << "Vvedite x: ";
    cin >> x;
    int y = 3 * x * x * x + 4 * x * x - 11 * x + 1;
    cout << y << endl;
}

int pr5() {
    float vol;
    float mass;
    cout << "Vvedite obyom: ";
    cin >> vol;
    cout << "Vvedite massu: ";
    cin >> mass;
    float plot = mass / vol;
    cout << plot << endl;
}

int pr6() {
    float a,b;
    cout << "Vvedite a: ";
    cin >> a;
    cout << "Vvedite b: ";
    cin >> b;
    float x = -b / a;
    cout << x << endl;
}

int pr7() {
    float x1,y1,x2,y2,l;
    cout << "Vvedite koordinati pervoi tochki: ";
    cin >> x1 >> y1;
    cout << "Vvedite koordinati vtoroi tochki: ";
    cin >> x2 >> y2;
    l=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    cout << l << endl;
}

int pr8() {
    float p,a,b,h;
    cout << "Vvedite osnovaniya i visotu: ";
    cin >> a >> b >> h;
    p=sqrt(4*h*h+(a-b)*(a-b))+a+b;
    cout << p << endl;
}

int pr9(){
    float a,b,s,pi;
    cout << "Vvedite vneshniy i vnutreniy radiusi: ";
    cin >> a >> b;
    pi=3.14;
    s=pi*(a-b)*(a-b);
    cout << s << endl;
}

int pr10(){
    float a,v,s;
    cout << "Vvedite dlinnu rebra: ";
    cin >> a;
    s=a*a*6;
    v=a*a*a;
    cout << "Obiyom: " << v << endl << "Ploshad: " << s << endl;
}

int pr11(){
    float a,p;
    cout << "Vvedite dlinnu storony: ";
    cin >> a;
    p=4*a;
    cout << p << endl;
}

int pr12(){
    float a,d;
    cout << "Vvedite dlinnu radiusa: ";
    cin >> a;
    d=2*a;
    cout << d << endl;
}

int pr13(){
    string st;
    cout << "Vvedite imya: ";
    cin >> st;
    cout << "Hello, " <<st<< ", My name is C++.";
}

int pr14(){
    cout << "Vvedite slovo" << endl;
    string st;
    cout << st;
    cin >> st;
    bool b = true;
    int i;
    for (i = 0; i<3; ++i){
        if (st[i] != st[7-i-1]) {
            b = false;
        }
    }
    if (b) {
        cout << "Polindrome" << endl;
    }
    else {
        cout << "Ne Polindrome" << endl;
    }
}

int main() {
    pr1();
    pr2();
    pr3();
    pr4();
    pr5();
    pr6();
    pr7();
    pr8();
    pr9();
    pr10();
    pr11();
    pr12();
    pr13();
    pr14();
    return 0;
}
