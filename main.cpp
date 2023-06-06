#include<iostream>
using namespace std;

int main() {
    // total sales of company
    float total_sales = 0.0;
    // average sales of company
    float average_sales = 0.0;
    // total sales of a product in each region
    float sales[4] = {0.0, 0.0, 0.0, 0.0};
    int regions[4] = {1, 2, 3, 4};  

    // we will gather the sales data for each region anc calculate total sales
    for(int i=0; i<4; i++){
        cout << "Enter sales for region " << regions[i] << ": ";
        cin >> sales[i];
        total_sales = total_sales + sales[i];
    }

    // calculate average sales
    average_sales = total_sales / 4;
  
    // Calculate and display sales performance of each region
    for(int i=0; i<4; i++){
        if(sales[i] >= average_sales){
            cout << "Total sales in region " << regions[i] << " is above average\n";
        }
        else{
            cout << "Total sales in region " << regions[i] << " is below average\n";
        }
    }

    return 0;
}
