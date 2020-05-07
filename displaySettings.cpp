#include<iostream>
#include<string>
#include<cstdlib>
#include<fstream>

char menu();


int main()
{
	char userChoice;
	int displayChoice;
	bool loop = false;

	while(!loop)
	{
		userChoice = menu();

		std::cout << "Would you like to edit display 0 or display 1 settings" << std::endl;
		std::cin >> displayChoice;

		if(userChoice == '1')
		{

		}
		else if(userChoice == '2')
		{

		}
		else if(userChoice == '3')
		{

		}
		else if(userChoice == '4')
		{

		}
		else if(userChoice == '5')
		{

		}
		else if(userChoice == '6')
		{

		}
		else if(userChoice == '7')
		{

		}
		else if(userChoice == '8')
		{
			system("reboot");
		}
	}
}



char menu()
{
	//takes in user choice for the items to control
	char userChoice;
	bool userChoiceGood = false;


	while(!userChoiceGood)
	{
		std::cout << "Please select an option" << std::endl;

		std::cout << "Option 1: Display Rotation" << std::endl;
		std::cout << "Option 2: HDMI Force Hotplug" << std::endl;
		std::cout << "Option 3: Sound Passthrough Options" << std::endl;
		std::cout << "Option 4: Output Group" << std::endl;
		std::cout << "Option 5: Set Display Resolution" << std::endl;
		std::cout << "Option 6: Touchscreen Options" << std::endl;
		std::cout << "Option 7: Overscan Settings" << std::endl;
		std::cout << "Option 8: Exit and Reboot" << std::endl;

		std::cin >> userChoice;

		//check that the input is a valid number
		if(userChoice - '0' < 9 && userChoice - '0' > 0)
		{
			userChoiceGood = true;
			std::cout << userChoiceGood << std::endl;
		}
	}

	return userChoice;
}
