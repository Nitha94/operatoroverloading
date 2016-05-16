//
//  Polynomial_Nivetha.h
//  Polynomial.cpp
//  Created by Nivetha Mahalakshmi Balasamy on 3/17/16.
//  Copyright © 2016 Nivetha Mahalakshmi Balasamy. All rights reserved.
//

#ifndef Polynomial_Nivetha_h
#define Polynomial_Nivetha_h
#include <iostream>
using namespace std;

class Polynomial{
    
private:
    int c[13];
    int coeff,exp;
    //int numterms;
    
public:
    int numterms;
    //constructor
    Polynomial();
   // get ,set methods
    int getnumterms();
    void getdata();
    void setdata(int[],int[]);
    //Overload functions
   Polynomial operator+(Polynomial &p);
   Polynomial operator-(Polynomial &p);
   Polynomial operator*(Polynomial &p);
   Polynomial& operator=(Polynomial &p);
   Polynomial operator+=(const Polynomial &p);
   Polynomial operator-=(const Polynomial &p);
   Polynomial operator*=(const Polynomial &p);
    
    //ostream overload
    friend std::ostream& operator<<(std::ostream & vdu,const Polynomial& p);
    
};





#endif /* Polynomial_Nivetha_h */
