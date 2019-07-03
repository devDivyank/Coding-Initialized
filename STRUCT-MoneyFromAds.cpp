#include <iostream>
#include <string>

using namespace std;

struct advertising{
    int adsShown;
    double adsClicked;
    double earnPerAd;
};

void printInfo(advertising object);

int main()
{
    advertising first;
    
    cout << "How many ads have you shown? \n";
    cin >> first.adsShown;
    
    cout << "What percentage of ads have been clicked on? \n";
    cin >> first.adsClicked;
    
    cout << "Earning from each ad on average?\n";
    cin >> first.earnPerAd;
    
    printInfo(first);
    
    return 0;
}

void printInfo(advertising obj){
    cout << "Ads shown : " << obj.adsShown;
    cout << "\nAds clicked on (%) : " << obj.adsClicked;
    cout << "\nEarning from each ad : " << obj.earnPerAd;
    
    double amount = obj.adsShown*(obj.adsClicked/100)*obj.earnPerAd;
    
    cout << "\nTotal money earned : "<< amount;    
}
