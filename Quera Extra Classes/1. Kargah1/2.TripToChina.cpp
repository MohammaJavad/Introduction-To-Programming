#include <iostream>
using namespace std;

int main()
{
    int TempMenNumber;
    cin >> TempMenNumber;
    int MenNumber = TempMenNumber + 1;

    int WomenNumber;
    cin >> WomenNumber;

    int TotalNumber = MenNumber + WomenNumber;

    int ConstFoodPrice = 3;
    int FoodPrice=0;

    string Breakfest;
    cin >> Breakfest;
    if (Breakfest=="yes")
    {
        FoodPrice = FoodPrice + (ConstFoodPrice*TotalNumber);
    }
    
    
    string Lunch;
    cin >> Lunch;
    if (Lunch=="yes")
    {
        FoodPrice = FoodPrice + (ConstFoodPrice*TotalNumber);
    } 


    string Dinner;
    cin >> Dinner;
    if (Dinner=="yes")
    {
        FoodPrice = FoodPrice + (ConstFoodPrice*TotalNumber);
    }

    int Reservation;
    cin >> Reservation;

    int ConstRoomPerNight = 50;
    int ConstAdditionalBed = 5;
    int RoomPricePerNight = 0;
    int RoomPrice=0;
    int PriceToPay=0;
    if (MenNumber==WomenNumber)
    {
        RoomPricePerNight = ConstRoomPerNight + (ConstAdditionalBed*(TotalNumber-1)) + FoodPrice;
        PriceToPay = RoomPricePerNight*Reservation;
        if ((TotalNumber >= 20) or (Dinner=="yes" and Lunch=="yes" and Breakfest=="yes"))
        {
            PriceToPay = PriceToPay/2;
        }
        
        cout << PriceToPay;
    } else cout << "vatanam ey shokoohe pabarja" << endl;
    
}