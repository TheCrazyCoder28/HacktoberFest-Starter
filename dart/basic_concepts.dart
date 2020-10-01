void main() {
  int a = 45;
  print(a is int);
  print("${a is int}");

  int x = 24;
  print(x++); //postfix
  print(++x); //prefix
  print(x--); //prefix
  print(--x); //prefix

  var l = [6, 4, 7, 54, 2, -4, -1, -99];
  print(l.runtimeType);
  print(l);
  l.sort();
  print("${l}\n");

  List l1 = new List();
  print(l1.runtimeType);
  print(l1);
  l1.add(55);
  print(l1);
  l1.addAll([33, 44, 66]);
  print(l1);
  l1.removeAt(0);
  var ls = l1.toString();
  print("${ls.runtimeType}\n");

  List<int> l2 = new List<int>();
  print(l2.runtimeType);
  l2.add(10);
  print(l2);

  int su = sum(4, 6);
  print(su);

  int mu = mul(2, 4);
  print(mu);
}

sum(a, b) {
  int c;
  c = a + b;
  print("The sum is:${c}");
  return c;
}

mul(a, b, {c = 5}) {
  int d;
  d = a * b * c;
  print("The mul is:${d}");
  return d;
}
