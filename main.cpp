#include <iostream>

int main() {
	int choice = 0;

	std::cout << "1. Disable Riot Vanguard" << std::endl;
	std::cout << "2. Enable Riot Vanguard" << std::endl;
	std::cout << "3. Riot Vanguard Status" << std::endl;

	std::cout << "Choice (1-3): ";
	std::cin >> choice;

	system("cls");

	if (choice == 1) {
		system("sc config vgk start= disabled");

		std::cout << "Riot Vanguard Disabled, Please Restart Your PC";

		system("PAUSE");
	}
	else if (choice == 2) {
		system("sc config vgk start= disabled");

		std::cout << "Riot Vanguard Enabled, Please Restart Your PC";

		system("PAUSE");
	}
	else if (choice == 3) {
		system("sc query vgk");
		
		system("PAUSE");
	}
}