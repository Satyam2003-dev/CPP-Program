#include <iostream>
#include <conio.h>

using namespace std;

class staff
{
protected:
	int code;
	char name[20];

public:
	void getstaff(void)
	{
		cout << "\n\nEnter code :-";
		cin >> code;
		cout << "Enter name :-";
		cin >> name;
	}
	void dispstaff(void)
	{
		cout << "\nNAME:-" << name;
		cout << "\nCODE:-" << code;
	}
};

class teacher : public staff
{
	char sub[20];
	char pub[20];

public:
	void create(void)
	{
		getstaff();
		cout << "Enter Subject :-";
		cin >> sub;
		cout << "Enter Publication :-";
		cin >> pub;
	}
	void display(void)
	{
		dispstaff();
		cout << "\nSUBJECT:-" << sub;
		cout << "\nPUBLICATION:-" << pub;
	}
};

class officer : public staff
{
	char grade;

public:
	void create(void)
	{
		getstaff();
		cout << "Enter Grade :-";
		cin >> grade;
	}
	void display(void)

	{
		dispstaff();
		cout << "\nGRADE:-" << grade;
	}
};
class typist : public staff
{
	float speed;

public:
	void gettypist(void)

	{
		getstaff();
		cout << "Enter speed (wpm):-";
		cin >> speed;
	}
	void disptypist(void)

	{
		dispstaff();
		cout << "\nSPEED:-" << speed;
	}
};
class casual : public typist
{
	float dailywages;

public:
	void create(void)

	{
		gettypist();
		cout << "Enter Daily Wages :-";
		cin >> dailywages;
	}
	void display(void)

	{
		disptypist();
		cout << "\nDAILY WAGES:-" << dailywages;
	}
};
int main()
{
	teacher o1t[10];
	casual o1c[10];
	officer o1o[10];
	int choice, i;
	char test;
	while (1)
	{
		int count;
	start:

		cout << "\n=====EDUCATION INSTITUTION DATABASE=====\n\n\n";
		cout << "Choose Category of Information\n";
		cout << "1)Teachers\n";
		cout << "2)Officer\n";
		cout << "3)Typist\n";
		cout << "4)Exit\n";
		cout << "Enter your choice:-";
		cin >> choice;
		switch (choice)

		{
		case 1:
			while (1)

			{
				cout << "\n=====TEACHERS INFORMATION=====\n\n";
				cout << "\nChoose your choice\n";
				cout << "1) Create\n";
				cout << "2) Display\n";
				cout << "3) Jump to Main Menu\n";
				cout << "Enter your choice:-";
				cin >> choice;
				switch (choice)

				{
				case 1:
					for (count = 0, i = 0; i < 10; i++)

					{
						cout << endl;
						o1t[i].create();
						count++;
						cout << endl;
						cout << "\n\nAre you Interested in entering data\n";
						cout << "Enter y or n:-";
						cin >> test;
						if (test == 'y' || test == 'Y')
							continue;
						else
							goto out1;
					}
				out1:
					break;
				case 2:
					for (i = 0; i < count; i++)

					{
						cout << endl;
						o1t[i].display();
						cout << endl;
					}
					getch();
					break;
				case 3:
					goto start;
				default:
					cout << "\nEnter choice is invalid\ntry again\n\n";
				}
			}
		case 2:
			while (1)

			{
				cout << "\n=====OFFICERS INFORMATION=====\n\n";
				cout << "\nChoose your choice\n";
				cout << "1) Create\n";
				cout << "2) Display\n";
				cout << "3) Jump to Main Menu\n";
				cout << "Enter your choice:-";
				cin >> choice;
				switch (choice)

				{
				case 1:
					for (count = 0, i = 0; i < 10; i++)

					{
						cout << endl;
						o1o[i].create();
						count++;
						cout << endl;
						cout << "\n\nAre you Interested in entering data\n";
						cout << "Enter y or n:-";
						cin >> test;
						if (test == 'y' || test == 'Y')
							continue;
						else
							goto out2;
					}
				out2:
					break;
				case 2:
					for (i = 0; i < count; i++)

					{
						cout << endl;
						o1o[i].display();
						cout << endl;
					}
					getch();
					break;
				case 3:
					goto start;
				default:
					cout << "\nInvalid choice\ntry again\n\n";
				}
			}
		case 3:
			while (1)

			{
				cout << "\n=====TYPIST INFORMATION=====\n\n";
				cout << "\nChoose your choice\n";
				cout << "1) Create\n";
				cout << "2) Display\n";
				cout << "3) Jump to Main Menu\n";
				cout << "Enter your choice:-";
				cin >> choice;
				switch (choice)

				{
				case 1:
					for (count = 0, i = 0; i < 10; i++)

					{
						cout << endl;
						o1c[i].create();
						count++;
						cout << endl;
						cout << "\n\nAre you Interested in entering data\n";
						cout << "Enter y or n:-";
						cin >> test;
						if (test == 'y' || test == 'Y')
							continue;
						else
							goto out3;
					}
				out3:
					break;
				case 2:
					for (i = 0; i < count; i++)

					{
						cout << endl;
						o1c[i].display();
						cout << endl;
					}
					getch();
					break;
				case 3:
					goto start;
				default:
					cout << "\nInvalid choice\ntry again\n\n";
				}
			}
		case 4:
			goto end;
		}
	}
end:
	return 0;
}
