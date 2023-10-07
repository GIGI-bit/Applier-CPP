#pragma once


class Company {
	vector<Applier*> appliers;

	string splitString(string data) {
		int space = data.find(' ');
		string newData = data.substr(space, space - data.size());
		return newData;
	}
public:
	Company(){}
	void hireUp(Applier* cv) {
		appliers.push_back(cv);
	}

	void showAllCV() {
		for (size_t i = 0; i < appliers.size(); i++)
		{
			appliers[i]->Show();
		}
	}


	void writeToFile(string filename) {
		ofstream file(filename);

		if (!file.is_open()) {
			cout << "Failed to open the file for writing." << endl;
			return;
		}

		for (int i = 0; i < appliers.size(); i++) {
			file << "Name: " << appliers[i]->getName() << endl;
			file << "Age: " << appliers[i]->getAge() << endl;
			file << "Speciality: " << appliers[i]->getSpeciality() << endl;
			file << "Text: " << appliers[i]->getText() << endl;
			file << endl;
		}

		file.close();
	}


	void readToFile(string filename) {
		vector<Applier*> newAppliers;
		ifstream file(filename);

		if (!file.is_open()) {
			cout << "Failed to open the file for reading." << endl;
			return;
		}

		string line;
		while (file.eof()) {
			Applier* newApplier = new Applier();
			getline(file, line);
			getline(file, line);
			newApplier->setName(splitString(line));
			getline(file, line);
			getline(file, line);
			newApplier->setAge(stoi(splitString(line)));
			getline(file, line);
			getline(file, line);
			newApplier->setSpeciality(splitString(line));
			getline(file, line);
			getline(file, line);
			newApplier->setText(splitString(line));
			getline(file, line);
			getline(file, line);
			newAppliers.push_back(newApplier);
		}

		file.close();
	}
};




