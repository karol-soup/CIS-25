


int inputStart(int startUnit) {
	bool ii = false;
	while (!ii) {//true
		cout << "Starting unit (Cups = 1, Tbsp = 2, Tsp = 3, FL oz = 4) : ";
		cin >> startUnit;
		//3<1// no3>4 no 0<1 yes 5>4 yes
		if (startUnit < 1 || startUnit > 4) { //if unit  fits in this criteria we enter stament
			cout << "Please enter a Valid number" << endl;
			ii = false;// will loop agaim
		}
		else {
			ii = true;// if true will break out of loop
			break;
		}

	}
	return startUnit;
}
