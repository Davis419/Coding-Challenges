#include <iostream>
using namespace std;

class threeByThree
{
    private:
       static const int size;
    public:
        double inner_product(double A1[],double A2[]);
        void display_basis(double V1[],double V2[],double V3[]);
        void orthorgonality(double V1[],double V2[], double V3[]);

};

int const threeByThree::size = 3;

int main()
{   
    /* double A1[3] = {-1,0,1};
    double A2[3] = {2,1,-1};
    double A3[3] = {-1,-1,3};*/


    double A1[] = {-1,0,1};
    double A2[] = {2,5,2};
    double A3[] = {-2,1,-2};


    threeByThree obj;
    obj.orthorgonality(A1,A2,A3);

}


double threeByThree::inner_product(double A1[],double A2[])
{
    double inn_prod = A1[0]*A2[0] + A1[1]*A2[1] + A1[2]*A2[2]; 
    return inn_prod;
} 


void threeByThree::display_basis(double V1[],double V2[],double V3[])
{
    cout<<"The set containing the vectors {V1,V2,V3} where: \n\n";
    cout<<"V1 = {"<<V1[0]<<","<<V1[1]<<","<<V1[2]<<"} \n";
    cout<<"V2 = {"<<V2[0]<<","<<V2[1]<<","<<V2[2]<<"} \n";
    cout<<"V3 = {"<<V3[0]<<","<<V3[1]<<","<<V3[2]<<"}\n\n";
}

void threeByThree::orthorgonality(double V1[],double V2[], double V3[])
{
    cout<<"Are the vectors in the set {V1.V2,V3} orthogonal?\n";
    double v1v2 = inner_product(V1,V2);
    double v1v3 = inner_product(V1,V3);
    double v2v3 = inner_product(V2,V3);

    cout<<"<V1,V2> = "<<v1v2<<endl;
    cout<<"<V1,V3> = "<<v1v3<<endl;
    cout<<"<V2,V3> = "<<v2v3<<endl;

    if(v1v2 == v1v3 && v2v3 == v1v3 && v1v2 == 0)
    {
        cout<<"The set containing {V1,V2,V3} is orthogonal\n";
        display_basis(V1,V2,V3);

    }else{
       cout<<"Therefore the set containing the vectors {V1,V2,V3} is not an orthogonal basis\n";
       cout<<"Since <V1,V2> != <V1,V3> != <V2,V3> != 0\n";     
       //Use Granny-Schidmt Theorem

        //For X1
        double X1[size] = {V1[0],V1[1],V1[2]};

        cout<<V1[2]<<endl;
        double X1_X1 = inner_product(X1,X1);

        //For X2
        double X2[size];

        double X1_V2 = inner_product(X1,V2);
        
        double div_inn_prod_X2 = X1_V2 / X1_X1;

        double X1_by_div_inn_prod[size];
            X1_by_div_inn_prod[0] = div_inn_prod_X2 * X1[0];
            X1_by_div_inn_prod[1] = div_inn_prod_X2 * X1[1];
            X1_by_div_inn_prod[2] = div_inn_prod_X2 * X1[2];

        X2[0] = V2[0] - X1_by_div_inn_prod[0];
        X2[1] = V2[1] - X1_by_div_inn_prod[1];
        X2[2] = V2[2] - X1_by_div_inn_prod[2];

        //For X3
        double X3[size];

        double X1_V3 = inner_product(X1,V3);
        double div_inn_prod_X3 = X1_V3 / X1_X1;
        
        X1_by_div_inn_prod[size];
            X1_by_div_inn_prod[0] = div_inn_prod_X3 * X1[0];
            X1_by_div_inn_prod[1] = div_inn_prod_X3 * X1[1];
            X1_by_div_inn_prod[2] = div_inn_prod_X3 * X1[2];

        X3[0] = V3[0] - X1_by_div_inn_prod[0];
        X3[1] = V3[1] - X1_by_div_inn_prod[1];
        X3[2] = V3[2] - X1_by_div_inn_prod[2];

        double X2_V3 = inner_product(X2,V3);
        double X2_X2 = inner_product(X2,X2);
        div_inn_prod_X3 = X2_V3 / X2_X2;

        double X2_by_div_inn_prod[size];
            X2_by_div_inn_prod[0] = div_inn_prod_X3 * X2[0];
            X2_by_div_inn_prod[1] = div_inn_prod_X3 * X2[1];
            X2_by_div_inn_prod[2] = div_inn_prod_X3 * X2[2];

        X3[0] -= X2_by_div_inn_prod[0];
        X3[1] -= X2_by_div_inn_prod[1];
        X3[2] -= X2_by_div_inn_prod[2];
        
        cout<<"The Orthogonal basis now should be {V1,V2,V3} where: \n\n";
        orthorgonality(X1,X2,X3);
    }
}

