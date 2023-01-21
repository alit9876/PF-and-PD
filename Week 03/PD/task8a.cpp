#include <iostream>
using namespace std;
main()
{
float vegetableprice;
float fruitprice;
int numVegetable;
int numFruit;
float earning=0;
float earningpk;
cout <<"Enter price for vegetable per Kgs= ";
cin>>vegetableprice;
cout <<"Enter price for fruit per Kgs= ";
cin>>fruitprice;
cout <<"Enter number of vegetables= ";
cin>>numVegetable;
cout <<"Enter number of fruits= ";
cin >>numFruit;
earning = (fruitprice*numFruit)+(vegetableprice*numVegetable);
earningpk = earning/1.94;
cout<<"Total earning in Rps= "<<earningpk;
}
