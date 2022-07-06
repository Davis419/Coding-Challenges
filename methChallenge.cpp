#include <iostream>
using namespace std;
/*
class threeByThree
{

    public:
        double inner_product(double A1[],double A2[]);
        void display_basis(double V1[],double V2[]);
 
};
double threeByThree::inner_product(double A1[],double A2[])
{
    double inn_prod = A1[0]*A2[0] + A1[1]*A2[1] + A1[2]*A2[2]; 

    return inn_prod;
}
     
void threeByThree::display_basis(double V1[],double V2[])
{
    cout<<"The set containing the vectors {V1,V2} where: \n\n";
    cout<<"V1 = {"<<V1[0]<<","<<V1[1]<<"}, V2 = {"<<V2[0]<<", "<<V2[1]<<"}\n\n";
}
*/
double inner_product(double A1[],double A2[]);
void display_basis(double V1[],double V2[]);

int main()
{
    double A1[2] = {2,1};
    double A2[2] = {0,3};

    cout<<"\n\n"<<&A1[0]<<" "<<&A1[1]<<endl;
    
    double in_prod = inner_product(A1,A2);

    display_basis(A1,A2); 
    cout<<"<A1,A2> = "<<in_prod<<endl;

    
    if(in_prod != 0){
        cout<<"Since "<<in_prod<<" != 0, therefore the set containing the vectors {A1,A2} is not an orthogonal basis\n\n";
    
        double X1[2] = {A1[0],A1[1]};
        
        double X2[2];

        double X1_A2 = inner_product(X1,A2); 

        int X1_inn_prod = inner_product(X1,X1);

       double div_inn_prod = X1_A2 / X1_inn_prod;

       double X1_by_div_inn_prod[2];
       // for(int i = 0; i < 2; i++)
        //    X1_by_div_inn_prod[i] = div_inn_prod * X1[i];

       X1_by_div_inn_prod[0] = div_inn_prod * X1[0];
       X1_by_div_inn_prod[1] = div_inn_prod * X1[1];

       X2[0] = A2[0] - X1_by_div_inn_prod[0];
       X2[1] = A2[1] - X1_by_div_inn_prod[1];

       cout<<"The Orthogonal basis now should be {V1,v2} where: \n\n";
       display_basis(X1,X2);

        double in_prod2 = inner_product(X1,X2);
        cout<<"<X1,X2> = "<<in_prod2<<endl;

    }else{
        display_basis(A1,A2);

    }

}

double inner_product(double A1[],double A2[])
{
    double inn_prod = A1[0]*A2[0] + A1[1]*A2[1]; 

    return inn_prod;
} 

void display_basis(double V1[],double V2[])
{
    cout<<"The set containing the vectors {V1,V2} where: \n\n";
    cout<<"V1 = {"<<V1[0]<<","<<V1[1]<<"} and V2 = {"<<V2[0]<<", "<<V2[1]<<"} \n\n";
}