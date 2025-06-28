#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void pairsDemo()
{
    // Declare Pair
    pair<int, int> p = {1, 2};

    // Declare Netsted Pair
    cout << p.first << " " << p.second << endl;

    pair<int, pair<int, int>> p1 = {1, {2, 3}};
    cout << p1.first << " " << p1.second.first << " " << p1.second.second << endl;

    // Declare Array of Pairs
    pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}};

    cout << arr[0].first << " " << arr[1].second << endl;
}

void vectorDemo()
{
    // Declare Empty Vector with size 0
    vector<int> v;

    cout << v.size() << endl;

    // Empaty Vector of size 5
    vector<int> v1(5);

    cout << v1.size() << endl;

    // Empaty Vector of size 5 with all element 100
    vector<int> v2(5,100);

    //Copy v2 into v3
    vector<int> v3(v2);

    //Iterate Vector
    vector<int> v4 = {1,2,3,4,5};

    //Iterate from the first element
    cout << "usage of begin" << endl ;
    vector<int>::iterator it1 = v4.begin();

    cout << *it1 << endl;
    it1++;      //Move right
    cout << *it1 << endl;

    //Iterate from the last element
    cout << "usage of rbegin" << endl ;
    vector<int>::reverse_iterator it2 = v4.rbegin();
    cout << *it2 << endl;
    it2++;          //Moves left
    cout << *it2 << endl;

     //Points to the location afterthe  last element
     cout << "usage of end" << endl ;
     vector<int>::iterator it3 = v4.end();
        //it3++         //Moves right
     it3--;     //Moves Left
     cout << *it3 << endl;
     
     //Points to the location before the first element
     cout << "usage of rend" << endl ;
     vector<int>::reverse_iterator it4 = v4.rend();
     cout << *it4 << endl;
     it4--;         //Moves right
     cout << *it4 << endl;

     //Can be delared using the auto keyword
     auto it = v.begin();

     cout << "For loop" << endl ;
     
     for(auto t :v4 ){
        cout << t << endl;
     }


     //Erase Element
     v4.erase(v4.begin()+1);



     cout << "For loop after erasing" << endl ;
     for(auto t :v4 ){
        cout << t << endl;
     }

     v4.erase(v4.begin(),v4.begin()+2);
     cout << "For loop after erasing multiple elements" << endl ;
     for(auto t :v4 ){
        cout << t << endl;
     }
}

int main()
{
    // pairsDemo();
    vectorDemo();
    return 0;
}