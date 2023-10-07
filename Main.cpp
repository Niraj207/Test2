#include"Functionalities.h"
#include"ToursitVehicle.h"
int main()
{
    ToursitVehicle* arr[3];
    CreateObject(arr);

    std::cout<<"------------------Details are:"<<std::endl;
        for(int i=0;i<3;i++)
        {
            std::cout<<*arr[i]<<std::endl;
        }

        // TouristVehicle* res[SIZE] = {};
        // FindTouristVehicle(arr, res);


       
    std::cout<<"-----------------------Booking cahrge: "<<std::endl;
   
    std::cout<<"Average booking charge is :"<<averageBookingCharge(arr)<<std::endl;
 
    std::cout<<"-----------------------Seat Counts are: "<<std::endl;
    ToursitVehicle* res[3];
    auto itr = seatCount(arr,res);

    for(int i=0;i<itr;i++)
    {
        std::cout<<*res[i];
    }

std::cout<<"--------------------MAX Booking Charge:"<<std::endl;
std::cout<<"max booking charge is:"<<*(maxbookingCharge(arr));


std::cout<<"------------memory freed-------------------"<<std::endl;
    FreeMemory(arr);
    

}







    /*
     TouristVehicle* arr[SIZE] = {};
    
    try{
        CreateObjects(arr);

        TouristVehicle* res[SIZE] = {};
        FindTouristVehicle(arr, res);

         std::cout << "Result : \n";
        for(int i = 0; i < SIZE; i++){

            if(res[i] == nullptr){
                break;
            }
            std::cout << *res[i] <<"\n";

        }

        for(int i = 0; i < SIZE; i++){
            delete res[i];
        }

        std::cout << "Average Booking Charge : " << AverageBookingCharge(arr) << "\n";

        std::cout << "Maximum Charge Tourist Vehicle : " << 
            *(MaximumChargeTouristVehicle(arr)) << "\n";

    }catch(std::runtime_error& ex){
        std::cout<< ex.what() << "\n";
    }

    


    FreeMemory(arr);
}
    */

    