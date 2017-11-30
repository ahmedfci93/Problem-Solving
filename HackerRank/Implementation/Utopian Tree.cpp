#include <iostream>
using namespace std;

int height(int n) {
    int h =1,i;
    if(n!=0)
     {
        for(i=0;i<n;i++)
            {
            if(!(i%2))
                h*=2;
            else h++;
        }
    }
        
    
    return h;
}
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << height(n) << endl;
    }
}