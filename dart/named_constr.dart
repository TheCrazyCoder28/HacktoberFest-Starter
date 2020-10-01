void main() {
  var person = Person("jack", "ryan", "FBI");
  print(person.name());

  var person2 = Person.InitWithUpperCase("jack", "ryan");
  print(person2);
}

class Person {
  static String Company;
  String __first_name;
  String __last_name;

  //default constructor:
  Person(String first_name, String last_name, [String company]) {
    this.__first_name = first_name;
    this.__last_name = last_name;
    Company = company;
  }

  //named constructor:
  Person.InitWithUpperCase(String first_name, String last_name) {
    this.__first_name = first_name.toUpperCase();
    this.__last_name = last_name.toUpperCase();
  }

  String name() {
    return "${__first_name} ${__last_name}";
  }
}
