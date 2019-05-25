#include <iostream> 
#include <iterator> 
#include <map> 
  
using namespace std; 
  
int main() 
{ 
  
    map<int, int> g; 
 
    g.insert(pair<int, int>(1, 40)); 
    g.insert(pair<int, int>(2, 30)); 
    g.insert(pair<int, int>(3, 60)); 
    g.insert(pair<int, int>(4, 20)); 
    g.insert(pair<int, int>(5, 50)); 
    g.insert(pair<int, int>(6, 50)); 
    g.insert(pair<int, int>(7, 10)); 

    map<int, int>::iterator itr; 
    cout << "\nThe map g is : \n"; 
    cout << "\tKEY\tELEMENT\n"; 
    for (itr = g.begin(); itr != g.end(); ++itr) { 
        cout << '\t' << itr->first 
             << '\t' << itr->second << '\n'; 
    } 
    cout << endl; 

    map<int, int> g1(g.begin(), g.end()); 
   
    cout << "\nThe map g1 after"
         << " assign from gquiz1 is : \n"; 
    cout << "\tKEY\tELEMENT\n"; 
    for (itr = g1.begin(); itr != g1.end(); ++itr) { 
        cout << '\t' << itr->first 
             << '\t' << itr->second << '\n'; 
    } 
    cout << endl; 
  
  
    cout << "\ng1 after removal of"
            " elements less than key=3 : \n"; 
    cout << "\tKEY\tELEMENT\n"; 
    g1.erase(g1.begin(), g1.find(3)); 
    for (itr = g1.begin(); itr != g1.end(); ++itr) { 
        cout << '\t' << itr->first 
             << '\t' << itr->second << '\n'; 
    } 
  
    int num; 
    num = g1.erase(4); 
    cout << "\ng1.erase(4) : "; 
    cout << num << " removed \n"; 
    cout << "\tKEY\tELEMENT\n"; 
    for (itr = g1.begin(); itr != g1.end(); ++itr) { 
        cout << '\t' << itr->first 
             << '\t' << itr->second << '\n'; 
    } 
  
    cout << endl; 
  
    cout << "g.lower_bound(5) : "
         << "\tKEY = "; 
    cout << g.lower_bound(5)->first << '\t'; 
    cout << "\tELEMENT = "
         << g.lower_bound(5)->second << endl; 
    cout << "g.upper_bound(5) : "
         << "\tKEY = "; 
    cout << g.upper_bound(5)->first << '\t'; 
    cout << "\tELEMENT = "
         << g.upper_bound(5)->second << endl; 
  
    return 0; 
} 
