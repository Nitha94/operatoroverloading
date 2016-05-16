//
//  Polynomial_Nivetha.cpp
//  Polynomial.cpp
//  Created by Nivetha Mahalakshmi Balasamy on 3/17/16.
//  Copyright © 2016 Nivetha Mahalakshmi Balasamy. All rights reserved.
//
# include "Polynomial_Nivetha.h"
#include <iostream>
using namespace std;


Polynomial::Polynomial(){
    for(int i=0;i<13;i++)
        c[i]=0;
}

void Polynomial::getdata(){
    int e[7];
    int co[7];
    std::cout<<"Enter the number of terms needed:";
    std::cin>>numterms;
    for(int i=0;i<numterms;i++){
        std::cout<<"Enter the coefficient and exponent";
        std::cin>>co[i]>>e[i];
    }
    
    setdata(co, e);
}

void Polynomial::setdata(int co[], int e[]){
    for(int k=0;k<numterms;k++){
        c[e[k]]= co[k];
    }
    
}

Polynomial Polynomial::operator+(Polynomial &p){
    Polynomial q;
    for(int i=0;i<13;i++){
    q.c[i]=c[i]+p.c[i];
    }
    return q;
}

Polynomial Polynomial::operator-(Polynomial &p){
    Polynomial q;
    for(int i=0;i<7;i++){
        q.c[i]=c[i]-p.c[i];
        }
      return q;
}

Polynomial Polynomial::operator*(Polynomial &p){
    Polynomial q;
    for(int i=0;i<7;i++){
        if(c[i]!=0){
            for(int j=0;j<7;j++){
                if(p.c[j] != 0){
                    if(q.c[i+j] > 0){
                        q.c[i+j] = q.c[i+j]+c[i]*p.c[j];
                    }
                    else
                    q.c[i+j]=c[i]*p.c[j];
                    
                }
            }
        }
    }
    return q;
}

Polynomial& Polynomial::operator=(Polynomial &p){
    for(int i=0;i<13;i++){
        c[i]=p.c[i];
    }
    return *this;
}


Polynomial Polynomial::operator+=(const Polynomial &p){

    Polynomial q;
    for(int i=0;i<13;i++){
        q.c[i]=c[i]+p.c[i];
    }
    return q;

}

Polynomial Polynomial::operator-=(const Polynomial &p){
    Polynomial q;
    for(int i=0;i<7;i++){
        q.c[i]=c[i]-p.c[i];
    }
    return q;
}

Polynomial Polynomial::operator*=(const Polynomial&p){
    Polynomial q;
    for(int i=0;i<7;i++){
        if(c[i]!=0){
            for(int j=0;j<7;j++){
                if(p.c[j] != 0){
                    if(q.c[i+j] > 0){
                        q.c[i+j] = q.c[i+j]+c[i]*p.c[j];
                    }
                    else
                        q.c[i+j]=c[i]*p.c[j];
                    
                }
            }
        }
    }
    return q;
}


ostream& operator<<(ostream &vdu,const Polynomial &p){
    for(int i=0;i<13;i++){
        if(p.c[i]!=0){
            if(p.c[i]>0){
                vdu<<"+";
            }
        vdu<<p.c[i]<<"x^"<<i;
        }
        
    }
    return vdu;
    
}










