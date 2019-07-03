#include <iostream>
#include <string>

using namespace std;

struct advertising{
    int adsShown;
    double adsClicked;
    double earnPerAd;
};

double calculateEarning(advertising obj);
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

double calculateEarning(advertising obj){
    
    double total = obj.adsShown*(obj.adsClicked/100)*obj.earnPerAd;
    
    return total;
}

void printInfo(advertising obj){
    cout << "Ads shown : " << obj.adsShown;
    cout << "\nAds clicked on (%) : " << obj.adsClicked;
    cout << "\nEarning from each ad : " << obj.earnPerAd;
    
    double amount = calculateEarning(obj);
    
    cout << "\nTotal money earned : "<< amount;    
}
    
    
    
