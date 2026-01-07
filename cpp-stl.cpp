#include<bits/stdc++.h>
using namespace std;

void pairs(){
    pair<int, int> p = {1,2};
    cout << p.first << "\n" << p.second <<endl;

    pair<char, char> c = {'a', 'b'};
    cout << c.first << "\n" << c.second;

    pair<char, int> arr[] = {{'A', 1}, {'B', 2} };
    cout<< arr[1].first;

}

int vectors(){
    vector<int> v1;
    v1.push_back(5);
    cout<<v1[0]<<endl;
    v1.emplace_back(6);

    //cout << v1  --not valid
    cout << v1[0] << " " << v1[1] << endl;

    // cout << v1[1,0]; -- why it's printing v1[0];

    vector<int> v2(5,10);
    //it gives me v2 = {10,10,10,10,10}
    cout << v2[0] << " " << v2[1] << " " << v2[3] << endl;

    // copy the vector
    vector<int> v3(v2);
    cout << v3[0] << " " << v3[1] << " " << v3[3] <<endl;

    //other datatype
    vector<char> v4;
    v4.emplace_back('a');
    v4.emplace_back('b');
    v4.emplace_back('c');
    v4.emplace_back('d');
    cout << v4[0];
    cout << v4[1];
    cout << v4[2] << endl;

    // it's working
    vector<char> v5(5, 'a');
    cout << v5[0];
    cout << v5[1];
    cout << v5[2] << endl;

    vector<vector<int>> v6(3, {1,2,3}); // so actually its a 2d array
    // its a matrix using vector
    cout << v6[0][2]; // gives 3

    cout << v5.back() << endl; // gives last element of v
    return 0;
}

void learnIterator(){
    // iterator is used to iterate memory addresses of element of an iterable.

    vector<int> v = {10,20,30,40,50};

    vector<int>::iterator it = v.begin();

    cout << *(it) << endl; // gives 10 i.e. v[0] between *() converts memory address to value
    it++; // iterator shifted to v[1];
    cout << *(it) << endl;  // gives 20

    vector<int>::iterator it2 = v.end();
    cout << *(it2) <<endl; //gives garbage b/c it's actually pointing to vector v[length]
    // which doesn't exist as index end at lenght - 1
    // so first it2-- then use;
    it2--;
    cout << *(it2) <<endl; //last element 50
    it2--;
    cout << *(it2) <<endl; // second last element 40
}    

void forInIterator(){
    vector<int> v = {10,20,30,40,50};     
    for ( vector<int>::iterator it = v.begin(); it != v.end(); it++){
        cout << *(it) << endl;  //prints all the elements of vector v via an iterator
    }

    // we can just replace vector<int>::itertor phrase to auto and it will auto assign the datatype
     for ( auto it = v.begin(); it != v.end(); it++){
        cout << *(it) << endl;  //prints all the elements of vector v via an iterator
    }

    // we cna write this as well - //for each loop
    for (auto it : v){
        cout << it << endl;     //*( ) not required due to auto direct value is accessed.
    }

}

void eraseInVector(){
    vector<int> v = {10,20,30,40,50};
    v.erase(v.begin()+2); //deletes v[2]
    cout<< v[2] << endl;

    v = {10,20,30,40,50};
    cout << "before delete" <<endl;
    for (auto it : v){
        cout << it << endl;    
    }

    cout << "after delete" <<endl;
    v.erase(v.begin(), v.begin()+3); //deletes v[0], v[1], v[2] not v[3] as works end-1
    for (auto it : v){
        cout << it << endl;     
    }

    v.erase(v.begin(), v.end()); //total delete
    for (auto it : v){
        cout << it << endl;     
    }


}

void printVector(vector<int> v){
    for (auto it : v){
        cout << it << " ";     
    }
    cout<<endl;
}

void insertInVector(){
    vector<int> v = {10,20,30,40,50};
    
    //insert function
    //v.insert(position, value)
    
    cout << "before insert" <<endl;
    printVector(v);

    v.insert(v.begin(), 60);

    cout << "after insert" <<endl; //v={60,10,20...}
    printVector(v);

    v.insert(v.begin(), 5, 12); //just add 5 times 12 at the position
    printVector(v);    //12 12 12 12 12 60 10 20 30 40 50 

    vector<int> v1 = {10,20,30,40,50};
    vector<int> v2 = {60,70,80,90,100};

    v1.insert(v1.begin(), v2.begin(), v2.end()); //just merges the v1 and v2 but adds v2 at beginning.
    printVector(v1);

    v1 = {10,20,30,40,50};
    v2 = {60,70,80,90,100};

    v1.push_back(*(v2.begin())); // this also works because push_back supports only int or the same datatype as of the vector.
    printVector(v1);


}

int main(){
    insertInVector();
 
    
    return 0;
}