//
//  main.cpp
//  standard_c++_library
//
//  Created by charlychiu on 2015/5/13.
//  Copyright (c) 2015年 charlychiu. All rights reserved.
//

#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main(int argc, const char * argv[]) {
    string str;
    stack<char> s;
    stack<int> s1,s2;
    
    s1.push(10);
    s1.push(20);
    s1.push(30);
    
    stack<int>::size_type i;
    i=s1.size();
    cout<<i<<endl;
    i=s1.top();
    cout<<i<<endl;
    s1.pop();
    i=s1.size();
    cout<<i<<endl;
    i=s1.top();
    cout<<i<<endl;
    cin>>str;
    for (int i=0; i<str.size(); i++) {
        //cout<<str[i]<<endl;
        s.push(str[i]);
        cout<<"top of the stack "<<s.top()<<endl;
        cout<<"size"<<s.size()<<endl;
        }
    
    for (int i=0; i<=s.size(); i++) {
        s.pop();
        cout<<"top"<<s.top()<<endl;
        }

    
    return 0;
}
