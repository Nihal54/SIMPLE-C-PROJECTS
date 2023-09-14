#include<iostream>

using namespace std;
 char start;
    char object;
    char mobile;
    int Bill=0;
    char laptop;
    char desktop;
    char headphones;
    char speakers;
    char selectAgain;


int Mobile()
{
    cout<<endl;
            cout<<"Mobile Details"<<endl;
            cout<<endl;
            reselectm:

            cout<<" (1)\t Apple =>\t Price:\t 150000"<<endl;
            cout<<" (2)\t Samsung =>\t Price:\t 50000"<<endl;
            cout<<" (3)\t OPPO =>\t Price:\t 30000"<<endl;
            cout<<" (4)\t VIVO =>\t Price:\t 15000"<<endl;
            cout<<" (5)\t MI =>\t Price:\t 10000"<<endl;
            mobil1:
            cin>>mobile;
            

            if(mobile=='1')
            {
                Bill = Bill+150000;
                
            }
            else if (mobile=='2')
            {
                Bill = Bill + 500000;
            }
            else if (mobile=='3')
            {
                Bill = Bill + 30000;
            }
            else if (mobile=='4')
            {
                Bill = Bill + 15000;
            }
            else if (mobile=='5')
            {
                Bill = Bill + 10000;
            }

            else
            {
                cout<<"Please Enter Valid Number...."<<endl;
                goto mobil1;
            }
            cout<<"Do you want to buy more items? Y or N"<<endl;
            cin>>selectAgain;
            if(selectAgain=='Y' || selectAgain == 'y')
            {
                goto reselectm;

            }
            else  {
                return Bill;

            }
             return Bill;
            


}

int LAPTOP()
{
    cout<<endl;
            cout<<"Laptop Details"<<endl;
            cout<<endl;
            reselectl:

            cout<<" (1)\t Apple =>\t Price:\t 200000"<<endl;
            cout<<" (2)\t Samsung =>\t Price:\t 750000"<<endl;
            cout<<" (3)\t OPPO =>\t Price:\t 700000"<<endl;
            cout<<" (4)\t VIVO =>\t Price:\t 55000"<<endl;
            cout<<" (5)\t MI =>\t Price:\t 40000"<<endl;
            lapi:
            cin>>laptop;
            

            if(laptop=='1')
            {
                Bill = Bill+200000;
                
            }
            else if (laptop=='2')
            {
                Bill = Bill + 750000;
            }
            else if (laptop=='3')
            {
                Bill = Bill + 70000;
            }
            else if (laptop=='4')
            {
                Bill = Bill + 55000;
            }
            else if (laptop=='5')
            {
                Bill = Bill + 40000;
            }

            else
            {
                cout<<"Please Enter Valid Number...."<<endl;
                goto lapi;
            }
               cout<<"Do you want to buy more items? Y or N"<<endl;
            cin>>selectAgain;
            if(selectAgain=='Y' || selectAgain == 'y')
            {
                goto reselectl;

            }
            else  {
                return Bill;

            }
             return Bill;

}

int DESKTOP()
{
     cout<<endl;
            cout<<"Desktop Details"<<endl;
            cout<<endl;
reselectd:
            cout<<" (1)\t Apple =>\t Price:\t 120000"<<endl;
            cout<<" (2)\t Samsung =>\t Price:\t 70000"<<endl;
            cout<<" (3)\t OPPO =>\t Price:\t 7000"<<endl;
            cout<<" (4)\t VIVO =>\t Price:\t 5000"<<endl;
            cout<<" (5)\t MI =>\t Price:\t 4000"<<endl;
            desk:
            cin>>desktop;
            

            if(desktop=='1')
            {
                Bill = Bill+120000;
                
            }
            else if (desktop=='2')
            {
                Bill = Bill + 70000;
            }
            else if (desktop=='3')
            {
                Bill = Bill + 7000;
            }
            else if (desktop=='4')
            {
                Bill = Bill + 5000;
            }
            else if (desktop=='5')
            {
                Bill = Bill + 4000;
            }

            else
            {
                cout<<"Please Enter Valid Number...."<<endl;
                goto desk;
            }
            cout<<"Do you want to buy more items? Y or N"<<endl;
            cin>>selectAgain;
            if(selectAgain=='Y' || selectAgain == 'y')
            {
                goto reselectd;

            }
            else  {
                return Bill;

            }
             return Bill;
}

