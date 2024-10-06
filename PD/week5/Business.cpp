#include<iostream>
#include<conio.h>
using namespace std;
void printHeader();
int printMenu();
main()
{
    string name1=" ",name2=" ",name3=" ";
    float price1,price2,price3;
    int quantity1,quantity2,quantity3,option;
    float total1,total2,total3,total;
    printHeader();
    while (true)
    {
    {
        /* code */
    }
    
    option=printMenu();
    if(option==1)
    {
        cout<<"Enter the name of the 1st Product: ";
        cin>>name1;
        cout<<"Enter the price of the 1st Product: ";
        cin>>price1;
        cout<<"Enter the quantity of 1st Product: ";
        cin>>quantity1;
        total1=price1*quantity1;
    }
    if(option==2)
    {
        cout<<"Enter the name of the 2nd Product: ";
        cin>>name2;
        cout<<"Enter the price of the 2nd Product: ";
        cin>>price2;
        cout<<"Enter the quantity of 2nd Product: ";
        cin>>quantity2;
        total2=price2*quantity2;
    }
    if(option==3)
    {
        cout<<"Enter the name of the 3rd Product: ";
        cin>>name3;
        cout<<"Enter the price of the 3rd Product: ";
        cin>>price3;
        cout<<"Enter the quantity of 3rd Product: ";
        cin>>quantity3;
        total3=price3*quantity3;
    }
    if(option==4)
    {
        total=total1+total2+total3;
        cout<<"All Product Data"<<endl;
        cout<<"Name"<<"\t"<<"Price"<<"\t"<<"Quantity"<<"\t"<<"Total"<<endl;
        cout<<name1<<"\t"<<price1<<"\t"<<quantity1<<"\t"<<"\t"<<total1<<endl;
        cout<<name2<<"\t"<<price2<<"\t"<<quantity2<<"\t"<<"\t"<<total2<<endl;
        cout<<name3<<"\t"<<price3<<"\t"<<quantity3<<"\t"<<"\t"<<total3<<endl;
        cout<<"The Total of ALL Products: "<<total<<endl;
    }
    if(option==5)
    {
        return 0;
    }
    cout<<"Enter any key to contunue...";
    getch();
    system("cls");
    }
}
void printHeader()
{
cout<<R"(##############################################################################################################################)"<<endl;    
cout<<R"(#            #####  ####### #     # ####### ######     #    #           #####  ######  ####### ######  #######               #)"<<endl; 
cout<<R"(#           #     # #       ##    # #       #     #   # #   #          #     # #     # #     # #     # #                     #)"<<endl;
cout<<R"(#           #       #       # #   # #       #     #  #   #  #          #       #     # #     # #     # #                     #)"<<endl;
cout<<R"(#           #  #### #####   #  #  # #####   ######  #     # #           #####  ######  #     # ######  #####                 #)"<<endl;
cout<<R"(#           #     # #       #   # # #       #   #   ####### #                # #   #   #     # #   #   #                     #)"<<endl;
cout<<R"(#           #     # #       #    ## #       #    #  #     # #          #     # #    #  #     # #    #  #                     #)"<<endl;
cout<<R"(#            #####  ####### #     # ####### #     # #     # #######     #####  #     # ####### #     # #######               #)"<<endl;
cout<<R"(#                                                                                                                            #)"<<endl;
cout<<R"(# #     #    #    #     #    #     #####  #     # ####### #     # #######     #####  #     #  #####  ####### ####### #     # #)"<<endl;
cout<<R"(# ##   ##   # #   ##    #   # #   #     # ##   ## #       ##    #    #       #     #  #   #  #     #    #    #       ##   ## #)"<<endl; 
cout<<R"(# # # # #  #   #  # #   #  #   #  #       # # # # #       # #   #    #       #         # #   #          #    #       # # # # #)"<<endl; 
cout<<R"(# #  #  # #     # #  #  # #     # #  #### #  #  # #####   #  #  #    #        #####     #     #####     #    #####   #  #  # #)"<<endl; 
cout<<R"(# #     # ####### #   # # ####### #     # #     # #       #   # #    #             #    #          #    #    #       #     # #)"<<endl; 
cout<<R"(# #     # #     # #    ## #     # #     # #     # #       #    ##    #       #     #    #    #     #    #    #       #     # #)"<<endl; 
cout<<R"(# #     # #     # #     # #     #  #####  #     # ####### #     #    #        #####     #     #####     #    ####### #     # #)"<<endl; 
cout<<R"(##############################################################################################################################)"<<endl;
}
int printMenu()
{
    int option;
    cout<<"Select one of the following options number...."<<endl;
    cout<<"1. Add 1st Product Data"<<endl;
    cout<<"2. Add 2nd Product Data"<<endl;
    cout<<"3. Add 3rd Product Data"<<endl;
    cout<<"4. View All Products Data"<<endl;
    cout<<"5. Exit"<<endl;
    cout<<"Eenter Your Option:";
    cin>>option;
    return option;
}