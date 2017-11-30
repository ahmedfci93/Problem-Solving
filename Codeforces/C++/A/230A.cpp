#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int s, n, i, j, xi, yi;
    bool win = true;
    cin >> s >> n;
    vector < vector <int> > vec (n ,vector <int>(2));
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < 2; ++j)
        {
            cin >>vec [i][j] ;
        }
        
    }
    vector <int> temp;
     for (i = 0; i < n; i++)
    {
        for (j = i+1; j < n; ++j)
        {
            if( vec [j][0] < vec[i][0])
            {
                temp = vec[i];
                vec[i] = vec[j];
                vec[j]= temp;
            } 
        }    
    }
    for (i = 0; i < n; i++)
    {
        if (vec[i][0] < s)
            s += vec[i][1];
        else 
        { 
            win = false;
            break;
        }
    }
    if (win)
        cout << "YES";
    else cout << "NO";
    return 0;
}