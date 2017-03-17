//
//  main.cpp
//  Polynomial.cpp
//  Created by Nivetha Mahalakshmi Balasamy on 3/17/16.
//  Copyright © 2016 Nivetha Mahalakshmi Balasamy. All rights reserved.
//

#include "Polynomial_Nivetha.h"
#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    Polynomial p0;
    Polynomial p1;
    p0.getdata();
    p1.getdata();
    Polynomial res;
    Polynomial subres;
    Polynomial mulres;
    Polynomial p2,p3,p4;
    
    std::cout<<"P 1:"<<endl;
    cout<<p0<<endl;
    std::cout<<"P 2:"<<endl;
    cout<<p1<<endl;
    std::cout<<"Add:"<<endl;
    cout<< p0+p1 <<endl;
    std::cout<<"Sub:"<<endl;
    cout<<p0-p1<<endl;
    std::cout<<"Mul:"<<endl;
    cout<<p0*p1<<endl;
    std::cout<<"Addition Assignment:"<<endl;
    p2=p1;
    cout<<(p2+=p0)<<endl;
    std::cout<<"Subtraction Assignment:"<<endl;
    cout<<(p0-p1)<<endl;
    std::cout<<"Multiplication Assignment:"<<endl;
    cout<<(p0*=p1)<<endl;
    std::cout<<"Assignment:"<<endl;
    p0=p1;
    cout<<p0<<endl;

    
    return 0;
}
