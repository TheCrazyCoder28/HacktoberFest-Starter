void main() {
  var employee = Employee("viplove", "sharma", 4000);
  print(employee.first_name);
  print(employee.last_name);
}

class Person {
  String first_name;
  String last_name;

  Person(String first_name, String last_name) {
    this.first_name = first_name;
    this.last_name = last_name;
  }

  Person.InitWithUpperCase(String first_name, String last_name) {
    this.first_name = first_name.toUpperCase();
    this.last_name = last_name.toUpperCase();
  }
}

class Employee extends Person {
  int salary;

  Employee(String first_name, String last_name, int salary) : super(first_name, last_name) {
    this.salary = salary;
  }
}

// <===============================usage of super keyword:=============================>
// 1. When parent class and child class have members with the same name, then super keyword can be accessed data members of parent class in child class.

// 2. It is used to access the parent class constructor in the child class.

// 3. Using the super keyword, we can access the superclass method that is overridden by the subclass.

// <=============================this keyword:================================>
// 1. The this keyword is used to point the current class object.

// 2. It can be used to refer to the present class variables.

// 3. We can instantiate or invoke the current class constructor using this keyword.

// 4. We can pass this keyword as a parameter in the constructor call.

// 5. We can pass this keyword as a parameter in the method call.

// 6. It removes the ambiguity or naming conflict in the constructor or method of our instance/object.

// 7. It can be used to return the current class instance.
