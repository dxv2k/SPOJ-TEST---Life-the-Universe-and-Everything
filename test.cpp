#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector <int> v;
    int input;
    while (cin>>input && input != 42)
          v.push_back(input);
    for (int i=0;i<v.size();i++)
    {
        cout << v[i] << endl; 
    }
    return 0;
}
