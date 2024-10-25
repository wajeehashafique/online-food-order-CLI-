#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
int main()
{
	char biryani1[]="Chicken Biryani", biryani2[]="Prawn Biryani", biryani3[]="Beef Biryani";
	char karahi1[]="Chicken Karahi" ,karahi2[]="Chicken White Karahi" ,karahi3[]="Mutton Karahi" ,karahi4[]="Mutton White Karahi";
	char daalveg1[]="Daal Mash With Butter", daalveg2[]="Mix Vegetable Curry";
	char bbq1[]="Chicken Tikka",bbq2[]="Chicken Boti",bbq3[]="Chicken Malai Boti",bbq4[]="Chicken Reshmi Kabab";
	char handi1[]="Chicken Handi With Bones", handi2[]="Mutton Handi", handi3[]="Chicken Mughlai Handi";
	char YesNo,name[30];
	string cnic,phone_no,address;
	int choice=0,choice1,choice2, quantity;
	
	cout<<"==================== Karachi Foods ====================\n"<<endl;
	cout<<"Please Enter Your Name: ";
	cin.getline(name, 20);
	cout<<"Please Enter Your CNIC No.: ";
	cin>>cnic;
	cout << "Please Enter Your phone number: ";
	cin >> phone_no;
	cout<< "Please Enter Your Address: ";
	cin.ignore();
	getline(cin, address);
	cout<<"Your Data is Safe and Secure!"<<endl;
	cout<<"Hello "<<name<<"\n\nWhat would you like to order?\n\n";

	cout<<"==================== Our Menu ====================\n"<<endl;;
    beginning:
    cout<<"\n1) Biryani "<<endl;	
	cout<<"2) Karahi "<<endl;
	cout<<"3) Daal & Vagetables "<<endl;;
	cout<<"4) BarBQ "<<endl;
	cout<<"5) Handi\n"<<endl;;
	cout<<"\nPlease Enter your Choice: ";
	cin>>choice;
if (choice>=1 && choice <=5)
{
	if(choice==1)
	 {
	 	beginning6:
		cout<<"\n1) "<<biryani1<<" Rs.140"<<"\n"<<"Ingredients: (Basmati Rice, Mint Leaves, Green Cardamom, Chicken, Yogurt , Green Chillies)\n";
		cout<<"\n2) "<<biryani2<<" Rs.250"<<"\n"<<"Ingredients: (Basmati Rice, Mint Leaves, Green Cardamom, Prawn, Yogurt , Green Chillies)\n";
		cout<<"\n3) "<<biryani3<<" Rs.200"<<"\n"<<"Ingredients: (Basmati Rice, Mint Leaves, Green Cardamom, Beef, Yogurt , Green Chillies)\n";
		cout<<"\nPlease Enter which Biryani you would like to have?: ";
		cin>>choice2;
		if(choice2>=1 && choice2<=3)
		{
			cout<<"\nPlease Enter Quantity: ";
			cin>>quantity;
			switch(choice2)
			{
			case 1: choice = 140*quantity;
			break;

			case 2: choice = 250*quantity;
			break;

			case 3: choice = 200*quantity;
			break;
			}
			switch (choice2)
			{
			 case 1:
			 cout<<"==================== Your Order ===================="<<endl;
			 cout<<""<<quantity<<" "<<biryani1;
			 cout<<"\nYour Total Bill is "<<choice<<"\nYour Order Marked Successfully";
			 cout<<"\nThe Faculty Make Sure That Your Food is Arrived Within 30 Minutes\n";
			 cout<<"\nThank you For Ordering From Karachi Foods \n";
			 break;
			 case 2:
			 cout<<"==================== Your Order ===================="<<endl;
			 cout<<""<<quantity<<"  "<<biryani2;
			 cout<<"\nYour Total Bill is "<<choice<<"\nYour Order Marked Successfully";
			 cout<<"\nThe Faculty Make Sure That Your Food is Arrived Within 30 Minutes\n";
			 cout<<"\nThank you For Ordering From Karachi Foods \n";
			 break;
			 case 3:
			 cout<<"==================== Your Order ===================="<<endl;
			 cout<<""<<quantity<<" "<<biryani3;
			 cout<<"\nYour Total Bill is "<<choice<<"\nYour Order Marked Successfully";
			 cout<<"\nThe Faculty Make Sure That Your Food is Arrived Within 30 Minutes\n";
			 cout<<"\nThank you For Ordering From Karachi Foods \n";
			 break;
			}
			cout<<"Sir would you want to add something? Press 'Y' for yes/ Press 'N' for no: ";
			cin>>YesNo;
			if(YesNo=='Y' ||YesNo=='y')
			{
			  goto beginning;
			}
			 if(YesNo == 'N'||YesNo == 'n')
            {
            	return 0;
            }
        }
        else
        {
        	cout<<"\nYou have entered wrong choice!"<<endl;
		}
		goto beginning6;
	 }
	 else if(choice==2)
	{
		beginning2:
		cout<<"\n1) "<<karahi1<<"\n"<<"Ingredients: (Chicken, Tomato, Oil, Red Chilli, Masala, Yogurt, Salt, Butter, Ginger Paste,)\n";
		cout<<"\n2) "<<karahi2<<"\n"<<"Ingredients: (Chicken, Cream, Yogurt, Onion, Garlic, Green Chillies, Salt, Masala, Oil)\n";
		cout<<"\n3) "<<karahi3<<"\n"<<"Ingredients: (Mutton, Tomato, Onion, Green Chillies, Red Chilli, Ghee, Gingar)\n";
		cout<<"\n4) "<<karahi4<<"\n"<<"Ingredients: (Mutton, Yogurt, Cream, Gingar, Garlic, Green Chillies, Oil, Butter)\n";
		cout<<"\nPlease Enter which type of Karahi you would like to have?: ";
		cin>>choice1;
		if(choice1 == 1)
		{
			cout<<"\n1) Full Rs. 1600\n"<<"2) Half Rs. 900"<<endl;
			cout<<"\nChoose Full or Half Please: ";
			cin>>choice2;
			if(choice2 == 1 || choice2 == 2)
			{
			cout<<"\nPlease Enter Quantity: ";
			cin>>quantity;
			switch(choice2)
			{
			case 1: choice = 1600*quantity;
			break;

			case 2: choice = 900*quantity;
			break;
			}
				switch (choice2)
			{
			 case 1:
			 cout<<"==================== Your Order ==================="<<endl;
			 cout<<""<<quantity<<" "<<karahi1;
			 cout<<"\nYour Total Bill is "<<choice<<"\nYour Order Marked Successfully";
			 cout<<"\nThe Faculty Make Sure That Your Food is Arrived Within 30 Minutes\n";
			 cout<<"\nThank you For Ordering From Karachi Foods "<<endl;
			 break;
			 case 2:
			 cout<<"==================== Your Order ==================="<<endl;
			 cout<<""<<quantity<<" "<<karahi1;
			 cout<<"\nYour Total Bill is "<<choice<<"\nYour Order Marked Successfully";
			 cout<<"\nThe Faculty Make Sure That Your Food is Arrived Within 30 Minutes\n";
			 cout<<"\nThank you For Ordering From Karachi Foods "<<endl;
			 break;
		    }
		    cout<<"Sir would you want to add something? Press 'Y' for yes/ Press 'N' for no: ";
			cin>>YesNo;
			if(YesNo=='Y' ||YesNo=='y')
			{
			  goto beginning;
			}
			 if(YesNo == 'N'||YesNo == 'n')
            {
            	return 0;
            }
	        }
	    }
            if(choice1 == 2)
		{
			cout<<"\n1) Full Rs. 1500\n"<<"2) Half Rs. 800"<<endl;
			cout<<"\nChoose Full or Half Please: ";
			cin>>choice2;
			if(choice2 == 1 || choice2 == 2)
			{
			cout<<"\nPlease Enter Quantity: ";
			cin>>quantity;
			switch(choice2)
			{
			case 1: choice = 1500*quantity;
			break;

			case 2: choice = 800*quantity;
			break;
			}
				switch (choice2)
			{
			 case 1:
			 cout<<"==================== Your Order ===================="<<endl;
			 cout<<""<<quantity<<" "<<karahi2;
			 cout<<"\nYour Total Bill is "<<choice<<"\nYour Order Marked Successfully";
			 cout<<"\nThe Faculty Make Sure That Your Food is Arrived Within 30 Minutes\n";
			 cout<<"\nThank you For Ordering From Karachi Foods "<<endl;
			 break;
			 case 2:
			 cout<<"==================== Your Order ==================="<<endl;
			 cout<<""<<quantity<<" "<<karahi2;
			 cout<<"\nYour Total Bill is "<<choice<<"\nYour Order Marked Successfully";
			 cout<<"\nThe Faculty Make Sure That Your Food is Arrived Within 30 Minutes\n";
			 cout<<"\nThank you For Ordering From Karachi Foods "<<endl;
			 break;
		    }
		    cout<<"Sir would you want to add something? Press 'Y' for yes/ Press 'N' for no: ";
			cin>>YesNo;
			if(YesNo=='Y' ||YesNo=='y')
			{
			  goto beginning;
			}
			 if(YesNo == 'N'||YesNo == 'n')
            {
            	return 0;
            }
	        }
	    }
	         if(choice1 == 3)
		{
			cout<<"\n1) Full Rs. 2200\n"<<"2) Half Rs. 1200"<<endl;
			cout<<"\nChoose Full or Half Please: ";
			cin>>choice2;
			if(choice2 == 1 || choice2 == 2)
			{
			cout<<"\nPlease Enter Quantity: ";
			cin>>quantity;
			switch(choice2)
			{
			case 1: choice = 2200*quantity;
			break;

			case 2: choice = 1200*quantity;
			break;
			}
				switch (choice2)
			{
			 case 1:
			 cout<<"==================== Your Order ===================="<<endl;
			 cout<<""<<quantity<<" "<<karahi3;
			 cout<<"\nYour Total Bill is "<<choice<<"\nYour Order Marked Successfully";
			 cout<<"\nThe Faculty Make Sure That Your Food is Arrived Within 30 Minutes\n";
			 cout<<"\nThank you For Ordering From Karachi Foods "<<endl;
			 break;
			 case 2:
			 cout<<"==================== Your Order ==================="<<endl;
			 cout<<""<<quantity<<" "<<karahi3;
			 cout<<"\nYour Total Bill is "<<choice<<"\nYour Order Marked Successfully";
			 cout<<"\nThe Faculty Make Sure That Your Food is Arrived Within 30 Minutes\n";
			 cout<<"\nThank you For Ordering From Karachi Foods "<<endl;
			 break;
		    }
		    cout<<"Sir would you want to add something? Press 'Y' for yes/ Press 'N' for no: ";
			cin>>YesNo;
			if(YesNo=='Y' ||YesNo=='y')
			{
			  goto beginning;
			}
			 if(YesNo == 'N'||YesNo == 'n')
            {
            	return 0;
            }
	        }
	    }
	         if(choice1 == 4)
		{
			cout<<"\n1) Full Rs. 2100\n"<<"2) Half Rs. 1100"<<endl;
			cout<<"\nChoose Full or Half Please: ";
			cin>>choice2;
			if(choice2 == 1 || choice2 == 2)
			{
			cout<<"\nPlease Enter Quantity: ";
			cin>>quantity;
			switch(choice2)
			{
			case 1: choice = 2100*quantity;
			break;

			case 2: choice = 1100*quantity;
			break;
			}
				switch (choice2)
			{
			 case 1:
			 cout<<"==================== Your Order ===================="<<endl;
			 cout<<""<<quantity<<" "<<karahi4;
			 cout<<"\nYour Total Bill is "<<choice<<"\nYour Order Marked Successfully";
			 cout<<"\nThe Faculty Make Sure That Your Food is Arrived Within 30 Minutes\n";
			 cout<<"\nThank you For Ordering From Karachi Foods "<<endl;
			 break;
			 case 2:
			 cout<<"==================== Your Order ==================="<<endl;
			 cout<<""<<quantity<<" "<<karahi4;
			 cout<<"\nYour Total Bill is "<<choice<<"\nYour Order Marked Successfully";
			 cout<<"\nThe Faculty Make Sure That Your Food is Arrived Within 30 Minutes\n";
			 cout<<"\nThank you For Ordering From Karachi Foods "<<endl;
			 break;
		    }
		    cout<<"Sir would you want to add something? Press 'Y' for yes/ Press 'N' for no: ";
			cin>>YesNo;
			if(YesNo=='Y' ||YesNo=='y')
			{
			  goto beginning;
			}
			 if(YesNo == 'N'||YesNo == 'n')
            {
            	return 0;
            }
	        }
	    }
	     else
        {
	    cout<<"\nYou have Entered wrong choice!"<<endl;
        }
        goto beginning2;
	}
          

	else if(choice==3)
	 {
	    beginning3:
		cout<<"\n1) "<<daalveg1<<" Rs.250"<<"\n"<<"Ingredients: (Daal Mash, Onion, Gingar, Tomatos, Salt, Red Chillies, Masala, Oil)\n";
		cout<<"\n2) "<<daalveg2<<" Rs.220"<<"\n"<<"Ingredients: (Cauliflower, Carrots, Potatos, Peas, Curd, Oil, Salt, Ginger, Milk, Masala, Oil)\n";
		cout<<"\nPlease Enter which 1 for Daal and 2 for Vegetable: ";
		cin>>choice2;
		if(choice2 >= 1 && choice2 <= 2)
		{
			cout<<"\nPlease Enter Quantity: ";
			cin>>quantity;
			switch(choice2)
			{
			case 1: choice = 250*quantity;
			break;

			case 2: choice = 220*quantity;
			break;

			}
			switch (choice2)
			{
			 case 1:
			 cout<<"==================== Your Order ===================="<<endl;
			 cout<<""<<quantity<<" "<<daalveg1;
			 cout<<"\nYour Total Bill is "<<choice<<"\nYour Order Marked Successfully";
			 cout<<"\nThe Faculty Make Sure That Your Food is Arrived Within 30 Minutes\n";
			 cout<<"\nThank you For Ordering From Karachi Foods "<<endl;
			 break;
			 case 2:
			 cout<<"==================== Your Order ===================="<<endl;
			 cout<<""<<quantity<<"  "<<daalveg2;
			 cout<<"\nYour Total Bill is "<<choice<<"\nYour Order Marked Successfully";
			 cout<<"\nThe Faculty Make Sure That Your Food is Arrived Within 30 Minutes\n";
			 cout<<"\nThank you For Ordering From Karachi Foods "<<endl;
			 break;
		    }
			cout<<"Sir would you want to add something? Press 'Y' for yes/ Press 'N' for no: ";
			cin>>YesNo;
			if(YesNo=='Y' || YesNo=='y')
			{
			  goto beginning;
			}
			 if(YesNo == 'N'||YesNo == 'n')
            {
            	return 0;
			}
			}
		 else
        {
	    cout<<"\nYou have Entered wrong choice!"<<endl;
        }
        goto beginning3;
		}
	
	 if(choice == 4)
	 {
	    beginning4:  
		cout<<"\n1) "<<bbq1<<" Rs.350"<<"\n"<<"Ingredients: (Chicken, Cumin Powder, Ginger & Garlic Paste, Curry Powder, Papper, Lime Juice)\n";
		cout<<"\n2) "<<bbq2<<" Rs.400"<<"\n"<<"Ingredients: (Chicken Boneless, Tikka Masala, Yogurt, Garlic & Ginger Paste, Lemon)\n";
		cout<<"\n3) "<<bbq3<<" Rs.430"<<"\n"<<"Ingredients: (Chicken Boneless, Green Chillies, Salt, Cream, Oil)\n";
		cout<<"\n4) "<<bbq4<<" Rs.450"<<"\n"<<"Ingredients: (Chicken Boneless, Onion, Green Chillies, Ginger & Garlic Paste, Salt, Butter)\n";
		cout<<"\nPlease Enter which you would like to have?: ";
		cin>>choice2;
		if(choice2>=1 && choice2<=4)
		{
			cout<<"\nPlease Enter Quantity: ";
			cin>>quantity;
			switch(choice2)
			{
			case 1: choice = 350*quantity;
			break;

			case 2: choice = 400*quantity;
			break;

			case 3: choice = 430*quantity;
			break;
			
            case 4: choice = 450*quantity;
			break;
			}
			switch (choice2)
			{
			 case 1:
			 cout<<"==================== Your Order ===================="<<endl;;
			 cout<<""<<quantity<<" "<<bbq1;
			 cout<<"\nYour Total Bill is "<<choice<<"\nYour Order Marked Successfully";
			 cout<<"\nThe Faculty Make Sure That Your Food is Arrived Within 30 Minutes\n";
			 cout<<"\nThank you For Ordering From Karachi Foods";
			 break;
			 case 2:
			cout<<"==================== Your Order ===================="<<endl;;
			 cout<<""<<quantity<<" "<<bbq2;
			 cout<<"\nYour Total Bill is "<<choice<<"\nYour Order Marked Successfully";
			 cout<<"\nThe Faculty Make Sure That Your Food is Arrived Within 30 Minutes\n";
			 cout<<"\nThank you For Ordering From Karachi Foods";
			 break;
			 case 3:
			 cout<<"==================== Your Order ===================="<<endl;;
			 cout<<""<<quantity<<" "<<bbq3;
			 cout<<"\nYour Total Bill is "<<choice<<"\nYour Order Marked Successfully";
			 cout<<"\nThe Faculty Make Sure That Your Food is Arrived Within 30 Minutes\n";
			 cout<<"\nThank you For Ordering From Karachi Foods";
			 break;
             case 4:
			 cout<<"==================== Your Order ===================="<<endl;;
			 cout<<""<<quantity<<" "<<bbq4;
			 cout<<"\nYour Total Bill is "<<choice<<"\nYour Order Marked Successfully";
			 cout<<"\nThe Faculty Make Sure That Your Food is Arrived Within 30 Minutes\n";
			 cout<<"\nThank you For Ordering From Karachi Foods";
			 break; 
			}
            cout<<"Sir would you want to add something? Press 'Y' for yes/ Press 'N' for no: ";
			cin>>YesNo;
			if(YesNo=='Y' || YesNo=='y')
			{
			  goto beginning;
			}
			if(YesNo == 'N'||YesNo == 'n')
            {
            	return 0;
			}
			}
		 else
        {
	    cout<<"\nYou have Entered wrong choice!"<<endl;
        }
        goto beginning4;
     }
	if(choice==5)
	 {
	 	beginning5:
		cout<<"\n1) "<<handi1<<"\n"<<"Ingredients: (Chicken, Oil, Onions, Tomatos, Ginger & Garlic Paste, Yogurt, Cream, Masala, Chillies, Salt)\n";
		cout<<"\n2) "<<handi2<<"\n"<<"Ingredients: (Lamb, Onion, Mint, Oil, Yogurt, Chillies, Garlic & Ginger Paste, Masala, Salt)\n";
		cout<<"\n3) "<<handi3<<"\n"<<"Imgredients: (Chicken, Musterd Oli, Onion, Ginger & Garlic, Yougurt, Egg, Salt, Water, Chillies)\n";
		cout<<"\nPlease Enter which type of Handi you would like to have?: ";
		cin>>choice1;
			if(choice1 == 1)
		{
			cout<<"\n1) Full Rs. 1800\n"<<"2) Half Rs. 1000"<<endl;
			cout<<"\nChoose Full or Half Please: ";
			cin>>choice2;
			if(choice2 == 1 || choice2 == 2)
			{
			cout<<"\nPlease Enter Quantity: ";
			cin>>quantity;
			switch(choice2)
			{
			case 1: choice = 1800*quantity;
			break;

			case 2: choice = 1000*quantity;
			break;
			}
				switch (choice2)
			{
			 case 1:
			 cout<<"==================== Your Order ==================="<<endl;
			 cout<<""<<quantity<<" "<<handi1;
			 cout<<"\nYour Total Bill is "<<choice<<"\nYour Order Marked Successfully";
			 cout<<"\nThe Faculty Make Sure That Your Food is Arrived Within 30 Minutes\n";
			 cout<<"\nThank you For Ordering From Karachi Foods "<<endl;
			 break;
			 case 2:
			 cout<<"==================== Your Order ==================="<<endl;
			 cout<<""<<quantity<<" "<<handi1;
			 cout<<"\nYour Total Bill is "<<choice<<"\nYour Order Marked Successfully";
			 cout<<"\nThe Faculty Make Sure That Your Food is Arrived Within 30 Minutes\n";
			 cout<<"\nThank you For Ordering From Karachi Foods "<<endl;
			 break;
		    }
		    cout<<"Sir would you want to add something? Press 'Y' for yes/ Press 'N' for no: ";
			cin>>YesNo;
			if(YesNo=='Y' ||YesNo=='y')
			{
			  goto beginning;
			}
			 if(YesNo == 'N'||YesNo == 'n')
            {
            	return 0;
            }
	        }
	    }
            if(choice1 == 2)
		{
			cout<<"\n1) Full Rs. 2500\n"<<"2) Half Rs. 1300"<<endl;
			cout<<"\nChoose Full or Half Please: ";
			cin>>choice2;
			if(choice2 == 1 || choice2 == 2)
			{
			cout<<"\nPlease Enter Quantity: ";
			cin>>quantity;
			switch(choice2)
			{
			case 1: choice = 2500*quantity;
			break;

			case 2: choice = 1300*quantity;
			break;
			}
				switch (choice2)
			{
			 case 1:
			 cout<<"==================== Your Order ===================="<<endl;
			 cout<<""<<quantity<<" "<<handi2;
			 cout<<"\nYour Total Bill is "<<choice<<"\nYour Order Marked Successfully";
			 cout<<"\nThe Faculty Make Sure That Your Food is Arrived Within 30 Minutes\n";
			 cout<<"\nThank you For Ordering From Karachi Foods "<<endl;
			 break;
			 case 2:
			 cout<<"==================== Your Order ==================="<<endl;
			 cout<<""<<quantity<<" "<<handi2;
			 cout<<"\nYour Total Bill is "<<choice<<"\nYour Order Marked Successfully";
			 cout<<"\nThe Faculty Make Sure That Your Food is Arrived Within 30 Minutes\n";
			 cout<<"\nThank you For Ordering From Karachi Foods "<<endl;
			 break;
		    }
		    cout<<"Sir would you want to add something? Press 'Y' for yes/ Press 'N' for no: ";
			cin>>YesNo;
			if(YesNo=='Y' ||YesNo=='y')
			{
			  goto beginning;
			}
			 if(YesNo == 'N'||YesNo == 'n')
            {
            	return 0;
            }
	        }
	    }
	         if(choice1 == 3)
		{
			cout<<"\n1) Full Rs. 2000\n"<<"2) Half Rs. 1200"<<endl;
			cout<<"\nChoose Full or Half Please: ";
			cin>>choice2;
			if(choice2 == 1 ||choice2 == 2)
			{
			cout<<"\nPlease Enter Quantity: ";
			cin>>quantity;
			switch(choice2)
			{
			case 1: choice = 2000*quantity;
			break;

			case 2: choice = 1200*quantity;
			break;
			}
				switch (choice2)
			{
			 case 1:
			 cout<<"==================== Your Order ===================="<<endl;
			 cout<<""<<quantity<<" "<<handi3;
			 cout<<"\nYour Total Bill is "<<choice<<"\nYour Order Marked Successfully";
			 cout<<"\nThe Faculty Make Sure That Your Food is Arrived Within 30 Minutes\n";
			 cout<<"\nThank you For Ordering From Karachi Foods "<<endl;
			 break;
			 case 2:
			 cout<<"==================== Your Order ==================="<<endl;
			 cout<<""<<quantity<<" "<<handi3;
			 cout<<"\nYour Total Bill is "<<choice<<"\nYour Order Marked Successfully";
			 cout<<"\nThe Faculty Make Sure That Your Food is Arrived Within 30 Minutes\n";
			 cout<<"\nThank you For Ordering From Karachi Foods "<<endl;
			 break;
		    }
		    cout<<"Sir would you want to add something? Press 'Y' for yes/ Press 'N' for no: ";
			cin>>YesNo;
			if(YesNo=='Y' ||YesNo=='y')
			{
			  goto beginning;
			}
			 if(YesNo == 'N'||YesNo == 'n')
            {
            	return 0;
            }
	        }
	    }
	     else
			{
	     	cout<<"\nYou have entered wrong choice!"<<endl;
            }
            goto beginning5;
        }
}
		 else
	    {
	    	cout<<"\nYou have entered wrong choice!"<<endl;
		}
	goto beginning;
}