int SPEAKERS()
{

    cout<<endl;
            cout<<"Speakers Details"<<endl;
            cout<<endl;
reselects:
            cout<<" (1)\t Apple =>\t Price:\t 5000"<<endl;
            cout<<" (2)\t Samsung =>\t Price:\t 1000"<<endl;
            cout<<" (3)\t OPPO =>\t Price:\t 900"<<endl;
            cout<<" (4)\t VIVO =>\t Price:\t 800"<<endl;
            cout<<" (5)\t MI =>\t Price:\t 500"<<endl;
            speak:
            cin>>speakers;
            

            if(speakers=='1')
            {
                Bill = Bill+5000;
                
            }
            else if (speakers=='2')
            {
                Bill = Bill + 1000;
            }
            else if (speakers=='3')
            {
                Bill = Bill + 900;
            }
            else if (speakers=='4')
            {
                Bill = Bill + 800;
            }
            else if (speakers=='5')
            {
                Bill = Bill + 500;
            }

            else
            {
                cout<<"Please Enter Valid Number...."<<endl;
                goto speak;
            }
              cout<<"Do you want to buy more items? Y or N"<<endl;
            cin>>selectAgain;
            if(selectAgain=='Y' || selectAgain == 'y')
            {
                goto reselects;

            }
            else  {
                return Bill;

            }
             return Bill;
}

int HEADPHONES()
{
     cout<<endl;
            cout<<"Headphones Details"<<endl;
            cout<<endl;
            reselecth:

            cout<<" (1)\t Apple =>\t Price:\t 5000"<<endl;
            cout<<" (2)\t BOLT =>\t Price:\t 1000"<<endl;
            cout<<" (3)\t SONY =>\t Price:\t 9000"<<endl;
            cout<<" (4)\t VIVO =>\t Price:\t 800"<<endl;
            cout<<" (5)\t MI =>\t Price:\t 500"<<endl;
            Head:
            cin>>headphones;
            

            if(headphones=='1')
            {
                Bill = Bill+5000;
                
            }
            else if (headphones=='2')
            {
                Bill = Bill + 1000;
            }
            else if (headphones=='3')
            {
                Bill = Bill + 900;
            }
            else if (headphones=='4')
            {
                Bill = Bill + 800;
            }
            else if (headphones=='5')
            {
                Bill = Bill + 500;
            }

            else
            {
                cout<<"Please Enter Valid Number...."<<endl;
                goto Head;
            }

              cout<<"Do you want to buy more headphone items? Y or N"<<endl;
            cin>>selectAgain;
            if(selectAgain=='Y' || selectAgain == 'y')
            {
                goto reselecth;

            }
            else  {
                return Bill;

            }
            
             return Bill;

}

int ReturnBill()
{
   

    top:

    cout<<"Please press S for start shopping"<<endl;
    cin>>start;

    if(start=='s' || start=='S')
    {
        cout<<"*********************Welcome To NihalShopping.com********************"<<endl;
        cout<<"--------------------Please follow the instructions--------------------"<<endl;
        top3:
        cout<<"(1)\tPlease enter m to order mobile phones"<<endl;
        cout<<"(2)\tPlease enter l to order Laptops"<<endl;
        cout<<"(3)\tPlease enter d to order Desktop"<<endl;
        cout<<"(4)\tPlease enter s to order Speakers"<<endl;
        cout<<"(5)\tPlease enter h to order Headphones"<<endl;
        cin>>object;


        if(object=='M' || object == 'm')
        {

            Mobile();
            
        }



        else if(object=='l' || object == 'L')
        {
            LAPTOP();
            
        }


        else if(object=='D' || object == 'd')
        {
           DESKTOP();
        }

        
        else if(object=='S' || object == 's')
        {
            SPEAKERS();
        }
        else if(object=='H' || object == 'h')
        {

            HEADPHONES();
        }

    
      
         

          cout<<"Do you want to buy variety of  item again? Y or N"<<endl;
            cin>>selectAgain;
            if(selectAgain=='Y' || selectAgain == 'y')
            {
                goto top3;

            }
            else  {
                return Bill;

            }


        
    }
      else
        {

            cout<<"Please enter correct key"<<endl;
            goto top;
        }
    return Bill;
}

int main()
{


    int iRet =0;
    iRet = ReturnBill();

    cout<<"Your total Bill is "<<iRet<<endl;
    cout<<"Please Visit again... THANK YOU"<<endl;

}