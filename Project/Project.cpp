#include <iostream>
#include <string>

using namespace std;

int main() {
    // Parallel Arrays for Data Storage
    int MAX_ITEMS = 1000;
    int index = 5; 

    string medicineName[MAX_ITEMS] = {"Panadol", "Arinac", "Brufen", "Disprin", "Flagyl"};
    float purchasePrice[MAX_ITEMS] = {10.0, 50.0, 30.0, 5.0, 40.0}; 
    float sellingPrice[MAX_ITEMS] = {15.0, 70.0, 45.0, 10.0, 60.0}; 
    int stockQuantity[MAX_ITEMS] = {100, 50, 80, 200, 40};
    float totalProfit = 0;

    while (true) {
        system("cls");
        cout << "====================================================" << endl;
        cout << "------- Pharmacy & Medical Store Management --------" << endl;
        cout << "====================================================" << endl;
        cout << "1. Admin Menu (Owner / Inventory)" << endl;
        cout << "2. Customer Menu (Point of Sale)" << endl;
        cout << "3. Exit" << endl;
        cout << "Choose option: ";
        string useroption;
        cin >> useroption;

        if (useroption == "1") {
            string username, password;
            cout << "Enter Admin Username: "; cin >> username;
            cout << "Enter Password: "; cin >> password;

            if (username == "admin" && password == "123") {
                while (true) {
                    system("cls");
                    cout << "--- Admin Control Panel ---" << endl;
                    cout << "1: View Full Stock & Profitability" << endl;
                    cout << "2: Add New Medicine Record" << endl;
                    cout << "3: Delete Medicine Record" << endl;
                    cout << "4: Logout" << endl;
                    cout << "Choice: ";
                    int adminOpt; cin >> adminOpt;

                    if (adminOpt == 1) {
                        cout << "Name\t\tBuy\tSell\tStock\tUnit Profit" << endl;
                        for (int i = 0; i < index; i++) {
                            if (medicineName[i] != "") {
                                float unitProfit = sellingPrice[i] - purchasePrice[i];
                                cout << medicineName[i] << "\t\t" << purchasePrice[i] << "\t" 
                                     << sellingPrice[i] << "\t" << stockQuantity[i] << "\t" << unitProfit << endl;
                            }
                        }
                        cout << "\nTotal Pharmacy Earned Profit: " << totalProfit << endl;
                        return 0;
                    }
                    else if (adminOpt == 2) {
                        cout << "Enter Medicine Name: "; cin >> medicineName[index];
                        cout << "Enter Purchase Price: "; cin >> purchasePrice[index];
                        cout << "Enter Selling Price: "; cin >> sellingPrice[index];
                        cout << "Enter Quantity: "; cin >> stockQuantity[index];
                        index++;
                        cout << "Medicine Added Successfully!"; return 0;
                    }
                    else if (adminOpt == 4) break;
                }
            } else {
                cout << "Invalid Credentials!"; return 0;
            }
        }
        else if (useroption == "2") {
            system("cls");
            cout << "--- Welcome to Medical Store ---" << endl;
            cout << "Available Items:" << endl;
            for (int i = 0; i < index; i++) {
                if (medicineName[i] != "" && stockQuantity[i] > 0)
                    cout << "- " << medicineName[i] << " | Price: " << sellingPrice[i] << endl;
            }

            cout << "\nWhat would you like to buy? (Enter Name): ";
            string buyName; cin >> buyName;
            cout << "Enter Quantity: ";
            int qty; cin >> qty;

            bool found = false;
            for (int i = 0; i < index; i++) {
                if (medicineName[i] == buyName && stockQuantity[i] >= qty) {
                    float bill = qty * sellingPrice[i];
                    float cost = qty * purchasePrice[i];
                    
                    stockQuantity[i] -= qty; 
                    totalProfit += (bill - cost); 
                    
                    cout << "\n--- Customer Bill ---" << endl;
                    cout << "Medicine: " << medicineName[i] << endl;
                    cout << "Quantity: " << qty << endl;
                    cout << "Total Amount: " << bill << endl;
                    cout << "Thank you for shopping!" << endl;
                    found = true;
                    break;
                }
            }
            if (!found) cout << "Medicine not found or stock insufficient!";
            return 0;
        }
        else if (useroption == "3") break;
    }
    return 0;
}