class Student {
  String _name;
  int _roll;
  Student(String name, int roll) {
    this._name = name; //private variables of class
    this._roll = roll;
  }

  String get Details {
    //getter method of class
    return "Nmae:${this._name}\nRoll. NO. ${this._roll}";
  }

  void set Name(String name) {
    // setter method of a class
    this._name = name;
  }

  void set Roll(int roll) {
    this._roll = roll;
  }

  String get Name {
    return _name;
  }
}
