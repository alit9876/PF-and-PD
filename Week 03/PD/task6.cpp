#include <iostream>
using namespace std;
main()
{
int bagSize;
int costBag;
float area;
float fertilizerPerPound;
float areafield;
cout <<"Enter bag size in bound= ";
cin>>bagSize;
cout <<"Enter cost of the bag= ";
cin>>costBag;
cout <<"Enter area covered by each bag=";
cin>>area;
fertilizerPerPound = costBag/bagSize;
cout <<"Cost of fertilizer per pound= "<<fertilizerPerPound<<endl;
areafield = bagSize * area;
cout<<"Cost of fertilizing the area per square feet= "<<areafield;
}


