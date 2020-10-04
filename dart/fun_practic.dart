void main() {
  for (var i = 0; i <= 10; i++) {
    print("*" * i);
  }

  for (var i = 10; i >= 0; i--) {
    print("*" * i);
  }
  var j = 1;
  for (var i = 6; i >= 0; i--) {
    print(" " * i + "*" * j);
    j += 2;
  }

  for (var i = 6; i >= 0; i--) {
    print("  " * i + "*" * 16);
  }

  for (var i = 0; i <= 3; i++) {
    for (var i = 0; i <= 4; i++) {
      print((" " * 16 + "\$" * 16) * 4);
    }
    for (var i = 0; i <= 4; i++) {
      print(("\$" * 16 + " " * 16) * 4);
    }
  }
}
