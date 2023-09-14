#include<iostream>

using namespace std;


    char c;
    char item;
    char vegItem;
    int BillAmmount= 0;
    char selectAgain;


//function for selecting Veg Item
int Veg()
{
    reselect:
    cout<<"Please Select 1,2,3,4,5 \t as per your choice"<<endl;
            cout<<" (1)Panir :\t Price : 250rs "<<endl;
            cout<<" (2)Pizza :\t Price : 50rs "<<endl;
            cout<<" (3)Burger :\t Price : 200rs "<<endl;
            cout<<" (4)DalBhaat :\t Price :100rs "<<endl;
            cout<<" (5)Khichadi :\t Price :120rs "<<endl;
            veg2:
            cin>>vegItem;
            if(vegItem == '1')
            {
                BillAmmount= BillAmmount+250;



            }
            else if(vegItem =='2')
            {
                 BillAmmount= BillAmmount+50;

            }
            else if(vegItem =='3')
            {
                 BillAmmount= BillAmmount+200;

            }
            else if(vegItem =='4')
            {
                 BillAmmount= BillAmmount+100;

            }
            else if(vegItem =='5')
            {
                 BillAmmount= BillAmmount+120;

            }

            else
            {
                cout<<"Please enter valid key.. try again"<<endl;
                goto veg2;
            }

            cout<<"Do you want to add more items? Y or N"<<endl;
            cin>>selectAgain;
            if(selectAgain=='Y' || selectAgain == 'y')
            {
                goto reselect;

            }
            else  {
                return BillAmmount;

            }


             return BillAmmount;
            


}

//function for selecting NonVeg Item
int NonVEG()
{
    char NonVegItem;
      nonvegItemlist:

            cout<<"Please Select 1,2,3,4,5 \t as per your choice"<<endl;
            cout<<" (1)Chicken Masala :\t Price : 450rs "<<endl;
            cout<<" (2)Chicken Biryani :\t Price : 250rs "<<endl;
            cout<<" (3)Mutton Masala :\t Price : 600rs "<<endl;
            cout<<" (4)Mutton Biryani :\t Price :300rs "<<endl;
            cout<<" (5)Chicken Lolipop :\t Price :220rs "<<endl;
            nonveg2:
            cin>>NonVegItem;
            if(NonVegItem == '1')
            {
                BillAmmount= BillAmmount+450;



            }
            else if(NonVegItem =='2')
            {
                 BillAmmount= BillAmmount+250;

            }
            else if(NonVegItem =='3')
            {
                 BillAmmount= BillAmmount+600;

            }
            else if(NonVegItem =='4')
            {
                 BillAmmount= BillAmmount+300;

            }
            else if(NonVegItem =='5')
            {
                 BillAmmount= BillAmmount+220;

            }

            else
            {
                cout<<"Please enter valid key.. try again"<<endl;
                goto nonveg2;
            }

            cout<<"Do you want to add more items? Y or N"<<endl;
            cin>>selectAgain;
            if(selectAgain=='Y' || selectAgain == 'y')
            {
                goto nonvegItemlist ;

            }
            else  {
                return BillAmmount;

            }
           return BillAmmount;

}



int returnTotalBill()
{
   

    cout<<"..................WELCOME TO FOOD ORDER................."<<endl;
    cout<<"..................Please Follow Below Instructions......"<<endl;
    cout<<"Step-1 : please press S to start your Order "<<endl;
    cout<<"Step-2 : You can Order Both Veg And Non-Veg items "<<endl;
    cout<<"Step-3 : Please press A to select Veg Item"<<endl;
    cout<<"Step-4 : Please press B to select Veg Item "<<endl;
    cout<<"Step-5 : You will get your Final Bill after your Order"<<endl;
    start:

    cin>>c;
    if( c== 'S' || c=='s')
    {
        items:

        cout<<"Please select your choice"<<endl;
        cout<<"(A) Veg \t\t\t (B)Non-Veg"<<endl;
        cin>>item;
        
        if(item == 'A'|| item=='a')
        {
            Veg();  

        }

        else if(item == 'B'|| 'b')
        {
          NonVEG();
            

        }


        else
        {
            cout<<"You Enter wrong keyy... please try Again..";
            goto items;

        }

    }
    else
    {
        cout<<"You Have enter wrong Key.. Please press S/s"<<endl;
        goto start;

    }
    return BillAmmount;
}


int main()
{

    int iRet = 0;

    iRet = returnTotalBill();
    cout<<"Your Bill is :"<<iRet<<endl;
    cout<<"ThankYou!!Please Visit Again"<<endl;


}