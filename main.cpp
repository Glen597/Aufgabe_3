#include <iostream>
unsigned const int size=5;
double mean_array_value(int *array,const unsigned int &length)
{
    int sum=0;
    int Mittel;
    for (int i = 0; i < length; ++i)
    {
        sum+=array[i];
    }
    Mittel=sum/length;
    return Mittel;
}
double mean_array_value(double *array,const unsigned int &length)
{
    double sum=0.0;
    double Mittel;
    for (int i = 0; i < length; ++i)
    {
        sum+=array[i];
    }
    Mittel=sum/length;
    return Mittel;
}
int main() {

   int *Array_A=new int [size];
    for (int i = 0; i < size; ++i)
    {
        Array_A[i]=i+1;
    }
   std::cout<< "Die Int Mittelwert ist: "<<mean_array_value(Array_A,size)<<std::endl;

    double Array_B[5]={1.0,2.5,3.5,4.5,10.0};
    std::cout<< "Die Double Mittelwert ist: "<<mean_array_value(Array_B,size)<<std::endl;

delete[]Array_A;
    return 0;
}
