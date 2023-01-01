#include <iostream>
using namespace std;
main()
{
 float numberflower, totalprice, disprice;
 float red,white,tullip, discount;
 cout << "Red roses = ";
 cin >> red;
 cout << "White Red roses = ";
 cin >> white;
 cout << "Tullip roses = ";
 cin >> tullip;
 red = (2.00 * red);
 white = (4.10 * white);
 tullip = (2.50 * tullip);
 totalprice = red + white + tullip;
 if (totalprice > 200)
  {
  discount = (20 * totalprice)/100;
  disprice = totalprice - discount;
  cout << "Original price = " << totalprice << endl;
  cout << "Discounted price = "<< disprice << endl;
  }
 if (totalprice <= 200)
 {
  cout << "Total Price = " << totalprice;
 }

}