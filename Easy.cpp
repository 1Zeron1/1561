#include <iostream>
#include "easy.h";
using namespace std;

int itc_str(int a, int b, int c) {
    int s = 0, p = 0;
    int d = 0;
    
    cin >> a >> b >> c;
    if (a > 0 && b > 0 && c > 0) {
        p = (a + b + c) / 2;
        s = p * (p - a) * (p - b) * (p - c);
        for (int i = 1; d = s; i++)
        {
            d = i * i;
          
            cout << i << endl;
        } 
    }

        
    else if  (a <= 0 && b <= 0 && c <= 0) {
        cout << "-1" << endl;
    }
    return 0;
}

int itc_spr(int a, int b) {
    int s = 0;
    cin >> a >>b;
    if (a > 0 && b>0) {
        s = a * b;
        cout << s << endl;
    }
    else if (a <= 0 && b<= 0) {
        cout << "-1" << endl;
    }
    return 0;
}
int itc_skv(int num) {
    int a = 0;
    cin >> num;
    if (num > 0) {
        a = num * num;
        cout << a << endl;
    }
    else if (num<=0) {
        cout << "-1" << endl;
    }



    return 0;
}
int itc_sqrt(int num) {
    int a = 0;
    cin >> num;
    if (num / num == 1) {
        a = num * num;
        cout << a << endl;
    }
    else {
        cout << "-1" << endl;
    }



    return 0;
}
double itc_fmin(double num, double num2) {
    cin >> num >> num2;
    if (num > num2 || num == num2) {
        cout << num2 << endl;
    }
    if (num2 > num) {
        cout << num << endl;
    }
    return 0;
}
double itc_fmax(double num, double num2) {
    cin >> num >> num2;
    if (num > num2 || num == num2) {
        cout << num << endl;
    }
    if (num2 > num) {
        cout << num2 << endl;
    }
    return 0;
}
int itc_min(int min1, int min2) {
    cin >> min1 >> min2;
    if (min1 > min2 || min1 == min2) {
        cout << min2 << endl;
    }
    if (min2 > min1) {
        cout << min1 << endl;
    }
    return 0;
}
int itc_max(int num, int num2) {
    cin >> num >> num2;
    if (num > num2 || num == num2) {
        cout << num << endl;
    }
    if (num2 > num) {
        cout << num2 << endl;
    }
    return 0;
}
bool itc_iseven(int num) {
    cin >> num;
    if (num % 2 == 0) {
        cout << "TRUE\n";
    }
    else {
        cout << "FALSE\n";
    }
    return 0;
    
}
int itc_revnbr(int num) {
    cin >> num;
    int a = 0, b = 0, c = 0;
    a = num / 100;
    b = (num / 10) % 10;
    c = num % 10;
    cout << c << b << a << endl;
    return 0;

}
double itc_fabs(double num) {
    cin >> num;
    if (num >= 0.0) {
        cout << num << endl;
    }
    if (num <= 0.0) {
        num = -num;
        cout << num << endl;
    }
    return 0;
}
int itc_abc(int num) {
    cin >> num;
    if (num >= 0) {
        cout << num << endl;
    }
    if (num<0) {
        num = -num;
        cout << num << endl;
    }
    return 0;
}
void itc_fio(void) {
    cout << "Zhurov\n";
    itc_name();
    cout << "Dmitrievich\n";


}
void itc_name(void) {
    cout << "Egor\n";

}