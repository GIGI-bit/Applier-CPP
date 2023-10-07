#pragma once

class Applier {
	string _name = "";
	int _age = 0;
	string _speciality = "";
	string _text = "";
public:
	Applier(){}
	Applier(string name,int age){
        setName(name);
        setAge(age);
    }
	Applier(string name,int age,string speciality,string text):Applier(name,age){
        setSpeciality(speciality);
        setText(text);
    }
    string getName() const {
        return _name;
    }

    string getSpeciality() const {
        return _speciality;
    }

    string getText() const {
        return _text;
    }

    int getAge() const {
        return _age;
    }
    void setName( string name) {
        if (name=="") {
            throw exception("Name cannot be null or empty.");
        }
        _name = name;
    }

    void setSpeciality( string speciality) {
        if (speciality=="") {
            throw exception("Speciality cannot be null or empty.");
        }
        _speciality = speciality;
    }

    void setText( string text) {
        if (text=="") {
            throw exception("Text cannot be null or empty.");
        }
        _text = text;
    }

    void setAge(int age) {
        if (age < 0) {
            throw exception("Age cannot be negative.");
        }
        if (age < 15) {
            throw exception("Min work age is 15.");
        }
        _age = age;
    }
    void Show() {
        cout << "Name: " << getName() << endl;
        cout << "Age: " << getAge() << endl;
        cout << "Speciality: " << getSpeciality() << endl;
        cout << "Description: " << getText() << endl;
    }
};


