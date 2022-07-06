#include <iostream>
using namespace std;


double inner_product(double A1[],double A2[])
{
    double inn_prod = A1[0]*A2[0] + A1[1]*A2[1]; 

    return inn_prod;
}      


int main()
{
    double A1[2] = {2,1};
    double A2[2] = {0,3};

    double in_prod = inner_product(A1,A2); 
    cout<<"<A1,A2> = "<<in_prod<<endl;

    
    if(in_prod != 0){
        cout<<"The set containing the vectors {A1,A2} is not an orthogonal basis\n\n";
    
        double X1[2] = {A1[0],A1[1]};
        
        double X2[2];

        double X1_A2 = inner_product(X1,A2); 

        int X1_inn_prod = inner_product(X1,X1);

       double div_inn_prod = X1_A2 / X1_inn_prod;

       double X1_by_div_inn_prod[2];
       X1_by_div_inn_prod[0] = div_inn_prod * X1[0];
       X1_by_div_inn_prod[1] = div_inn_prod * X1[1];

       X2[0] = A2[0] - X1_by_div_inn_prod[0];
       X2[1] = A2[1] - X1_by_div_inn_prod[1];

       cout<<"The Orthogonal basis now should be {X1,X2} where: \n\n";
       cout<<"X1 = {"<<X1[0]<<","<<X1[1]<<"} and X2 = {"<<X2[0]<<","<<X2[1]<<"} \n\n";
   

    }else{
        cout<<"Set containing the vectors {A1,A2} is orthogonal basis"<<endl;
    }

}