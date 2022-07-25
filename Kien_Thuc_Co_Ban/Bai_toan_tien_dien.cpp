#include <iostream>
#include <math.h>
using namespace std;
int tinhtien(int n){
    int tien = 1;
    if (n <= 50){
        tien = n * 1678;
    }else if (n > 50 && n <= 100){
        tien = 50 * 1678 + (n - 50) * 1734;
    }else if (n > 100 && n <= 200){
        tien = 50 * 1678 + 50 * 1734 + (n - 100) * 2014;
    }else if (n > 200 && n <= 300){
        tien = 50 * 1678 + 50 * 1734 + 100 * 2014 + (n - 200) * 2536;
    }else if (n > 300 && n <= 400){
        tien = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + (n - 300) * 2834;
    }else if (n > 400 ){
        tien = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + 100 * 2834 + (n - 400) * 2927;
    }
    return round(tien + (tien * 0.1));
}
int main(){
    int n;
    cin >> n;
    cout << tinhtien(n);
    
    
    return 0;
}
