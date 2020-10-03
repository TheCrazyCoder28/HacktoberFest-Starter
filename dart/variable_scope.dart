class Person {
  static String Company;
  String _first_name; //private variable
  String _last_name;

  Person(String name) {
    var temp = name.split(" ");
    this._first_name = temp[0];
    this._last_name = temp[1];
  }

  String get fullname {
    return "Name:${this._first_name} ${this._last_name}";
  }

  void set fulname(String name) {
    var temp = name.split(" ");
    this._first_name = temp[0];
    this._last_name = temp[1];
  }
}
