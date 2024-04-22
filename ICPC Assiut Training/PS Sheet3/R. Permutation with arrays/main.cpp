#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
        int sizeofarray;
        unordered_map<int,int> hm;
        cin>>sizeofarray;
        int arr1[sizeofarray],arr2[sizeofarray];
        for(int i=0 ; i<sizeofarray ; i++)
        {
            cin>>arr1[i];
            int x =arr1[i];
            hm[x]++;
        }
        for(int i=0 ; i<sizeofarray ; i++)
        {
            cin>>arr2[i];

        }
        for(int i=0 ; i<sizeofarray ; i++)
        {
            int x =arr2[i];

            if(hm[x] == 0)
            {
                cout << "no" << endl;
                return 0;
            }
            hm[x]--;
        }
        cout << "yes" << endl;

    return 0;
}
