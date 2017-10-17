//  Copyright © 2017 Dougy Ouyang. All rights reserved.

#include <iostream>

using namespace std;

int main()
{
    int a, b;
    long long e, ee;
    int i, j;
    
    cin >> a >> b;
    
    for(i=a+1;i<70;i++)
    {
        if(i==a+1)
        {
            e=2;
            for(j=0;j<i-1;j++)
                e*=2;
        }
        else
            e*=2;
        ee=e;
        while(ee>=10)
            ee/=10;
        if(ee==b)
        {
            cout << i << endl;
            return 0;
        }
    }
    cout << "0" << endl;
    
    return 0;
}
