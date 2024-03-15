#include "BattleStage.h"

bool BattleStage(int intEnemyCourse, int& intPlayerHealth) {

	char chrResponce;
	bool morePractice = true;
	cout << "A challenger approaches, seeking to end your journey. \n";
	switch (intEnemyCourse) {

		case 1: "It's your statistics class!!"; break;
		case 2: "It's your algorithms and data structures class!"; break;
		case 3: "It's your calculus 1 class!!!"; break;
		case 4: "It's your university physics class!"; break;
		case 5: "Oh no, it's the final boss: Discrete Structures II!"; break;
		default: "It's... nothing? Let's make it the final boss!"; intEnemyCourse = 5; break;
	
	}

	cout << "It looks like the course hasn't noticed you... Want to study? [Y/N]\n>>";
	cin >> chrResponce;

	if (chrResponce == 'n' || chrResponce == 'N') {
		cout << "\nFeeling Confident? Well, let's see how you fair!";
	}
	else {
		cout << "\nGood idea!";
		while (morePractice) {
			morePractice = BattlePractice(intEnemyCourse);
			cout << "\nAll done? Let's attack the course!";
		}
	}

	return true;
}