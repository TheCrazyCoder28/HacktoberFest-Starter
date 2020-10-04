void main() {
  var person = Person("jack", "ryan", "FBI");
  print(person); //if we print object of a class it will execute toString() method of a class

  print(Person.info()); //static properties of a class only accessable via class name
}

class Person {
  static String Company;
  String __first_name;
  String __last_name;

  Person(String first_name, String last_name, [String company]) {
    this.__first_name = first_name;
    this.__last_name = last_name;
    Company = company;
  }

  String toString() {
    return "${info()}\nName:${name()}\nCompany:${Company}";
  }

  static String info() {
    return "Information:" "this is a person class";
  }

  String name() {
    return "${__first_name} ${__last_name}";
  }
}

// point to remember:
// 1. The static variable is also identified as a class variable.

// 2. Single copy of the static variable is shared among the instance of a class.

// 3. It can be accessed using the class name. We don't need to create an object of that class they belong to.

// 4. The static variables can be accessed directly in the static methods.
